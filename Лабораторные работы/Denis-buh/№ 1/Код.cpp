



#include <iostream>
#define _USE_MATH_DEFINES // ���������� ��� ����������� ��������
#include <cmath>

using namespace std;



int main(){
    // ���������� �����������
    system("chcp 1251"); 

    float x; // ������� ���������� 
    cout << "������� �������� ��� x(� ��������). x = ";
    cin >> x; // �������������� ����������
    cout << "�������� (� ��������) x = " << x << "\n";
    

    float y; // ������� ���������� 
    cout << "������� �������� ��� y(� ��������). y = ";
    cin >> y; // �������������� ����������
    cout << "�������� (� ��������) y = " << y << "\n";
    


    float z1 = pow(cos(x), 4) + pow(sin(y), 2) + (pow(sin(x * 2.0), 2) / 4.0) - 1.0;
    //cout << pow(cos(x), 4) << " " << pow(sin(y), 2) << " " << pow(sin(x * 2.0), 2) / 4.0 << "\n";
    cout << "z1 = " << z1 << "\n";

    float z2 = sin(x + y) * sin(y - x);
    //cout << sin(x + y) << " " << sin(y - x)<< "\n";
    cout << "z2 = " << z2 << "\n";

    system("pause"); // ������ ������ ��������� �������� ��� ���� �������
    return 0;
}

