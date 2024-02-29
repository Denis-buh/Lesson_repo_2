/*
10. В функции подсчитать количество отрицательных элементов одномерного массива, порядковый номер которых меньше номера минимального
элемента. Использовать функцию для каждой строки двумерного массива
размерности 15 на 15.


Задание. В соответствии с вариантом создать функцию, параметрами
которой являются: одномерный массив и его размерность.
Функцию реализовать двумя способами:
1) через обращение к элементам массива через указатели,
2) обычным способом.
Оба способа должны различаться: видами записи формальных и фактических параметров функции, обращением к элементам массива.
Можно создать два экземпляра программы, либо выполнить одну программу с разными функциями.
Продемонстрировать возможность применения созданной функции к
строкам двумерного массива. Элементы двумерного массива задать случайным образом, не забыв вывести их на экран.
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std; 



// функция для вывода массива (одномерного (строки матрицы), без ук-лей)
void arr_view(int arr[], int arr_dim){
	for (int el_index = 0; el_index < arr_dim; el_index+=1)
	{
			cout << setw(3) << arr[el_index] << ';';
	}
	cout << endl;
}


int number_of_neg_el(int arr[], int arr_dim) //функция, выполняющая подсчёт эл-ов для отдельной строки
{

	int min = 0;
	for (int el_index = 1; el_index < arr_dim; el_index++)
	{
		if (arr[min] > arr[el_index]) min = el_index;
	}
	cout << "Loc min: " << min << endl;

	int sum = 0;

	for (int el_index = 0; el_index < min; el_index++)
	{
		if (arr[el_index] < 0) sum += arr[el_index];
	}
	cout << "Local sum" << sum << endl;
	return sum;
}



int main(){
    system("chcp 1251");
	srand(time(0)); //инициализируем рандомайзер

	int arr_dim_numb = 15;
	int main_array[15][15];
	int* main_array_pointer = &main_array[0][0];

    // цикл, что вносит в массив случ. числа
	for (int el_index = 0; el_index < 15; el_index++) {
		for (int el_index_aux = 0; el_index_aux < 15; el_index_aux++){
            // непосредственно внос рандомных чисел
			main_array[el_index][el_index_aux] = (rand() % 11) - 5;
		}
	}

	cout << "Input array: ";
	for (int dim_index = 0; dim_index < 15; dim_index++){
			arr_view(main_array[dim_index], arr_dim_numb);
	}

	int sum;
	for (int layer = 0; layer < arr_dim_numb; layer++){

		sum += number_of_neg_el(main_array[layer], arr_dim_numb);
	}
	cout << "Сумма:" << sum << endl;
	system("pause"); 
	
}




