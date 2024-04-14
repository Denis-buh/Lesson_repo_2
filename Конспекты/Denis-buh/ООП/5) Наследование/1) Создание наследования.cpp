



#include <iostream>

using namespace std;



class My_class{
protected:
    int number2 = 70; // �����-�� ������� ������
    int get_number2(){
        return this->number2;
    }

public:
    int number = 7; // �����-�� ������� ������
    int get_number(){
        return this->number;
    }
    
};


/* ����������� ������������:
class "��� ������ ����������": "������������ ������������" "��� ������ ��������"{
    "���������� ������ ����������"
}
������ ����������� ����� �� ������ �������� �������� ���� protected, public (private ����� ������������, �� �� ����� ��������) 
��� ������������ ������ � �������� �� ������ �������� ����� ������������ ������ � ������ ����������
���� ��� ����������� �� ������ ������������ ������������ �� �� ��������� ����� ����������� ������������ private (��� �������� - public)
��� ������������� ������ �������������� ������������ ���� ��������� ����������� (��������� � ����� "1) �������� ������������� ������������.png")
*/

class My_super_class: My_class
{
public:
    /* ��������� ������� ������� public ��� ��������� (���������� ����� ������������)
        using "��� ������ �� �������� �����������"::"������� ������� ����� �����������";
    */
    using My_class::number2; // ������������� ������� �������� ������ public

    void show_iform(){
        cout << "number = " << this->get_number() << "\n";
        cout << "number2 = " << this->get_number2() << "\n";

    }

};



int main(){
    system("chcp 1251"); 


    My_super_class new_class = My_super_class();

    new_class.show_iform();



    system("pause");
}
