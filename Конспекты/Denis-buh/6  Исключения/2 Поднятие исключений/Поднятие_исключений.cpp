



#include <iostream>
#include <stdexcept> // ��� ����� ���� ����������� �������� ����������
using namespace std;

int main()
{
    system("chcp 1251");
    /*����������� throw
    throw "�������� ����������"("���������� � ���������� (���� ��������������)")
    ������ ����������� ���������� ����� �������� ����������

    ���� ������������ ��� ������ ������� �� ����������� �� exception
    ��������� � ����� "�������� ����������" ������ ������ ������ (int, string, ���� ����������� ������ ...) (�� ������������)
    ��� ����� try-catch ���������� ��������� ��� �� ��� ������ ������� ������������� � throw 
    ������:
        try{
            throw 5;
        }
        catch (const int& ex){
            cout << "������� �����"
        }

        try{
            throw "strings";
        }
        catch (const string& ex){
            cout << "������� ������"
        }

        try{
            throw 6.8;
        }
        catch (const float& ex){
            cout << "������� �����"
        }
    */
    throw invalid_argument("���������� ��� ����������"); 
    system("pause");
}