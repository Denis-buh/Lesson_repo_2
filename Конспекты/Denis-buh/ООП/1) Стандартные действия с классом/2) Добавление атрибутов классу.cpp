



#include <iostream>

using namespace std;



class My_class{
private:
    /* �������� ����������������� ���������
    ������ �������� ����� ������������� ������ � ������
    */
    int super_number = 25;
protected:
    /* �������� ��������� ���������
    ������ �������� ����� ������������� ������ � ������ ��� � ������� ����������� �� �������.
    */
    int s_number = 20; 
public:
    /* �������� ��������� ���������
    ������ �������� �������� � ����� ����� ���������
    */
    int number = 15;

};



int main(){
    system("chcp 1251"); 

    My_class new_class;

    // ��������� � ��������� ��������� ������
    cout << "��������� � �������� number ������ My_class: " << new_class.number << "\n";
    // �� ������� �� ����� ������������ ������ public ��������

    // ��������� ��������� ������
    new_class.number = 100;
    cout << "��������� � �������� number ������ My_class: " << new_class.number << "\n";

    /* ��������� � ��������� ����� ���������*/
    My_class* ptr_class = &new_class; // �������� ��������� �� new_class

    // ��������� � ��������� ��������� ������ ����� ���������
    cout << "��������� � �������� number ������ My_class ����� ���������: " << ptr_class->number << "\n";

    // ��������� ��������� ������ ����� ���������
    ptr_class->number = 10;
    cout << "��������� � �������� number ������ My_class ����� ���������: " << ptr_class->number << "\n";

    system("pause");
}
