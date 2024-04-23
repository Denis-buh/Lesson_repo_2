



#include "iostream"


using namespace std;

/*
����� ��������� ����������� � ��� ���: 
    �� ������ ������ Organs �������� �� � ������������ Human � � ������ ������ Human
    ����� ���� Organs � ������ Human ���
�� �������� �� ����� ��������� ������� Organs
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

    // ������� ��� ������ � ��������
    void show_inform_organ(Organs& org){
        // ��������� ����� 
        // �������� � ��������� ���� Organs ����� ����� ������� � ����� �������
        cout << "Inform to organ: name = " << org.get_name() << ", cost = " << org.get_cost() << "\n";
    }


};



int main(){
    system("chcp 1251");
    Human my_hum;
    my_hum.set_name("Oleg");

    Organs liver("Liver1", 500);
    my_hum.show_inform_organ(liver); 

    system("pause");
    return 0; 
}
