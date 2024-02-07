



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
    ��� ������ � ����������� ��� �������� ������ ���� ������ ����
    */

    // ������� ���������
    // ������� ����� (�������� ����� �� -1)
    cout << "������� ����� " << - number_1 << "\n";
    // ++ ��������� ( ������ += 1)
    cout << "'number'++ " << number_1 ++ << "\n"; // ���������� 23 �� �� ����� ���� 24
    cout << "++'number' " << ++ number_1  << "\n"; // ���������� ��� ��� ����

    // -- ��������� (������� ������ -= 1)
    cout << "'number'-- " << number_1 -- << "\n";  // ���������� 25 �� �� ����� ���� 24
    cout << "--'number'" << -- number_1 << "\n";  // ���������� ��� ��� ����

    number_1 = 23;

    // �������� ���������
    // + ��������
    cout << "+= " << number_1 << "\n";
    // number_1 += number_2 ���������� number_1 = number_1 + number_2
    number_1 = 23;

    // - ���������
    number_1 -= number_2;
    cout << "-= " << number_1 << "\n";
    // number_1 -= number_2 ���������� number_1 = number_1 - number_2
    number_1 = 23;


    // * ���������
    number_1 *= number_2;
    cout << "*= " << number_1 << "\n";
    // number_1 *= number_2 ���������� number_1 = number_1 * number_2
    number_1 = 23;


    // / �������
    number_1 /= number_2;
    cout << "/= " << number_1 << "\n";
    // number_1 /= number_2 ���������� number_1 = number_1 / number_2
    number_1 = 23;


    // % ������� �� ������ (������� �� �������). �������� ������ � �������������� �������
    int number_2_int = number_2;
    number_2_int %= 2;
    cout << "%= " << number_2_int << "\n";
    // number_1 %= number_2 ���������� number_1 = number_1 % number_2
    number_2_int = number_2;

    // ������������� �������
    cout << "������������� ������� " << int(number_2 / number_1) << "\n";
    number_2 = int(number_2 / number_1);
    cout << "������������� ������� c ������������� " << number_2 << "\n";
    number_2 = 77;

    // ��������� ������
    int number_bin_1 = {0b10}; // 2
    int number_bin_2 = {0b01}; // 1

    cout << "1 << 2 = " << (number_bin_2 << 2) << "\n";
    // number_bin_2 <<= 2 ���������� number_bin_2 = number_bin_2 << 2;

    cout << "2 >> 1 = " << (number_bin_1 >> 1) << "\n";
    // ������: number_bin_1 >>= 1 ���������� number_bin_1 = number_bin_1 >> 1;



    // ��� ��� �������� � cmath
    
    // ���������� � ������� 
    /*����������� ���������� � �������:
        "��������� ����������" = pow("��������� �������", "���������� �������")
    */
    cout << "5 � 3 ������� = " << pow(5, 3) << "\n";

    /*����������� �����:
        "������" = sqrt("�����")
    */
    cout << "������ �� 9 = " << sqrt(9) << "\n";

    /*����������� ������ ��� ����� �����:
        "������ �����" = abs("�����")
    */
    cout << "������ -9 = " << abs(-9) << "\n";

    /*����������� ������ ��� ������� �����:
        "������ �����" = fabs("�����")
    */
    cout << "������ -9.9 = " << fabs(-9.9) << "\n";


    system("pause");

}