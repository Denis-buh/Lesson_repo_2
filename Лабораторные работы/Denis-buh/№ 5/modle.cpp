



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

    Plant(const Plant& obj){
        this->name = obj.name;
        this->species = obj.species;
        this->habitat = obj.habitat;
    }
    // вывод информации
    virtual void print() const = 0; 
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
    Flower(const Flower& obj): Plant(obj.name, obj.species, obj.habitat){
        this->color = obj.color;
        this->flowering_period = obj.flowering_period; 
    }

    virtual void print() const{
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
    Vegetable(const Vegetable& obj): Plant(obj.name, obj.species, obj.habitat){
        this->planting_month = obj.planting_month;
        this->ripening_period = obj.ripening_period; 
    }

    virtual void print() const{
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
    Tree(const Tree& obj): Plant(obj.name, obj.species, obj.habitat){
        this->type = obj.type;
        /*true - лиственное; false - хвойное*/
        this->lifespan = obj.lifespan; 
        this->height = obj.height; 
    }

    bool get_type() const{return this->type;}

    bool operator>(const Tree& other) const{
        return this->type > other.type;
    }
    bool operator<(const Tree& other) const{
        return this->type < other.type;
    }


    virtual void print() const{
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