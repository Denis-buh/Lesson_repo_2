



#include <iostream>


using namespace std;
/*
������������� ������� - ������� ������� �� �������� ���������� ������, 
�� ����� ������ � �������� ���������
����� ���� ������������ � ��������� �������.
������������� ����� ����� ������� ����������� � ������ ������.
����� ������� ������������� �����. 
�������� ������������ ������.
*/



class Test{
private:
    int value;
public:
    void set_value(int value){
        this->value = value; 
    }

    friend void show_inform(Test& test){
        // test - ���������� ��� ������� � ������� �������� 
        cout << test.value << "\n";
    }
};

int main(){
    system("chcp 1251");
    Test tes;
    tes.set_value(100);
    // �������� ������������� ������� ��� ������
    show_inform(tes);
    system("pause");
    return 0; 
}