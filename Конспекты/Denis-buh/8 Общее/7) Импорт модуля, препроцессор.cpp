



#include <iostream>
/*
��� ���� ����� ���������� ������ ���������� ������������ ��������� �����������:
#include <"��� ������ ��� ����������">
*/
#include <ctime> // ����������� ������ ctime (������ �������)
using namespace std;
/*����������� ��������� define ��� �������� 
#define "��� ������� ����� �������� �� �������� � ����" "��������"
*/
#define PI 3.14 // ������ ��������� ��������� ����� ���������� PI �������� �� 3.14. ���������� ��� �����������


int main()
{
    system("chcp 1251");

    // time() ������� ������� ���� ����� �� ������ ctime
    cout << "����� ��������� � 1 ������ 1970 ���� � ��������: " << time(NULL) << "\n";
    /*������������ - ������ ����� ������������ � ������������ ��� ����� �����������. 
    ������������ ��������� ����� ��������� ��� include � define
    include - ������ ����� ���������� ���������� ��� ���� (�������� ����� �����������). ��� ���������� ���������� � ������ ����
    */
    cout << PI << "\n";
    system("pause");
}
