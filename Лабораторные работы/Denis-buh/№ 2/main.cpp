



#include <iostream>
#include <vector>
#include "modle.cpp"

using namespace std;
//#define DEBUG

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
    cout << "Создание объекта через конструктор по умолчанию\n";
    // По умолчанию
    Square_matrix mat;
    cout << "Вывод обьекта в консоль: ";
    mat.print();

    system("pause");
    system("cls");

    int n = 3; 
    vector<vector<float>>items(n); 
    cout << "Введите значения для матрицы\n";
    for (int i = 0; i < n; i += 1){
        items[i] = vector<float>(n);
        for (int ii = 0; ii < n; ii += 1){
            cout << "Введите элемент с номером: " << (i + 1) << "." << (ii + 1) << ": ";
            float temp;
            cin >> temp;
            items[i][ii] = temp; 
        }
    }
    cout << "Создание объекта через конструктор c инициализацией\n";
    Square_matrix mat2(items);
    cout << "Вывод обьекта в консоль:\n";
    mat2.print();
    cout << "Вывод обьекта в консоль после транспанирования:\n";
    mat2.tranponate();
    mat2.print();
    cout << "Вывод детерминанта объекта в консоль: " << mat2.found_det() << "\n";

    system("pause");
    system("cls");

    // Через копирование
    cout << "Создание объекта через конструктор копирования\n";
    Square_matrix mat3(mat2);
    cout << "Вывод обьекта в консоль:\n";
    mat3.print();
    cout << "Вывод обьекта в консоль после транспанирования:\n";
    mat3.tranponate();
    mat3.print();
    cout << "Вывод детерминанта объекта в консоль: " << mat3.found_det() << "\n";

    system("pause");
    return 0; 
}


#endif 
