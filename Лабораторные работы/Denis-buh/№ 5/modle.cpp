



#include <iostream>
#include <vector>

using namespace std;


class Plant{
protected:
	// название
    string name;
    // вид
    string species;
    // местообитание
    string habitat; 
public:
    Plant(string name, string species, string habitat){
        this->name = name;
        this->species = species;
        this->habitat = habitat;
    }
    // вывод информации
    virtual void print() = 0; 
};


class Flower: public Plant{
protected:
    // цвет
    string color; 
    // период цветения
    float flowering_period; 
public:
    Flower(string name, string species, string habitat, string color, float flowering_period): Plant(name, species, habitat){
        this->color = color;
        this->flowering_period = flowering_period; 
    }
    virtual void print(){
        cout << "Название: " << this->name << "\n";
        cout << "Вид: " << this->species << "\n";
        cout << "Местообитание: " << this->habitat << "\n";
        cout << "Цвет: " << this->color << "\n";
        cout << "Период цветения: " << this->flowering_period << "\n";
    }
};


class Vegetable: public Plant{
protected:
    // месяц посадки
    int planting_month;
    // срок созревани
    float ripening_period;
public:
    Vegetable(string name, string species, string habitat, int planting_month, float ripening_period): Plant(name, species, habitat){
        this->planting_month = planting_month;
        this->ripening_period = ripening_period; 
    }
    virtual void print(){
        cout << "Название: " << this->name << "\n";
        cout << "Вид: " << this->species << "\n";
        cout << "Местообитание: " << this->habitat << "\n";
        cout << "Месяц посадки: " << this->planting_month << "\n";
        cout << "Срок созревания: " << this->ripening_period << "\n";
    }
};


class Tree: public Plant{
protected:
    // вид (хвойное, лиственное)
    bool type;
    // срок жизни
    float lifespan;
    // высота
    float height; 
public:
    Tree(string name, string species, string habitat, bool type, float lifespan, float height): Plant(name, species, habitat){
        this->type = type;
        /*true - лиственное; false - хвойное*/
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
        cout << "Название: " << this->name << "\n";
        cout << "Вид: " << this->species << "\n";
        cout << "Местообитание: " << this->habitat << "\n";
        if (this->type){
            cout << "Вид дерева: лиственное\n";
        }
        else{
            cout << "Вид дерева: хвойное\n";
        }
        cout << "Срок жизни: " << this->lifespan << "\n";
        cout << "Высота: " << this->height << "\n";
    }
};