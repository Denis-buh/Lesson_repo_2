



#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    system("chcp 1251");
    /*������������ ��� ������������ ������, �����(string), ����� */
    /*
    */
    
    double number = 78.353456545676545678;

    cout << "����� (������ �� ��������): " << number << "\n";
    // setw(�����) - ��������� ������� ������ ���� ������� ��� ������ ����� ����� ����� (���� �������� ������ ��� ������� �� ����� ������� �����)
    cout << "����� (������ ��������): " << setw(6) << number << "\n";
    // ���� ���������� �� ����� ����� ����� � ������������� �� ��������� ����� � setw
    cout << "����� (������ �� ��������): " << setw(2) << number << "\n";
    // setprecision(�����) - ���������� ������ � ������� �����
    cout << "����� (������ �� ��������): " << setprecision(2) << number << "\n";
    
    system("pause");
}