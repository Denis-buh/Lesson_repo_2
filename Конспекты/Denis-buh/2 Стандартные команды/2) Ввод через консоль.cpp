



#include <iostream>
//#include <string> ���������� ��� ������ getline
using namespace std;


int main()
{
    system("chcp 1251");

    /*��� ���� ����� ����������� ���� ����� ������� ����������:
        1) ������� ���������� ������� ��� ���� � ����� (���������� ������ ����������������)
        2) �������� ����� ��� �� �� ���� �����
        3) ��������� ���� � �������
    */
    
    float number; // 1) ������� ���������� ������� ��� ���� � ����� 
    cout << "����� �����: "; // 2) �������� ����� ��� �� �� ���� �����
    cin >> number; // 3) ��������� ���� � �������
    cout << "�������� �����: "<< number << "\n";


    float number_new, number2_new; // 1) ������� ���������� ������� ��� ���� � ����� 
    cout << "������� 2 �����: "; // 2) �������� ����� ��� �� �� ���� �����
    cin >> number_new >> number2_new; // 3) ��������� ���� � ������� (��� ������������� ����)
    cout << "�������� �����: "<< number_new << " " << number2_new << "\n";


    string name; // 1) ������� ���������� ������� ��� ���� � ����� (���������� ������ ����������������)
    cout << "����� ���: "; // 2) �������� ����� ��� �� �� ���� �����
    cin >> name; // 3) ��������� ���� � ������� 
    // getline(cin, name); // ���������� ����� ������ (�� �������� ���� ������ ���� cin). ���������� ���������� ���������� string
    cout << "�������� ���: "<< name << "\n";
    system("pause");


}