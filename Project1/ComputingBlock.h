
#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>


namespace Project1 {

	vector<int> createArray(int lastElement) {
		vector<int> array(15);

		// Инициализация генератора случайных чисел
		srand(time(0));

		// Установка первых трех элементов в 10 раз больше своих индексов
		for (int i = 0; i < 3; ++i) {
			array[i] = i * 10;
		}

		// Заполнение остальных элементов случайными числами
		for (int i = 3; i < 14; ++i) {
			array[i] = rand() % 201 - 100; // Случайное число от -100 до 100
		}

		// Установка последнего элемента
		array[14] = lastElement;

		return array;
	}

	int sumAfterMinOddIndices(const vector<int>& array) {
		// Найти индекс минимального элемента
		auto minElementIter = min_element(array.begin(), array.end());
		int minIndex = distance(array.begin(), minElementIter);

		// Вычислить сумму элементов, расположенных после минимального и стоящих на нечетных местах
		int sum = 0;
		for (size_t i = minIndex + 1; i < array.size(); ++i) {
			if (i % 2 != 0) {
				sum += array[i];
			}
		}

		return sum;
	}

	int main_computing() {
		int lastElement;
		cout << "Введите последний элемент массива: ";
		cin >> lastElement;

		// Создание и вывод изначального массива
		vector<int> array = createArray(lastElement);
		cout << "Изначальный массив: ";
		for (int num : array) {
			cout << num << " ";
		}
		cout << endl;

		// Вычисление суммы элементов после минимального, стоящих на нечетных местах
		int sum = sumAfterMinOddIndices(array);
		cout << "Сумма элементов, расположенных после минимального и стоящих на нечетных местах: " << sum << endl;

		// Сортировка массива по убыванию
		sort(array.begin(), array.end(), greater<int>());
		cout << "Отсортированный массив: ";
		for (int num : array) {
			cout << num << " ";
		}
		cout << endl;

		return 0;
	}
}
