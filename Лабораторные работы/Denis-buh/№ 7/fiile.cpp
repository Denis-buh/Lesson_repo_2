



#include <iostream>
#include <cmath>
using namespace std;

// Выводим массив 
void print_arr(const float* arr, const int len_arr_2){
    int i = 0; 
    for (; i < (len_arr_2 - 1); i += 1){
        cout << arr[i] << ", ";
    };
    cout << arr[i] << "\n";
};


void found_characteristics(float a, float b, float c, float &perimeter, float &square){
    // Ищем переметр треугольника
    perimeter = a + b + c; 
    // Полупереметр
    float p = perimeter / 2;
    // ищем площадь
    square = sqrt(p * (p - a) * (p - b) * (p - c));
}

void sort(float* arr, const int len_arr){
    for (int i = 0; i < len_arr - 1; i += 1){
        // index минимального элемента
        int min_iitem_arr = i;
        for (int ii = i + 1; ii < len_arr; ii += 1){
            if (arr[ii] < arr[min_iitem_arr]){
                min_iitem_arr = ii; 
                continue;
            }
        }
        float temp = arr[min_iitem_arr]; 
        arr[min_iitem_arr] = arr[i];
        arr[i] = temp; 
    }
}


int main(){
    // Добавление локализации
    system("chcp 1251");
    // Делаем рандомные числа рандомными
    srand(time(NULL) % 10000);

    // Обьявляем массив для треугольников
    const int len_arr_tren = 5;
    // Массив переметов
    float p_arr_tren[len_arr_tren] = {8, 4, 2, 9, 0}; 
    // Массив площадей
    float s_arr_tren[len_arr_tren] = {3, 5, 2, 43, 1}; 

    // Заполняем массив
    for (int i = 0; i < len_arr_tren; i += 1){
        float a, b, c; 
        cout << "Введите параметры для треугольника № " << i + 1 << "\n";
        cout << "\tВведите значение для a:"; 
        cin >> a;
        cout << "\tВведите значение для b:"; 
        cin >> b;
        cout << "\tВведите значение для c:"; 
        cin >> c;
        found_characteristics(a, b, c, p_arr_tren[i], s_arr_tren[i]);
        cout << "Перенметр треугольника: " << p_arr_tren[i] << "\n";
        cout << "Площадь треугольника: " << s_arr_tren[i] << "\n";
        system("pause");
        system("cls");

    };
    cout << "Массив переметров\nДо сортировки\n";
    print_arr(p_arr_tren, len_arr_tren); 
    sort(p_arr_tren, len_arr_tren); 
    cout << "После сортировки\n";
    print_arr(p_arr_tren, len_arr_tren); 

    cout << "\n";

    cout << "Массив площадей\nДо сортировки\n";
    print_arr(s_arr_tren, len_arr_tren); 
    sort(s_arr_tren, len_arr_tren); 
    cout << "После сортировки\n";
    print_arr(s_arr_tren, len_arr_tren); 


    system("pause"); // Данная строка добавляет задержку для окна консоли
    return 0;
};

