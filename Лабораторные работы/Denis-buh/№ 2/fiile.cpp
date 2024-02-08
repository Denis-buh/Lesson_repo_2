



#include <iostream>
#include <cmath>

using namespace std;

//#define DEBUG


bool chek_shot(long double x, long double y){
    if (y >= 0){
        /* �������� �� ��������� � �����
            y = 2x + 2 (x < 0) // ��� ����� ����� 
            y = -2x + 2 (x > 0) // ��� ������ �����
        sgn(2x) = -1 // � ����� �������� 
        sgn(-2x) = -1 // � ������ �������� 
        ��� ��� �������� ��� �� ����� ������������:
        y = -2|x| + 2 (x < 0)
        ��� ������� �� ��������� �������� ��������� �������
        y <= (-2 * fabs(x)) + 2
        */
        const long double g_y = (-2 * fabs(x)) + 2;
        return (y <= g_y);
    }
    else{
        /* �������� �� ��������� � ��������
            r*r = x*x  + y * y - ��������� ����������
            � �������� ���������� r = 1
        ��� ������� �� ��������� �������� ��������� �������
        y*y + x*x <= 1
        */
        const long double r = (pow(y, 2)) + (pow(x, 2));
        return (r <= 1);
    }
}



int main(){
    // ���������� �����������
    system("chcp 1251"); 

    long double x, y; // ������� ���������� ��� ������ �������� ��������

    #ifdef DEBUG
        x = 0.5; y = 1; 
        cout << "������� � 1 �������� (������ �������): " << chek_shot(x, y) << "\n";
        x = 0.5; y = 6;
        cout << "������� � 1 �������� (�� ������ �������): " << chek_shot(x, y) << "\n";

        x = -0.5; y = 0.5;
        cout << "������� � 2 �������� (������ �������): " << chek_shot(x, y) << "\n";
        x = -0.5; y = 3;
        cout << "������� � 2 �������� (�� ������ �������): " << chek_shot(x, y) << "\n";

        x = -0.5; y = -0.5;
        cout << "������� � 3 �������� (������ �������): " << chek_shot(x, y) << "\n";
        x = -0.5; y = -1;
        cout << "������� � 3 �������� (�� ������ �������): " << chek_shot(x, y) << "\n";

        x = -0.3; y = -0.91;
        // �� �������� ��� ��� x = -0.30000000000000000012, y = -0.910000000000000000026
        cout << "������� � 4 �������� (������ �������): " << chek_shot(x, y) << "\n";
        x = -0.5; y = -1;
        cout << "������� � 4 �������� (�� ������ �������): " << chek_shot(x, y) << "\n";


    #else
        cout << "������� ��������� �������� (��������� x): ";
        cin >> x;
        cout << "������� ��������� �������� (��������� y): ";
        cin >> y;

        cout << "���������� ��������� ����� = {" << x << ", " << y << "}\n";

        if (chek_shot(x, y)){
            cout << "�� ������ �� ����\n";
        }
        else{
            cout << "�� �� ������ �� ����\n";
        }

    #endif


    system("pause"); // ������ ������ ��������� �������� ��� ���� �������
    return 0;
}

