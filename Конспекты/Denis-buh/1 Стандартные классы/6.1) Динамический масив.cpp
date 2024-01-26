



#include <iostream>
using namespace std;

/**
Необходима для демонстрации массива
 * @brief 
 * 
 * @param arr массив
 * @param len_arr длина массива
 */
void show_arr(const int * const arr, const int len_arr){
    for (int i = 0; i < len_arr; i += 1){
        cout << "Элемент масива № " << i << " = " << arr[i] << "\n";
    }
}


/**
Необходима для копирования массива
 * @brief 
 * 
 * @param arr массив
 * @param len_arr длина массива
 * @return int - копия массива
 */
int* copy_arr(int * const arr, const int len_arr){
    int *arr2 = new int [len_arr];
    for (int i = 0; i < len_arr; i += 1){
        arr2[i] = arr[i];
    }

    return arr2;
}


/**
Необходима для добавления данных в массив
 * @brief 
 * 
 * @param arr массив
 * @param len_arr длина массива
 */
void append_arr(int *&arr, int &len_arr, const int new_item){
    // *&arr - указатель на массив (указатель на ссылку). Добавляет возможность подмены адреса оперативы
    // &len_arr - ссылка на длину массива
    // new_item - значение которое мы хотим добавить в массив
    int *new_arr = new int[len_arr + 1]; // Создаем новый массив
    
    // Добавляем элементы старого массива
    for (int i = 0; i < len_arr; i += 1){
        new_arr[i] = arr[i];
    }

    // Добавляем последный элемент массива
    new_arr[len_arr] = new_item;
    len_arr = len_arr +  1; // Меняем длину массива

    delete [] arr; // Освобождаем память от динамического массива
    arr = new_arr; // Ссылаемся на новый массив
}


int main()
{
    system("chcp 65001");

    /*
    Динамические массивы в отличии от статических могут:
        1) Менять размер на лету
        2) Засорять память в случае не удаления 
        3) Менять свой размер
    */
   
    int len_arr = 3; // Создаем переменную с размером динамического массива
    int *arr = new int[len_arr]{1, 2, 3}; // Создаем динамический массив (должна быть в качестве размера переменная иначе будет статическим массивом)
    /* Не инициализованный массив
    int *arr = new int[len_arr]
    for (int i = 0; i < len_arr; i += 1){
        arr[i] = i + 1;
    }
    */

    // Заполняем массив 
    
    // Выводим значения массива
    cout << "Выводим значения массива:\n";
    show_arr(arr, len_arr);
    

    // Копируем массив arr
    int *copy_ar = copy_arr(arr, len_arr);

    cout << "Оригинальный массив: \n";
    show_arr(arr, len_arr);

    delete [] arr; // Освобождаем память от динамического массива
    arr = nullptr; // Зануляем указатель. После зануления можно удалять без ошибок. Нет путаници с int


    cout << "Копия массива: \n";
    show_arr(copy_ar, len_arr);

    cout << "Дополненый массив: \n";
    append_arr(copy_ar, len_arr, 6);
    show_arr(copy_ar, len_arr);


} 