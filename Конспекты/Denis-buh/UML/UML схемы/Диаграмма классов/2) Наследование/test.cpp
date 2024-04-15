



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


class Human: public Abstract_obj{
private:
    string city;
public:
    // ������������
    // ����������� � ���������� ��������������
    Human():Abstract_obj(){}
    // ����������� � �������������� �� 2 ����������
    Human(string name, int age): Abstract_obj(name, age){}
    // ����������� � �������������� �� 3 ����������
    Human(string name, int age, string city): Abstract_obj(name, age){
        this->city = city; 
    }

    // ������
    // ����� city
    void set_city(string city){
        this->city = city; 
    }
	// ����� ��� name � age
    void set_inform(string name, int age){this->Abstract_obj::set_inform(name, age);}
	// ����� ��� name, age � city
    void set_inform(string name, int age, string city){
        this->Abstract_obj::set_inform(name, age); 
        this->city = city; 
    }

    // ������
    // ����� city
    string get_city(){return this->city;}
    // ����� ��� name � age
    void get_inform(string& name, int& age){this->Abstract_obj::get_inform(name, age);}
    // ����� ��� name, age � city
    void get_inform(string& name, int& age, string& city){
        this->Abstract_obj::get_inform(name, age);
        city = this->get_city();
    }


};



int main(){
    system("chcp 1251"); 
    Human hum;
    hum.set_inform("Poli", 16); 
    string name;
    int age;
    hum.get_inform(name, age);
    cout << "Name: " << name << " age: " << age << "\n";
    system("pause");
    return 0; 
}