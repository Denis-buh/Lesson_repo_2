



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
    }

    My_class(const My_class &p){
        this->number = p.number; // �������� ����� ������� ������� ������� ����� �����������
        cout << "����������� ������ My_class\n";
    }

};


class My_super_class: My_class
{
private:
    string inform = "None";
public:
    My_super_class(int number, string inform): My_class(number){
        this->inform = inform;
    }


    /* ���� ����� �������� ������� ����������� ����������
    �����������:
        "����������� ������ ����������(� �����������)": "����������� �������� ������(� �����������)"{
            "���������� ������������ �����������"
        }*/
    My_super_class(const My_super_class &p): My_class(p){
        this->inform = p.inform; // �������� ����� ������� ������� ������� ����� �����������
        cout << "����������� ������ My_super_class\n";
    }

    /* ���� ����� ������������ ������� ����������� ����������� (��� ��������� ��� ������ ����������)
    �����������:
        using "��� ������ ��������"::"����������� ����������� ��� �������� ������";
    
    using My_class::My_class;*/

    void show_iform(){
        cout << "inform = " << this->inform << "\n";
    }



};


int main(){
    system("chcp 1251"); 


    My_super_class new_good_class = My_super_class(5, "good inform");



    My_super_class new_class = new_good_class;

    new_class.show_iform();





    system("pause");
}
