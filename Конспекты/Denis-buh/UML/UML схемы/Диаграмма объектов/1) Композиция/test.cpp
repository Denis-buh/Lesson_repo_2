



#include "iostream"


using namespace std;

/* ����� ���������� ����������� � ��� ��� �� ������� ������ ������ Organs � ������������ Human
    ���-���� ��� ��������� ������� Organs, Human �� �����. ����� ��������
    ��� �� �� ����� ��������� ������� Organs
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
    // ������ ����� 
    Organs* heart = nullptr;
    Organs* liver = nullptr;
public:
    // ������������
    // ����������� � ���������� ��������������
    Human(){
        // ������ ������ ������ ������������ ������ ������ � ����� ������
        // �������� � ���� ����� ������ � ���� ������ 
        // ���������� � ��� ����� �������� ������ � ������ 
        this->heart = new Organs;
        this->liver = new Organs;
    }
    // ����������� � ��������������
    Human(string name, string heart_name, int heart_cost, string liver_name, int liver_cost):Human(){
        this->name = name;
        // ������������� �������� ���������� 
        this->heart->set_name(heart_name);  this->heart->set_cost(heart_cost);
        this->liver->set_name(liver_name);  this->liver->set_cost(liver_cost);
    }

    // ������
    // ����� name
    void set_name(string name){
        this->name = name; 
    }
    // ����� ��� name, heart, liver
    void set_inform(string name, string heart_name, int heart_cost, string liver_name, int liver_cost){
        this->name = name;
        // ������������� �������� ���������� 
        this->heart->set_name(heart_name);  this->heart->set_cost(heart_cost);
        this->liver->set_name(liver_name);  this->liver->set_cost(liver_cost);
    }

    // ������
    // ����� name
    string get_name(){return this->name;}

    // ����������
    ~Human(){
        // ��� ������� ���� ������ heart � liver
        delete this->heart;
        delete this->liver;
    }
};



int main(){
    system("chcp 1251");
    Human my_hum("Oleg", "heart 1", 1000, "liver 1", 500);
    Human my_hum2("Pavel", "heart 2", 5000, "liver 2", 1500);
    
    system("pause");
    return 0; 
}
