



#include <iostream>
using namespace std;
#include <string>




int main(int argc, char* argv[]){
    system("chcp 1251");
    // argc - ���������� ����������
    /*argv - ������ ����������
        ������ ���������� ������� ������ ����� ���� � ���������� ����� exe
        ����������� ��������� - �� ��� �������� ��������� ������ (����� �� ����������/��������� � ������� )

    */
    cout << argc << "\n";
    for (int i = 0; i < argc; i += 1){
        cout << argv[i] << "\n";
    }

    system("pause");
}