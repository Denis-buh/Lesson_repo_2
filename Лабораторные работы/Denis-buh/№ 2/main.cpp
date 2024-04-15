



#include "iostream"
#include "vector"

using namespace std;


class Square_matrix{
private:
    // размер матрицы
    unsigned int n = 0;
    // длина самого дленного элемента
    unsigned int max_len_item = 0;
    // Массив елементов матрицы
    vector<vector<int>> items;
public:
    // конструктор класса c отложенной инициализацией
    Square_matrix(){}
    // конструктор класса c инициализацией
    Square_matrix(int n){
        this->n = n;
        // Чистим массив елементов матрицы
        this->items.clear();
        this->max_len_item = 0; 
        this->items = vector<vector<int>>(n); 
    }
    // Методы
    // Заполнение матрицы
    void input_item(){
        if (not this->n){
            cout << "Введите размер матрицы: ";
            cin >> this->n;
            // Чистим массив елементов матрицы
            this->items.clear();
            this->max_len_item = 0; 
            this->items = vector<vector<int>>(n); 
        }
        // Заполняем массив
        for (int i = 0; i < this->n; i += 1){
            this->items[i] = vector<int>(n);
            for (int ii = 0; ii < this->n; ii += 1){
                cout << "Введите элемент с номером: " << (i + 1) << "." << (ii + 1) << ": ";
                string temp;
                cin >> temp;
                // Проверка на самое длиное число 
                if (this->max_len_item < size(temp)){
                    this->max_len_item = size(temp); 
                }
                this->items[i][ii] = stoi(temp); 
            }
        }
    }
    // вывод в консоль
    friend ostream& operator<<(ostream& os, const Square_matrix& mat){
        os << "(";
        if (size(mat.items) != 0){
            // Показываем элементы матрицы
            os.setf(ios::left); 
            for (int i = 0; i < mat.n; i += 1){
                os << "\n";
                for (int ii = 0; ii < mat.n; ii += 1){
                    os.width(mat.max_len_item); 
                    os << mat.items[i][ii] << " ";
                }
            }
            os << "\n";
        }
        os << ")";
        return os;
    }
    // транспонирование
    void tranponate(){
        // Массив для новых значений
        vector<vector<int>>new_items(n); 
        for (int i = 0; i < this->n; i += 1){
            // Создаем строчку для массива
            new_items[i] = vector<int>(n);
            for (int ii = 0; ii < this->n; ii += 1){
                new_items[i][ii] = this->items[ii][i]; 
            }
        }
        this->items = new_items; 
    }
    // поиск детерминанта
    int found_det(){
        int sum_plus = 0; 
        int sum_neg = 0; 
        for (int i = 0; i < this->n; i += 1){
            // Определяем главную диагональ
            sum_plus += (this->items[i][0]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][2]); 
            // Определяем побочную диагональ
            sum_neg += (this->items[i][2]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][0]); 
        }
        return (sum_plus - sum_neg); 
    }
};



int main(){
    system("chcp 1251");
    Square_matrix mat(3);
    mat.input_item();
    cout << mat << "\n";

    cout << "Детерминант матрицы " << mat.found_det() << "\n"; 

    mat.tranponate();

    cout << mat << "\n";

    cout << "Детерминант матрицы " << mat.found_det() << "\n"; 

    system("pause");
    return 0;
}