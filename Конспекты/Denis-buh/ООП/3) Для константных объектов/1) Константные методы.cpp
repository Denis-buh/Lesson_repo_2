



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
    }
    /* �������� ������������ ������:
    "��� ������ ������� ��������� �����" "��� ������� ��� ���������" const{
        "��� ������"
    }
    ������ ������ ���������� ����� ������ ������ ��� �������� ��� ���������
    � ������ ������ �� ������ ���������� ����� ���� �������� ������
    ����� ������ ����� ����� �������� ������ ����������� ������
    */
    int get_number() const{
        return this->number; 
    }
};



int main(){
    system("chcp 1251"); 

    /* ����� �� ��������� ������ ������ ���������� �� �� �� ����� ������ ��� ��������*/
    const My_class new_class(4);

    cout << "My_class.number = " << new_class.get_number() << "\n";

    

    system("pause");
}
