



#include <iostream>
using namespace std;

/**
���������� ��� ������������ �������
 * @brief 
 * 
 * @param arr ������
 * @param len_arr ����� �������
 */
void show_arr(const int * const arr, const int len_arr){
    for (int i = 0; i < len_arr; i += 1){
        cout << "������� ������ � " << i << " = " << arr[i] << "\n";
    }
}


/**
���������� ��� ����������� �������
 * @brief 
 * 
 * @param arr ������
 * @param len_arr ����� �������
 * @return int - ����� �������
 */
int* copy_arr(int * const arr, const int len_arr){
    int *arr2 = new int [len_arr];
    for (int i = 0; i < len_arr; i += 1){
        arr2[i] = arr[i];
    }

    return arr2;
}


/**
���������� ��� ���������� ������ � ������
 * @brief 
 * 
 * @param arr ������
 * @param len_arr ����� �������
 */
void append_arr(int *&arr, int &len_arr, const int new_item){
    // *&arr - ��������� �� ������ (��������� �� ������). ��������� ����������� ������� ������ ���������
    // &len_arr - ������ �� ����� �������
    // new_item - �������� ������� �� ����� �������� � ������
    int *new_arr = new int[len_arr + 1]; // ������� ����� ������
    
    // ��������� �������� ������� �������
    for (int i = 0; i < len_arr; i += 1){
        new_arr[i] = arr[i];
    }

    // ��������� ��������� ������� �������
    new_arr[len_arr] = new_item;
    len_arr = len_arr +  1; // ������ ����� �������

    delete [] arr; // ����������� ������ �� ������������� �������
    arr = new_arr; // ��������� �� ����� ������
}


int main()
{
    system("chcp 1251");

    /*
    ������������ ������� � ������� �� ����������� �����:
        1) ������ ������ �� ����
        2) �������� ������ � ������ �� �������� 
        3) ������ ���� ������
    */
   
    int len_arr = 3; // ������� ���������� � �������� ������������� �������
    int *arr = new int[len_arr]{1, 2, 3}; // ������� ������������ ������ (������ ���� � �������� ������� ���������� ����� ����� ����������� ��������)
    /* �� ���������������� ������
    int *arr = new int[len_arr]
    for (int i = 0; i < len_arr; i += 1){
        arr[i] = i + 1;
    }
    */

    // ��������� ������ 
    
    // ������� �������� �������
    cout << "������� �������� �������:\n";
    show_arr(arr, len_arr);
    

    // �������� ������ arr
    int *copy_ar = copy_arr(arr, len_arr);

    cout << "������������ ������: \n";
    show_arr(arr, len_arr);

    delete [] arr; // ����������� ������ �� ������������� �������
    arr = nullptr; // �������� ���������. ����� ��������� ����� ������� ��� ������. ��� �������� � int


    cout << "����� �������: \n";
    show_arr(copy_ar, len_arr);

    cout << "���������� ������: \n";
    append_arr(copy_ar, len_arr, 6);
    show_arr(copy_ar, len_arr);
    system("pause");
} 