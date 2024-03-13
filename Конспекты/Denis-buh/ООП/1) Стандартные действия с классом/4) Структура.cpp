



#include <iostream>

using namespace std;


/* ���������
��������� - ���� ����� ��� � ������ � C++ �� ����������� ��������� ��������.
��������� ����� ��� ���� ����� ��� � ������.
������ ��������� ������ ��� �������� �����-�� ������������� ������ � ���� ��������� ����������. 
����������� ���������:
    struct "���_���������"{
        "����������_���������";
    };
����� ��������� ����� ����������� � ���� ������ � ��������
*/

struct My_struct{
private:
    int secret_number;
public:
    My_struct(int number){
        this->secret_number = number;
        cout << "������ My_struct ��� ������\n";
    }

    ~My_struct(){
        cout << "������ My_struct ��� ������\n";
    }

    int get_secret_number(){
        return this->secret_number;
    }
};



int main(){
    system("chcp 1251"); 

    // �������� ������� ���������
    My_struct* my_struct_obj = new My_struct(3);

    cout << "secret_number = " << my_struct_obj->get_secret_number() << "\n";

    delete my_struct_obj;

    my_struct_obj = nullptr;


    {
        My_struct my_stru = My_struct(8);

        cout << "secret_number = " << my_stru.get_secret_number() << "\n";
    }


    system("pause");
}
