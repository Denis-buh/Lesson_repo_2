



#include <iostream>

using namespace std;


/* ��� ���� ����� ������ ������� ��������� ������������� �� ������ ����� ��������� ��������� �����������:
class "��� ������" final*/
class My_class final{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
    }



};





int main(){
    system("chcp 1251"); 


    My_class* my_class = new My_class(5);

    delete my_class;





    system("pause");
}
