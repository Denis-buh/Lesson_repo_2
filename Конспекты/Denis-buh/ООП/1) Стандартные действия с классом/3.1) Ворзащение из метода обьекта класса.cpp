



#include <iostream>


using namespace std; 


class Test{
public:
    int te;
    // ����������� ������ � ��������������
    Test(int te){this->te = te;}
    // ����������� �����������
    Test(Test& obj){this->te = obj.te;}
    // ����� ����������� ������ ������
    Test get_copi(){
        Test obj(te + 1);
        return obj;
    }
};


int main(){
    system("chcp 1251");
    Test exempl(15);
    cout << "�� �����������: " << exempl.te << "\n";
    Test copi = exempl.get_copi();
    cout << "����� �����������: " << copi.te << "\n";

    system("pause");
    return 0;
}