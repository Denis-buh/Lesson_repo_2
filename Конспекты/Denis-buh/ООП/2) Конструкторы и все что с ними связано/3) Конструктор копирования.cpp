



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
        /* ������ ����������� ������������ ����� �� �������� ������
        �� ��������� ������ �������� ������ �� ����� ��� ���������� 
        ��� �������� ��� ������������ ���������� ������� ��� ����� �����������
        */
        this->number = p.number; // �������� ����� ������� ������� ������� ����� �����������
        cout << "����������� ������ My_class\n";
    }
    /* ������ ���������� ������� ����������� ����������� ��� ���� ������������ ��������� �����������
    Person(const Person &p) = delete;
    */



};



int main(){
    system("chcp 1251"); 


    My_class new_class(4);

    My_class new_obj(new_class);

    system("pause");
}
