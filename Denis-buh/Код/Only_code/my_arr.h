



#pragma once


#include <iostream>
#include <vector>
#include <sstream>


template<class type> class My_arr {
public:
	My_arr() {}

	My_arr(std::vector<type> input_number){
		this->number_arr.assign(input_number.begin(), input_number.end());
	}

	void print(){
		for (type n : this->number_arr) {
			std::cout << n << " ";
		}
		std::cout << "\n";
	}

	std::string iprint() {
		std::string res = std::to_string(this->number_arr[0]);
		for (int i = 1; i < this->number_arr.size(); i += 1) {
			res += ", ";
			res += std::to_string(this->number_arr[i]);
		}
		return res; 
	}

	void sort() {
		std::vector <type> item_to_number;
		std::vector <type> number_to_sort;
		int len_number_to_sort = 0;
		{
			int pos_item = 0;
			int neg_item = 0;

			for (type item : this->number_arr) {
				if (item > 0) { pos_item += 1; }
				else if (item < 0) { neg_item += 1; }
			}

			if (pos_item > neg_item) {
				for (type n : this->number_arr) {
					if (n > 0) { number_to_sort.push_back(n); }
					else { item_to_number.push_back(n); }
				}
				len_number_to_sort = pos_item;
			}

			else if (pos_item < neg_item) {
				for (type n : this->number_arr) {
					if (n < 0) { number_to_sort.push_back(n); }
					else { item_to_number.push_back(n); }
				}
				len_number_to_sort = neg_item;
			}
			else{return;}
		}

		this->number_arr.clear();
		for (int i = 0; i < len_number_to_sort - 1; i += 1) {
			for (int j = i + 1; j < len_number_to_sort; j += 1) {
				if (number_to_sort[i] < number_to_sort[j]) {
					type temp = number_to_sort[i];
					number_to_sort[i] = number_to_sort[j];
					number_to_sort[j] = temp;
				}
			}
		}
		this->number_arr = number_to_sort;
		for (type n : item_to_number) { this->number_arr.push_back(n); }
	}

protected:
	std::vector<type> number_arr;
};