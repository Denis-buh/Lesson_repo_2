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

int min_finding(int* arr)//функция по нахождению минимального из массива 
{
	int min(*arr);
	for (int el_index = 0; el_index < 14; el_index++)
	{
		if (min > *(arr + el_index + 1)) min = *(arr + el_index + 1);
	}
	return min;
}

int arr_view(int* arr)// функция для вывода массива 
{
	cout << "1-dim array: " << endl;
	for (int el_index = 0; el_index < 15; el_index++)
	{
		cout << setw(3) << *(arr + el_index) << ';';
	}
	cout << endl;
	return 0;
}

int main()
{
	int main_array[15][15];
	int* main_array_pointer = &main_array[0][0];
	srand(time(0)); //инициализируем рандомайзер
	for (int el_index = 0; el_index < 225; el_index++)//цикл, что вносит в массив случ. числа
	{
		*(main_array_pointer + el_index) = (rand() % 11) - 5;//непосредственно внос рандомных чисел
	}
	for (int arr_index = 0; arr_index < 15; arr_index++)
	{
		int min;
		int sum = 0;
		arr_view(*(main_array + arr_index));//вывод "рабочего" одномерного массива
		min = min_finding(*(main_array + arr_index));//нахождение минимального из "рабочего" одномерного массива
		for (int el_index = 0; el_index < 15; el_index++)
		{
			if (*(*(main_array + arr_index) + el_index) == min)
			{
				break;
			}
			if (*(*(main_array + arr_index) + el_index) < 0)
			{
				sum += *(*(main_array + arr_index) + el_index);
			}
		}
		cout << "Sum in this 1 - dim array: " << sum << ", Min : " << min << endl;
	}
	system ("pause");
	return 0;
}
