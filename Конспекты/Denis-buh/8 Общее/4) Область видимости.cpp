



#include <iostream>
using namespace std;


// ���������� ���������� - ���������� ������� ��������� ��� {} (���������� �� ������� �������)
// ��������� ���������� - ���������� ������� ��������� � {} (���������� ��������� ������� ���������). ��� ��������� ���������� �� {} ���������
int global = 12; // ���������� ���������� (����� ������� ��� ������)



int main(){
    system("chcp 1251");

    int a = 10;
    // int b = 0; ������ ����������� ���������� ����� ���������� �� ������� ������� ������� �������� � �������� ������� ���������

    if (true){
        // ����� ������� ���������
        // {} - ������� ���������. ��� ���������� ����������� � {} - ���������
        int a = 100; // ������ ��������� ���������� � ��������� ������� � �� ������ ����� if (����� ����� �������)
        cout << "� ���� global � ��� = " << global << "\n";
        cout << "� ���� � � ��� = " << a << "\n";
        int b = 20;
        // b = 20; ������ ����������� ���������� ����� ���������� �� ������� ������� ������� �������� � �������� ������� ���������
        cout << "� ���� b � ��� = " << b << "\n";
        // ����� ����� if b ����� ������� (���� ��������� ����������)
        cout << "����� if"<< "\n";
    }
    cout << "� ���� global � ��� = " << global << "\n";
    cout << "� ���� � � ��� = " << a << "\n";
    // cout << "� ���� b � ��� = " << b << "\n"; ����� ������ ��� ��� ��� ���������� � ������ ������� ���������
    system("pause");
}
