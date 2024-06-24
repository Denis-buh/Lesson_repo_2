




#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>


class Arr {
public:
	Arr(std::vector<int> vector_arr) {
		this->vector_arr.assign(vector_arr.begin(), vector_arr.end());
	}

	std::string iprint() {
		std::string res = std::to_string(this->vector_arr[0]);
		for (int i = 1; i < this->vector_arr.size(); i += 1) {
			res += ", ";
			res += std::to_string(this->vector_arr[i]);
		}
		return res;
	}

	void print() {
		for (int n : this->vector_arr) {
			std::cout << n << " ";
		}
		std::cout << "\n";
	}

	void sort() {
		std::sort(vector_arr.begin(), vector_arr.end(), std::greater<int>());
	}

	int get_sum_after_min() {
		// Найти индекс минимального элемента
		int minIndex = std::distance(this->vector_arr.begin(), 
			std::min_element(this->vector_arr.begin(), this->vector_arr.end()));

		// Вычислить сумму элементов, расположенных после минимального и стоящих на нечетных местах
		int sum = 0;
		for (int i = minIndex + 1; i < this->vector_arr.size(); i += 1) {
			if (i % 2 == 0) {
				sum += this->vector_arr[i];
			}
		}
		return sum;
	}
private:
	std::vector<int> vector_arr; 
};

