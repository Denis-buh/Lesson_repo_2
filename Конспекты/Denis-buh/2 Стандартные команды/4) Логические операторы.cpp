



#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251");

    /*���� ����������:
        1) ������� (����� ������ ���� �������)
        2) �������� (����� ��� ��������)
        3) ��������� (����� ��� ��������)
    */

    bool flag_1 = false;
    bool flag_2 = true;

    char sim = 'A';
    string name = "Alex";

    float number_float_1 = 15.6;
    float number_float_2 = 150.68;

    // �������� ���������
    // ��������� ���������
    // < - ������
    bool res = number_float_1 < number_float_2;
    cout << "< " << res <<"\n";

    // > - ������
    res = number_float_1 > number_float_2;
    cout << "> " << res <<"\n";

    // <= - ������ ��� �����
    res = number_float_1 <= number_float_2;
    cout << "<= " << res <<"\n";
    
    // >= ������ ��� �����
    res = number_float_1 >= number_float_2;
    cout << ">= " << res <<"\n";


    // ��������� ���������
    // == - �����
    res = number_float_1 == number_float_2;
    cout << "== " << res <<"\n";

    // != - �� �����
    res = number_float_1 != number_float_2;
    cout << "!= " << res <<"\n";

    // ���������� ���������
    // && - � (��� ���������)
    // and - � (��� ���������)
    res = flag_1 && flag_2;
    cout << "&& " << res <<"\n";
    res = flag_1 and flag_2;
    cout << "and " << res <<"\n";

    // || - ��� (��� ��������)
    // or - ��� (��� ��������)
    res = flag_1 || flag_2;
    cout << "|| " << res <<"\n";
    res = flag_1 or flag_2;
    cout << "or " << res <<"\n";

    // ! - �� (��� ���������\��������) 
    // not  - �� (��� ���������\��������) 
    res = (! flag_1);
    cout << "! " << res <<"\n";
    res = (not flag_1);
    cout << "not " << res <<"\n";

    // ��������� ���������
    /*
    (���������� ���������)? (�������� ���� ��������� ��������): (�������� ���� ��������� �����)
    */
    (number_float_2 >= number_float_1)? (cout << "number_float_2 >= number_float_1\n"): (cout << "number_float_2 < number_float_1\n");
    system("pause");

}