



#include <iostream>
#include <stdexcept> // Это чтобы была возможность подымать исключения
#include <vector>


using namespace std;


class Square_matrix{
private:
    // размер матрицы
    unsigned int n = 0;
    // Массив елементов матрицы
    vector<vector<float>> items = {};
public:
    // Конструкторы
    // По умолчанию
    Square_matrix(){
        // Устанавливаем стандартные значения
        this->items = {};
        this->n = 0; 
    }
    // С инициализацией
    Square_matrix(vector<vector<float>> items, unsigned int n = 0){
        // Устанавливаем поданные значения
        if (n == 0){
            n = size(items); 
        }
        this->set_inform(n, items); 
    }
    // Копирование
    Square_matrix(const Square_matrix& obj){
        // Устанавливаем поданные значения
        this->set_inform(obj.n,  obj.items); 
    }

    // Методы
    // Заполнение матрицы
    void set_inform(unsigned int n, vector<vector<float>> items){
        for (int i = 0; i < n; i += 1){
            if (n != size(items[i])){
                throw invalid_argument("Количество строк не совпадает с количеством столбцов!");
            }
        }
        // Чистим матрицу
        this->items.clear();
        this->n = n; 
        this->items = items; 
    }
    // вывод в консоль
    void print(){
        cout << "(";
        if (size(this->items) != 0){
            // Показываем элементы матрицы
            for (int i = 0; i < this->n; i += 1){
                cout << "\n";
                for (int ii = 0; ii < this->n; ii += 1){
                    cout << this->items[i][ii] << " ";
                }
            }
            cout << "\n";
        }
        cout << ")\n";
    }
    // транспонирование
    void tranponate(){
        if (this->n == 0){
            throw runtime_error("Обьект класса не инициализирован!");
        }
        // Массив для новых значений
        vector<vector<float>>new_items(n); 
        for (int i = 0; i < this->n; i += 1){
            // Создаем строчку для массива
            new_items[i] = vector<float>(n);
            for (int ii = 0; ii < this->n; ii += 1){
                new_items[i][ii] = this->items[ii][i]; 
            }
        }
        this->items = new_items; 
    }
    // поиск детерминанта
    int found_det(){
        if (this->n == 0){
            throw runtime_error("Обьект класса не инициализирован!");
        }
        float sum_plus = 0; 
        float sum_neg = 0; 
        for (int i = 0; i < this->n; i += 1){
            // Определяем главную диагональ
            sum_plus += (this->items[i][0]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][2]); 
            // Определяем побочную диагональ
            sum_neg += (this->items[i][2]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][0]); 
        }
        return (sum_plus - sum_neg); 
    }
    // Деконструктор
    ~Square_matrix(){
        // Чистим матрицу
        this->items.clear();
        this->n = 0; 
    }
};

