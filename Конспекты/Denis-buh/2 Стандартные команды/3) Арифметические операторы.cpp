



#include <iostream>
// ����������� �������������� ����������
#include <cmath>

using namespace std;


int main()
{
    system("chcp 1251");

    float number_1 = 23;
    float number_2 = 77;

    /*���� ����������:
        1) ������� (����� ������ ���� �������)
        2) �������� (����� ��� ��������)
        3) ��������� (����� ��� ��������)
    */

    // ������� ���������
    // ������� ����� (�������� ����� �� -1)
    cout << "������� ����� " << - number_1 << "\n";
    // ++ ��������� ( ������ += 1)
    cout << "'number'++ " << number_1 ++ << "\n"; // ���������� 23 �� �� ����� ���� 24
    cout << "++'number' " << ++ number_1  << "\n"; // ���������� ��� ��� ����
    cout << "+= 1 " << (number_1 += 1) << "\n";

    // -- ��������� (������� ������ -= 1)
    cout << "'number'-- " << number_1 -- << "\n";  // ���������� 25 �� �� ����� ���� 24
    cout << "--'number'" << -- number_1 << "\n";  // ���������� ��� ��� ����
    cout << "-= 1 " << (number_1 -= 1) << "\n";

    number_1 = 23;

    // �������� ���������
    // + ��������
    cout << "+ " << number_1 + number_2 << "\n";
    number_1 += number_2;
    cout << "+= " << number_1 << "\n";
    number_1 = 23;

    // - ���������
    cout << "- " << number_1 - number_2 << "\n";
    number_1 -= number_2;
    cout << "-= " << number_1 << "\n";
    number_1 = 23;


    // * ���������
    cout << "* " << number_1 * number_2 << "\n";
    number_1 *= number_2;
    cout << "*= " << number_1 << "\n";
    number_1 = 23;


    // / �������
    cout << "/ " << number_1 / number_2 << "\n";
    number_1 /= number_2;
    cout << "/= " << number_1 << "\n";
    number_1 = 23;


    // % ������� �� ������ (������� �� �������). �������� ������ � �������������� �������
    int number_2_int = number_2;
    cout << "% " << number_2_int % 2 << "\n";
    number_2_int %= 2;
    cout << "%= " << number_2_int << "\n";
    number_2_int = number_2;

    // ������������� �������
    cout << "������������� ������� " << int(number_2 / number_1) << "\n";
    number_2 = int(number_2 / number_1);
    cout << "������������� ������� c ������������� " << number_2 << "\n";
    number_2 = 77;


    // ���������� � ������� 
    /*����������� ���������� � �������:
        "��������� ����������" = pow("��������� �������", "���������� �������")
    */
    cout << "5 � 3 ������� = " << pow(5, 3) << "\n";
    system("pause");

}