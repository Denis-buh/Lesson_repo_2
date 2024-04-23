



#include <iostream>

using namespace std;



class My_class{
private:
    mutable int number;

public:
    My_class(int number){
        super_number += 1; 
        this->number = number; 
    }
    /* � C++ ����� ���������� �������� ������� ����� ��������� �� � ������� � ������ � ������ ������
    ����������� ���������� ������������ ������ ���� ��� � ����� ������������, ���� ���� ������� ������ �� ���� �������
    ����������� ��� ���������:
        static inline "��� ������ ���������" "��� ��������" = "�������� ��������"
    ����������� ��� �������:
        static inline "��� ������ ����������� �������" "��� ������ � ��� ���������"{
            "��� ������. � ���� �� ����������� ������������� this"
        }
    ����������� �������� �� ���������� �������� this. 
    */
    static inline int super_number = 0; 
    static inline int get_super_number(){
        return super_number; 
    }

};



int main(){
    system("chcp 1251"); 


    cout << "My_class.super_number = " << My_class::get_super_number() << "\n";
    const My_class new_class(4);

    cout << "My_class.super_number = " << My_class::get_super_number() << "\n";
    cout << "My_class.super_number (����� new_class) = " << new_class.get_super_number() << "\n";

    

    system("pause");
}
