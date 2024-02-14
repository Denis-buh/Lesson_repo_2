



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number;
    }

    int get_number(){
        return this->number;
    }

};



class My_super_class: My_class
{
private:
    string inform = "None";
public:
    /* ���������� ������������� ��� ������� ����������� � �������������� ������������� ������������ �������
    �����������:
        "������������� ����� ������ ����������(��������� �������������)": "������������� ��� ������������� ������(� ������������ ����������)"{
            "���������� �������������� ��� ������ ����������"
        }
    */
    My_super_class(int number, string inform): My_class(number){
        this->inform = inform;
    }

    /* ����������� ������������ �������� ������ ��� �������� ������������ ������ ����������
    �����������:
        using "��� �������� ������"::"��� �������������� �������� ������";
    */
    using My_class::My_class;


    void show_iform(){
        cout << "number = " << this->get_number() << "\n";
        cout << "inform = " << this->inform << "\n";
    }

};


int main(){
    system("chcp 1251"); 


    My_super_class new_good_class = My_super_class(5, "good inform");

    new_good_class.show_iform();

    My_super_class new_class = My_super_class(5);

    new_class.show_iform();



    system("pause");
}
