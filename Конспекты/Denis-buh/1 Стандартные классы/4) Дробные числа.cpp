



#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251");

    // ������� �����
    // float - 4 ���� (��������: ��������� ��������)
    float number_flt = 23.6;  // ��� ��������� ���������� � ������� �������� ����� ������
    cout << number_flt << "\n";

    // double - 8 ���� (��������: ������� ��������)
    double number_dbl = 45.9;  // ��� ��������� ���������� � ������� �������� ����� ������
    cout << number_dbl << "\n";

    // long double - 16 ���� (��������: ������� ��������)
    long double number_dbl2 = 45.9;  // ��� ��������� ���������� � ������� �������� ����� ������
    cout << number_dbl2 << "\n";

    // ��������� ������� ����� � �����
    int number_in_int = 38765.456; 
    // �� �������: (int)number_dbl
    cout << number_in_int << "\n";
    system("pause");
    
}