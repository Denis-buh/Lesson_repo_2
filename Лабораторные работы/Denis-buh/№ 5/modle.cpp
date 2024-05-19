



#include <iostream>
#include <vector>

using namespace std;


class Plant{
protected:
	// ��������
    string name;
    // ���
    string species;
    // �������������
    string habitat; 
public:
    Plant(string name, string species, string habitat){
        this->name = name;
        this->species = species;
        this->habitat = habitat;
    }
    // ����� ����������
    virtual void print() = 0; 
};


class Flower: public Plant{
protected:
    // ����
    string color; 
    // ������ ��������
    float flowering_period; 
public:
    Flower(string name, string species, string habitat, string color, float flowering_period): Plant(name, species, habitat){
        this->color = color;
        this->flowering_period = flowering_period; 
    }
    virtual void print(){
        cout << "��������: " << this->name << "\n";
        cout << "���: " << this->species << "\n";
        cout << "�������������: " << this->habitat << "\n";
        cout << "����: " << this->color << "\n";
        cout << "������ ��������: " << this->flowering_period << "\n";
    }
};


class Vegetable: public Plant{
protected:
    // ����� �������
    int planting_month;
    // ���� ���������
    float ripening_period;
public:
    Vegetable(string name, string species, string habitat, int planting_month, float ripening_period): Plant(name, species, habitat){
        this->planting_month = planting_month;
        this->ripening_period = ripening_period; 
    }
    virtual void print(){
        cout << "��������: " << this->name << "\n";
        cout << "���: " << this->species << "\n";
        cout << "�������������: " << this->habitat << "\n";
        cout << "����� �������: " << this->planting_month << "\n";
        cout << "���� ����������: " << this->ripening_period << "\n";
    }
};


class Tree: public Plant{
protected:
    // ��� (�������, ����������)
    bool type;
    // ���� �����
    float lifespan;
    // ������
    float height; 
public:
    Tree(string name, string species, string habitat, bool type, float lifespan, float height): Plant(name, species, habitat){
        this->type = type;
        /*true - ����������; false - �������*/
        this->lifespan = lifespan; 
        this->height = height; 
    }

    bool get_type(){return this->type;}

    bool operator>(Tree& other){
        return this->type > other.type;
    }
    bool operator<(Tree& other){
        return this->type < other.type;
    }


    virtual void print(){
        cout << "��������: " << this->name << "\n";
        cout << "���: " << this->species << "\n";
        cout << "�������������: " << this->habitat << "\n";
        if (this->type){
            cout << "��� ������: ����������\n";
        }
        else{
            cout << "��� ������: �������\n";
        }
        cout << "���� �����: " << this->lifespan << "\n";
        cout << "������: " << this->height << "\n";
    }
};