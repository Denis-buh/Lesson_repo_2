// Отсортировать в порядке возрастания положительные элементы массива А[20], расположенные до минимального из элементов

#include <iostream>
#include <iomanip>
#include <ctime> // импортируем библиотеки: iostream как стандартную, iomanip - для удобного вывода, ctime - для подключения рандомайзера
using namespace std; 

int arr_view(int arr[]);// функция для вывода массива
int min_finding(int arr[]);//функция по нахождению минимального из массива
int main()
{
	int min;
	int A[20]; //инициализируем массив
	srand(time(0)); //инициализируем рандомайзер
	for (int el_index = 0; el_index < 20; el_index++) //цикл, что вносит в массив случ. числа
	{
		A[el_index] = (rand() % 11) - 5;//непосредственно внос рандомных чисел
	}
	cout << "Input";
	arr_view(A);
	min = min_finding(A);
	cout << "Min: " << min << endl; // 
	for (int el_index = 0; el_index < 19; el_index++)//цикл, задающий индексы первых элементов при сравнении методом пр. выбора
	{
		if (A[el_index] == min_finding(A)) break;
		int temp;
		for (int el_ind_next = el_index; el_ind_next < 19; el_ind_next++)//цикл, задающий индексы вторых элементов при сравнении методом пр. выбора
		{
			if ((A[el_index] == min_finding(A)) || (A[el_ind_next] == min_finding(A))) break;//проверка на минимальность эл-та: если тот минимален, сортировка прекращается
			if ((A[el_index] > A[el_ind_next]) && (A[el_index] > 0) && (A[el_ind_next]>0))//непосредственно сравнение эл-тов: они должны быть больше 0, притом если первый больше второго, они "меняются местами"
			{
				temp = A[el_index];
				A[el_index] = A[el_ind_next];
				A[el_ind_next] = temp;
			}
		}
	}
	cout << "Output";
	arr_view(A);
	system ("pause");
	return 0;
}

int arr_view(int arr[]) // функция для вывода массива 
{
	cout << " array: " << endl;
	for (int el_index = 0; el_index < 20; el_index++)
	{
		cout << setw(3) << arr[el_index] << ';';
	}
	cout << endl;
	return 0;
}

int min_finding(int arr[])//функция по нахождению минимального из массива 
{
	int min(arr[0]);
	for (int el_index = 0; el_index < 19; el_index++)
	{
		if (min > arr[el_index + 1]) min = arr[el_index + 1];
	}
	return min;
}