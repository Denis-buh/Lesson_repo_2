



#include <iostream>
using namespace std;


int main(){
    system("chcp 1251");

    /*����� ����������� �������������� �������:
    switch (����� �� ���������){
        case "�������� 1":
            "�������� ���� ��������� == �������� 1";
            break;
        case "�������� 2":
            "�������� ���� ��������� == �������� 2";
            break;
        default:
            "������ ���� �� ���������� (��� ����������� ���� ���� ������� ������� switch ������ ��������� (��� ��� break))"
            "�������� �� ���������";
            break;
    }
    ����� �� ��������� ������ ���� ������������� (int ��� bool)
    �������� ��� case ������ ���� �������

    break - ����� ������ �� switch (��������� ����� ���������� ������ � �� ������ ��� ������� case � switch)
    ����� ���������� ������� ��������� � ����� switch ����� �������
    */
    
    int mark;
    cout << "������� ���������� ������: ";
    cin >> mark;

    switch (mark){
        case 1:
            cout << "���� �������� ������ 1. ��� �������������\n";
            break;
        case 2:
            cout << "���� �������� ������ 2. ��� �����\n";
            break;
        case 3:
            cout << "���� �������� ������ 3. ��� �����������������\n";
            break;
        case 4: 
            case 5:
                cout << "������� ������\n";
                break;
        default:
            // ��� ��� ��� ��������� ������� ���� ������������� �� �������� ����������� ��������
            cout << "���� ������� �� ������ ��������\n";
            break;
    }
    system("pause");
}