



#include <iostream>
#include <ctime>

using namespace std;



void print_arr(int* arr, const short len_arr){
    cout << "���������� �������: ";
    for (int i = 0; i < len_arr; i += 1){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


void sort_arr(int* arr, const short len_arr){
    // ������ ������������ ��������
    int index_min_item = 0;

    // ����� ������������ �������
    for (int i = 0; i < len_arr; i += 1){
        if (arr[index_min_item] > arr[i]){
            index_min_item = i;
        }
    }

    // ���������� ���������� �� ����������� �� �������� ������������ �������� (�� ������� �������)
    // ��� �� ��������� ��������� �������� ��� ��� � ��� ��� ������ (��������� ���� �� ������ ����������)
    for (int i = index_min_item + 1; i < len_arr - 1; i += 1){
        // ��������� ������� ������������ �������� (����������� ��� i ��� ����������� �������)
        index_min_item = i;
        // ���� ����� ����������� �������� (������ � ������� i+1 ��� ��� i ��� �����)
        for (int ii = i + 1; ii < len_arr; ii += 1){
            // �������� �� ����������� �������
            if (arr[index_min_item] > arr[ii]){
                // ��� ������ ����� ����������� �������, ����������� ����� ������ 
                index_min_item = ii;
            }
        }

        // ��������� ��� ���������� ������� �� ����������� �������
        if (index_min_item != i){
            // ��������� ��������� ��� ������� ������������ ��������. ����� � ��������� ������ ����������� �������
            int temp = arr[i];
            arr[i] = arr[index_min_item];
            arr[index_min_item] = temp;
        }
    }
}



int main(){
    // ���������� �����������
    system("chcp 1251"); 

    // ������ ��������� ����� ����������
    srand(time(NULL) % 10000);
    
    // ��� ������ �������
    const short len_arr = 29;
    // ��� ������ 
    int arr[len_arr]; 

    // ��������� ������ ���������� �������
    for (int i = 0; i < len_arr; i += 1){
        arr[i] = rand(); //% 100; 
    }
    // ������� ������ � �������
    print_arr(arr, len_arr); 
    sort_arr(arr, len_arr);
    cout << "������ ������������\n";
    print_arr(arr, len_arr);


    system("pause"); // ������ ������ ��������� �������� ��� ���� �������
    return 0;
}

