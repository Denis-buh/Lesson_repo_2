



#include <iostream>
using namespace std;


// template <typename "���������� � ������� ���"> - ������ ����������� ���������� ��� ��������� ��������� �������
// ���������� typename � "���������� � ������� ���" = ���������� ����������. � �������� ������������� ���� ������� ����� auto
// "���������� � ������� ���" - ����� ����� ����� �������� (�� ��������� T). � ��� ��������� ��� ������ 
// ������: template <class "���������� � ������� ���">

/*
���������� � �������
*/
template <typename name_type, typename type_2> 
auto my_fun(name_type number_1, type_2 number_2){
    return number_1 + number_2;

}


int main(){
    system("chcp 1251");
    cout << "��������� �������: " << my_fun(10, 5) << "\n";
    cout << "��������� �������: " << my_fun(10.789, 5.565) << "\n";
    cout << "��������� �������: " << my_fun(10, 5.565) << "\n";
    system("pause");
}

