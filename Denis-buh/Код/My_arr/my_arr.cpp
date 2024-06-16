



#include <iostream>
#include "my_random.cpp"
#include <vector>

using namespace std;


class My_arr{
public:
    // Конструкторы
    My_arr(){
        this->number_arr = vector<int>(25);
    }

    My_arr(int input_number): My_arr(){
        for (int i = 0; i < 24; i += 1){
            this->number_arr[i] = my_random::random(); 
        }
        // Вбиваем в массив введенный параметр
        this->number_arr[11] = input_number;
        this->number_arr[24] = input_number;

    }

    void print(){
        for (int n : this->number_arr){
            cout << n << " ";
        }
        cout << "\n";
    }

    void sort(){
        // Бьем вектор на под вектора
        vector <int> item_to_number;
        vector <int> number_to_sort;
        int len_number_to_sort = 0; 

        {
            int pos_item = 0;
            int neg_item = 0;
            
            for (int item : this->number_arr){
                if (item > 0)  {pos_item += 1;}
                else if (item < 0)  {neg_item += 1;}
            }

            if (pos_item > neg_item){
                for (int n : this->number_arr){
                    if (n > 0) {number_to_sort.push_back(n);}
                    else {item_to_number.push_back(n);}
                }
                len_number_to_sort = pos_item; 
            }

            else if (pos_item < neg_item){
                for (int n : this->number_arr){
                    if (n < 0) {number_to_sort.push_back(n);}
                    else {item_to_number.push_back(n);}
                }
                len_number_to_sort = neg_item; 
            }
        }
            
        this->number_arr.clear();
        for (int i = 0; i < len_number_to_sort - 1; i += 1){
            for (int j = i + 1; j  < len_number_to_sort; j += 1){
                if (number_to_sort[i] < number_to_sort[j]){
                    int temp = number_to_sort[i];
                    number_to_sort[i] = number_to_sort[j];
                    number_to_sort[j] = temp;
                }
            }
        }

        this->number_arr = number_to_sort;
        for (int n : item_to_number)  {this->number_arr.push_back(n);}
    }

protected:
    vector<int> number_arr;
};