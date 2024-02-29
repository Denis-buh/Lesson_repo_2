



#include <iostream>
#include <ctime>
using namespace std;

// ������� ������ 
void print_arr(const int* arr, const int len_arr_2){
    for (int i = 0; i < len_arr_2; i += 1){
        cout << arr[i] << ", ";
    };
};



// ��� ���� ������� ��������������
float found_sdaf(const int* arr, const int len_arr_2){
    // ���� ����� ������������ �������
    int index_max_item = 0;
    for (int i = 1; i < len_arr_2; i += 1){
        if (*(arr + i) > *(arr + index_max_item)){
            index_max_item = i; 
        };
    };
    // ���� ������� �������������� ����� ������������� ��������
    float sum = 0;
    float cout_numbers = len_arr_2 - index_max_item - 1; 
    if (cout_numbers == 0){
        return 0.0;
    };

    for (int i = index_max_item + 1; i < len_arr_2; i += 1){
        sum += *(arr + i); 
    };

    return (sum / cout_numbers); 

};


int main(){
    // ���������� �����������
    system("chcp 1251");
    // ������ ��������� ����� ����������
    srand(time(NULL) % 10000);


    // ��������� ������ �������
    const int len_arr_1 = 20;
    const int len_arr_2 = 15;
    // ��������� ������
    int arr[len_arr_1][len_arr_2];

    // ��������� ������
    for (int i = 0; i < len_arr_1; i += 1){
        for (int ii = 0; ii < len_arr_2; ii += 1){
            arr[i][ii] = rand() % 100; 
        };
        cout << "������ �: " << i + 1 << ")\t";
        print_arr(arr[i], len_arr_2);
        cout << "\n";
        if (((i +1) % 4) == 0){
            cout << "������� �������������� = " << found_sdaf(arr[i], len_arr_2) << "\n";
        } 
    };


    system("pause"); // ������ ������ ��������� �������� ��� ���� �������
    return 0;
};

