



#include "iostream"


using namespace std;

/*
����� ��������������  ����������� � ��� ���: 
    �� ������� ������ ������ Organs ��������  � ������ ������ Human
    ����� ���� Organs � ������ Human ���
    ��������� ������ ��������� �� ������
*/


class Organs{
protected:
    string name; // ���
    int cost; // �������
public:
    // ������������
    // ����������� � ���������� ��������������
    Organs(){}
    // ����������� �����������
    Organs(Organs& obj){
        this->name = obj.name;
        this->cost = obj.cost;
    }
    // ����������� � ��������������
    Organs(string name, int cost){
        this->name = name;
        this->cost = cost;
    }

    // ������
	// ����� name
    void set_name(string name){this->name = name;}
	// ����� cost
    void set_cost(int cost){this->cost = cost;}

    // ������
	// ����� name
    string get_name(){return this->name;}
	// ����� cost
    int get_cost(){return this->cost;}
};


class Human{
private:
    string name;

public:
    // ������������
    // ����������� � ���������� ��������������
    Human(){}
    // ����������� � ��������������
    Human(string name){
        this->name = name;
    }

    // ������
    // ����� name
    void set_name(string name){
        this->name = name; 
    }

    // ������
    // ����� name
    string get_name(){return this->name;}

    // ����� ������������ �����
    Organs get_organ(){
        // ��������� ����� 
        // ������� ������ ���� Organs
        Organs org; 
        // �������� � �������� ���� Organs
        org.set_name("Liver1");
        org.set_cost(500);
        // ��������� ������
        return org; 
    }


};



int main(){
    system("chcp 1251");
    Human my_hum;
    my_hum.set_name("Oleg");

    Organs liver = my_hum.get_organ();

    system("pause");
    return 0; 
}
