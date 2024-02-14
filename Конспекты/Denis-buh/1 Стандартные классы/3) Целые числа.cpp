



#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    system("chcp 1251"); 
    /* �������� � ����� ������
        unsigned - �������������� ����� ��� ���� (��� �����)
        short - �������� ��� ������
        long long - ������ ��� ������
    */

    // ����� �����
    //int - 4 ���� (��������: [-2147483648; 2147483647])
    int number_int = 34; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_int << "\n";
    //unsigned int - 4 ���� (��������: [ 0; 4294967295]). unsigned int = unsigned
    unsigned int number_int_pos = 34; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_int_pos << "\n";

    //short - 2 ����� (��������: [-322768; 322767]). short = short int = signed short int = signed short.
    short number_shr = 56; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_shr << "\n";
    //unsigned short - 2 ����� (��������: [0; 65535]). unsigned short = unsigned short int
    unsigned short number_shr_pos = 56; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_shr_pos << "\n";

    //long - 4 ���� (��������: [-2147483648; 2147483647]). long = long int = signed long int = signed long. �������
    long number_lng = 908; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_lng << "\n";
    //unsigned long - 4 ���� (��������: [0; 4294967295]). unsigned long = unsigned long int. �������
    unsigned long number_lng_pos = 98; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_lng_pos << "\n";

    //long long - 8 ���� (��������: [-9223372036854775808 �� 9223372036854775807]). long long = long long int = signed long long int = signed long long
    long long number_lng_lng = 798; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_lng << "\n";
    //unsigned long long - 8 ���� (��������: [0; 18446744073709551615]). unsigned long long = unsigned long long int
    unsigned long long number_lng_lng_pos = -938; // ��� ��������� ���������� � ������������ ����� ������
    cout << number_lng_lng_pos << "\n";


    /* ����� ����� � �������� ������� ���������
    {"���� ����� (0 - �������������, 1 - ����������)"b"����� � 2 ������� ����������"}
    ��� ������� �������� ��� ������������� �����:
        1) �� ����� �������� 1
        1) ��������� �������� ��� ����� �� ������
        2) � ���������� ���� ������ 1 �� 0 � 0 �� 1
    */
    int number = {0b110}; // ��������� ����� �� �������� ������� ��������� 
    cout << "0b100 = " << number << "\n";
    int neg_number = {-0b110}; 
    cout << "1b001 = " << neg_number << "\n";

    // �� ��� �������� � cmath
    /* ������ ��� ������ �����
    "������ �����" = abs("����� �������� ����� ����� ������")
    */
    int test_int = -4356;
    cout << "|" << test_int << "| = " << abs(test_int) << "\n";

    system("pause");
}