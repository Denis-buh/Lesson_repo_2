



#include <iostream>
using namespace std;
#include <cmath>


/**
 * @brief 
 * 
 * @param x - ��������� ���������
 * @param y - ����� �� �������� ����� ��������� ��������
 * @return float - ��������� ���������
 */
float log(float x, float y){
    return log(y)/log(x); 
}

int main()
{
    system("chcp 1251");

    cout << "3 � 2 ������� = " << pow(3, 2) << "\n";

    cout << "������ �� 9 = " << sqrt(9) << "\n";

    cout << "������ -9 = " << abs(-9) << "\n";

    cout << "������ -9.9 = " << fabs(-9.9) << "\n";

    cout << "cos(0.0) = " << cos(0.0) << "\n";

    cout << "sin(0.0) = " << sin(0.0) << "\n";

    cout << "tg(0.0) = " << tan(0.0) /*sin(0.0) / cos(0.0)*/  << "\n";

    cout << "ctg(1.0) = " << 1 / tan(1.0) /*cos(1.0) / sin(1.0)*/  << "\n";

    cout << "ln(1.0) = " << log(1.0) << "\n";

    cout << "lg(1.0) = " << log10(10.0) << "\n";

    cout << "lg(5.0, 125.0) = " << log(5.0, 125.0) << "\n";

   cout << "���������� (e �� 2 �������) " << exp(2) << "\n";

    system("pause");
}