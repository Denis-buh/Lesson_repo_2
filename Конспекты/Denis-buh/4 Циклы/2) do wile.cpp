



#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251");

    /*����� ����������� �������������� �������:
    do{
        "���� ����� ��� �� ��������� ����� �� ��������";
        // ������� ����������� ���� ����� � ����� ���� �������� while

    } while (����� �� ���������);

    break - ����� ������ �� ����� 
    continue - ������� � ��������� �������� �����
    ����� ���������� ������� ��������� � ����� ���� ����� ����� �������
    */
    
    int number = 0;

    do{
        cout << "number = " << number << "\n";
        number += 1; // ���������� ����� ���� ����� �����������
    } while (number < 10);

    cout << "���� ����������\n";
    system("pause");
}