



#include <iostream>
using namespace std;


/*
���������� � �������
*/
inline void my_fun(int number = 6){
    // inline ��������� �������� ��� my_fun � ��� ������� main (������ ��� ��� ��� ����� my_fun). �������� ������ � ������� ��������� (��� ������, ������, ��������)
    cout << "number = " << number << "\n";
}


int main(){
    system("chcp 1251");
    my_fun(7);
    my_fun(); // ������ �� ����� ��� ��� ������� �������� ��������� �� ���������
    system("pause");
}

