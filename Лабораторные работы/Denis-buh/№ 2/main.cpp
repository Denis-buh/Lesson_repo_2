



#include <iostream>
#include <vector>
#include "modle.cpp"

using namespace std;
#define DEBUG

#ifdef DEBUG
int main(){
    system("chcp 1251");
    Square_matrix mat;

    while(true){
        system("cls");
        cout << "Доступные действия\n";
        cout << "1) Ввести данные для матрицы\n";
        cout << "2) Вывести матрицу\n";
        cout << "3) Транспонировать матрицу\n";
        cout << "4) Найти определитель матрицы\n";
        cout << "5) Выйти с программы" << endl;
        cout << "Выберете номер нужного действия: ";
        int action;
        cin >> action; 
        system("cls");
        try{
            switch(action){
                case 1:{
                    //cout << "Введите размер матрицы: ";
                    int n = 3; 
                    //cin >> n;
                    // Создаем массив елементов матрицы
                    int max_len_item = 0; 
                    vector<vector<float>>items(n); 
                    for (int i = 0; i < n; i += 1){
                        items[i] = vector<float>(n);
                        for (int ii = 0; ii < n; ii += 1){
                            cout << "Введите элемент с номером: " << (i + 1) << "." << (ii + 1) << ": ";
                            string temp;
                            cin >> temp;
                            items[i][ii] = stof(temp); 
                        }
                    }
                    mat = Square_matrix(items, n);
                    cout << "Данные введены\n";
                }
                    break;

                case 2:
                    mat.print(); 
                    break;

                case 3:
                    mat.tranponate();
                    cout << "Матрица транспонирована\n";
                    break;

                case 4:
                    cout << "Детерминант матрицы " << mat.found_det() << "\n"; 
                    break;

                case 5:
                    return 0;
            }
        }
        catch (const exception& ex){
                cout << "Произошла ошибка\n";
                cout << "Подробности: " << ex.what() << "\n";
            }
        system("pause");
    }
}
#else
int main(){
    system("chcp 1251");
    int n = 3; 
    vector<vector<float>>items= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; 
    // По умолчанию
    Square_matrix mat;
    // С инициализацией
    Square_matrix mat2(items);
    // Через копирование
    Square_matrix mat3(mat2);

    system("pause");
}


#endif 
