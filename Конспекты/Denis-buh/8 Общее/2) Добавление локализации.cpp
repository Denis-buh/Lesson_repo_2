



#include <iostream>
#include <string>
//#include <windows.h> // ��� SetConsoleCP � SetConsoleOutputCP
using namespace std;


int main(){
    /*��� ���� ����� �������� ����������� �� ������ ������������ ����� ������� ��������:
        1) setlocale(LC_ALL, "rus"); // ���������� �����������
        2) system("chcp "������������ ���������""); // ��������� ������������ ���������. ������� ��������� � �������
        3) ��������� ������������ ���������
        3.1) SetConsoleCP("������������ ���������");
        3.2) SetConsoleOutputCP("������������ ���������");
    ��������� ����� = ��������������� ���������    
    ��� ��������� ��������� ���� �������� ��������� 
    */
   /* ���� ��������� 
   65001 - ��������� utf-8 (� ��� �� �������� ������� ����)
   1251 - ��������� windows 1251 (� ��� �������� ������� ����)
   */

    // system("chcp 1251 >> null");
    system("chcp 1251");

    cout << "������� ������" << endl;
    string come_inform;
    cout << "������� ���� �� �������: ";
    cin >> come_inform;
    cout << "���� " << come_inform  << "\n";

    system("pause");
}