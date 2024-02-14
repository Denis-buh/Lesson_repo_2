



#include <iostream>
#include <ctime>

using namespace std;



void print_arr(int* arr, const short len_arr){
    cout << "Содержимое массива: ";
    for (int i = 0; i < len_arr; i += 1){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


void sort_arr(int* arr, const short len_arr){
    // Индекс минимального элемента
    int index_min_item = 0;

    // Поиск минимального индекса
    for (int i = 0; i < len_arr; i += 1){
        if (arr[index_min_item] > arr[i]){
            index_min_item = i;
        }
    }

    // Производим сортировку по возрастанию за индексом минимального элемента (по условию задания)
    // Так же пропустим последнюю итерацию так как в ней нет смысла (внутрений цикл не сможет отработать)
    for (int i = index_min_item + 1; i < len_arr - 1; i += 1){
        // Изменение индекса минимального элемента (предположим что i это минимальный элемент)
        index_min_item = i;
        // Ищем новые минимальные элементы (начать с индекса i+1 так как i уже взята)
        for (int ii = i + 1; ii < len_arr; ii += 1){
            // Проверка на минимальный элемент
            if (arr[index_min_item] > arr[ii]){
                // Был найден более минимальный элемент, присваиваем новый индекс 
                index_min_item = ii;
            }
        }

        // Проверяем что изначально выбрали не минимальный элемент
        if (index_min_item != i){
            // Временное хранилище для старого минимального элемента. Ложем в хранилище старый минимальный элемент
            int temp = arr[i];
            arr[i] = arr[index_min_item];
            arr[index_min_item] = temp;
        }
    }
}



int main(){
    // Добавление локализации
    system("chcp 1251"); 

    // Делаем рандомные числа рандомными
    srand(time(NULL) % 10000);
    
    // Это размер массива
    const short len_arr = 29;
    // Это массив 
    int arr[len_arr]; 

    // Заполняем массив рандобными числами
    for (int i = 0; i < len_arr; i += 1){
        arr[i] = rand(); //% 100; 
    }
    // Выводим массив в консоль
    print_arr(arr, len_arr); 
    sort_arr(arr, len_arr);
    cout << "Массив отсортирован\n";
    print_arr(arr, len_arr);


    system("pause"); // Данная строка добавляет задержку для окна консоли
    return 0;
}

