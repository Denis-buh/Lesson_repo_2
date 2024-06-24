
#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>


namespace Project1 {

	vector<int> createArray(int lastElement) {
		vector<int> array(15);

		// ������������� ���������� ��������� �����
		srand(time(0));

		// ��������� ������ ���� ��������� � 10 ��� ������ ����� ��������
		for (int i = 0; i < 3; ++i) {
			array[i] = i * 10;
		}

		// ���������� ��������� ��������� ���������� �������
		for (int i = 3; i < 14; ++i) {
			array[i] = rand() % 201 - 100; // ��������� ����� �� -100 �� 100
		}

		// ��������� ���������� ��������
		array[14] = lastElement;

		return array;
	}

	int sumAfterMinOddIndices(const vector<int>& array) {
		// ����� ������ ������������ ��������
		auto minElementIter = min_element(array.begin(), array.end());
		int minIndex = distance(array.begin(), minElementIter);

		// ��������� ����� ���������, ������������� ����� ������������ � ������� �� �������� ������
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
		cout << "������� ��������� ������� �������: ";
		cin >> lastElement;

		// �������� � ����� ������������ �������
		vector<int> array = createArray(lastElement);
		cout << "����������� ������: ";
		for (int num : array) {
			cout << num << " ";
		}
		cout << endl;

		// ���������� ����� ��������� ����� ������������, ������� �� �������� ������
		int sum = sumAfterMinOddIndices(array);
		cout << "����� ���������, ������������� ����� ������������ � ������� �� �������� ������: " << sum << endl;

		// ���������� ������� �� ��������
		sort(array.begin(), array.end(), greater<int>());
		cout << "��������������� ������: ";
		for (int num : array) {
			cout << num << " ";
		}
		cout << endl;

		return 0;
	}
}
