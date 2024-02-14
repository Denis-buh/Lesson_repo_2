



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
        cout << "������ ������ My_class ������\n";
    }

    int get_number(){
        return this->number;
    }

    /* ���������� ��������� ������������ �������������� �������� �������� � �������� ������������� ���������� �������. ���������� ������������� ����������, ����� ��������� ������. 
    �������� ������� ���������� � ��������� �������:
        1) ����� ����������� ���������� ������� ���������, ������ ������� ���������� �������
        2) ����� ��������� ��������� (��������, ������), ������� �������� �������
        3) ����� ��������� ������, � ������� ���������� ����������, �������������� ������ �������
        4) ����������� ��������� ������� ��������� ��� ���������� � ��������� �� ������ ��������� delete
    ���������� �� ����� ������������� �������� � �� ��������� ����������. ������ ����� ����� ����� ������ ���� ����������.
    ����������� �����������:
        ~"��� ������()"{
            "�������� �����������"
        }
    */
    ~My_class(){
        cout << "������ ������ My_class ������\n";
    }

};



int main(){
    system("chcp 1251"); 

    My_class* pr = new My_class(0);

    cout << "number = "  << pr->get_number() << "\n";

    delete pr;

    {
        My_class new_odj = My_class(2);

        cout << "number = " << new_odj.get_number() << "\n";
    }

    system("pause");
}
