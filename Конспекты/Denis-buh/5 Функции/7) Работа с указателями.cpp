



#include <iostream>
using namespace std;


/**
�������� ���������� �����
 * @tparam arrey 
 * @param arr  ����� ��������
 * @param LEN_arr  ������ ������
 * @return arrey ��������������� �����
 */
template <typename arrey>
arrey sum(arrey *arr, const int LEN_arr){
    // *arr - ��������� ��� ������ � �������� (��� ��� ��� ��������� ������� 1 ������� ������)
    arrey res = 0;
    for (int i = 0; i < LEN_arr; i += 1){
        res += arr[i];
    }
    return res;
}


void my_fun(int *number, int *number_1){// �� ������������ ��-�� ��������� ��������� � ����. ������ ����� ��������� ���������� � ������ ����� ��������� ���������� �� �������
    // *number * ���������� ��� ���� ����� �������� ����� 
    int res = *number  + 1; // ��������������� ��������� (������� ��������) � ���������� � ���� 1
    *number = res; // ������ �������� � ������� ��� (�� ������� ��������� *number � number)
    *number_1 = 20; 
}


int main(){
    system("chcp 1251");

    const int LEN_my_arr = 5;
    double my_arr[LEN_my_arr] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double sum_arr = sum(my_arr, LEN_my_arr);

    cout << sum_arr << "\n";

    int number = 10, number_1 = 0;
    cout << "number = " << number << "\t" << "number_1 = " << number_1 << "\n";
    my_fun(&number, &number_1); // ���������� ������������ �������� ����� �������� ����� �� �����
    cout << "number = " << number << "\t" << "number_1 = " << number_1 << "\n";
    system("pause");
}