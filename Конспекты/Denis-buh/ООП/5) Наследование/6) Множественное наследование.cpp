



#include <iostream>

using namespace std;

// ����� ����������
class Camera{
public:
    int cout_mp_camera; // ���������� ������������ ������

    Camera(int cout_mp_camera = 1){
        this->cout_mp_camera = cout_mp_camera; 
    }

    void make(){
        cout << "making photo\n";
    }
};
 

// ����� ��������
class Phone{
public:
    string name_phone; // ���������� ������������ ������
    
    Phone(string name_phone = "Phone"){
        this->name_phone = name_phone; 
    }

    void make(){
        cout << "making call\n";
    }
};

/* ������������� ������������ �������� ��� �� ��� � ������� ������������.
��� �������������/�������� ��������� ������ �������� � ��������� ������ ������������ ��������� �����������:
"����� ��������� ������ � �����������"{
    "������� �����"::"����� ������� ����� ������������"
}
*/
// ����� ���������
class Smartphone : public Phone, public Camera{
public:
    void work(){
        /* ���������� ������ ���:
            1) �������� ���������� �������� ������
            2) ��������� ����
            3) � ������ ���� ��������� ������� �� ������� ��������� (��������� ���������)
                3.1) ��������� ����� � ������������ � �������� ������ ���� �������� � ���������� ���������
                3.2) �� ��������� ������������ ��, ��� ��������� � �������� ������
        */
        this->Phone::make();
        this->Camera::make();
        cout << "class Smartphone finish work\n";
    }
};
 



int main(){
    system("chcp 1251"); 

    Smartphone my_phone = Smartphone();
    // ����� �� ������������� �������� ����� �������� �����
    my_phone.Phone::make();
    my_phone.work(); // ���������� ����� ������ Smartphone


    system("pause");
}
