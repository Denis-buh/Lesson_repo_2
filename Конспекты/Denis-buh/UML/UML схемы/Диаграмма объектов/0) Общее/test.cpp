



#include "iostream"


using namespace std;


class Abstract_obj{
protected:
    string name; // ���
    int age; // �������
public:
    // ������������
    // ����������� � ���������� ��������������
    Abstract_obj(){}
    // ����������� � ��������������
    Abstract_obj(string name, int age){
        this->name = name;
        this->age = age;
    }

    // ������
	// ����� name
    void set_name(string name){this->name = name;}
	// ����� age
    void set_age(int age){this->age = age;}
	// ����� ��� name � age
    void set_inform(string name, int age){
        this->set_name(name);
        this->set_age(age);
    }

    // ������
	// ����� name
    string get_name(){return this->name;}
	// ����� age
    int get_age(){return this->age;}
	// ����� name � age
    void get_inform(string& name, int& age){
        name = this->get_name(); 
        age = this->get_age(); 
    }
};



int main(){
    system("chcp 1251"); 
    Abstract_obj my_obj("Poli", 19);
    Abstract_obj my_obj2("Vlad", 18);

    system("pause");

    return 0; 
}