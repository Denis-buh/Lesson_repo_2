



#include <iostream>
using namespace std;


void test_fun(){
    cout << "call test_fun\n";
}

void test_fun2(int a){
    cout << "call test_fun2; a = " << a << "\n";
}

int main(){
    system("chcp 1251");
    /*����������� ��� �������� ������� ����� ��������� �������
        "��� ������ ������� ��������� �������" (*"��� ���������")("��������� ������� ��������� �������")
    */
    void (*fun)(); // ������� ��������� ��� ������ ������� 
    fun = test_fun; // ������� ��������� �� �������
    fun(); 

    void (*fun2)(int a); // ������� ��������� ��� ������ ������� � ���������� int
    fun2 = test_fun2; // ������� ��������� �� �������
    fun2(6); 
    system("pause");
}