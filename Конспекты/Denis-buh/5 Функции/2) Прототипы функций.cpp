



#include <iostream>
using namespace std;



// � ��������� ������� ������ ���� ������� �� ���������� � ������� ������������ ��� ������ ��� ������������� ����� �������
// � ��������� ����� �� ��������� �������� ��������

double my_fun(double[], const int); // ��� �������� �������. ��������� �� main. �� �������� ��� ���������� �������� �������
// double my_fun(double arr[], const int LEN_arr);


int main(){
    system("chcp 1251");

    const int LEN = 10;
    double arr[LEN] = {1.9, 2.6, 34.45, 5, 6, 6, 7, 8, 9, 43.3};
    double res = my_fun(arr, LEN);
    cout << "��������� �����������: " << res << "\n";
    system("pause");
}

/*
���������� � �������
*/
double my_fun(double arr[], const int LEN_arr){
    double sum = 0;

    for (int i = 0; i < LEN_arr; i += 1){
        sum += arr[i];
    }
    return sum;

}