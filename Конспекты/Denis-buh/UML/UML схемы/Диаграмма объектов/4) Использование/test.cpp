



#include "iostream"


using namespace std;

/*
Смысл использогвания  заключается в том что: 
    мы создаем обьект класса Organs получаем  в методе класса Human
    полей типа Organs у класса Human нет
    Созданиый обьект возращаем из метода
*/


class Organs{
protected:
    string name; // имя
    int cost; // возраст
public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Organs(){}
    // Конструктор копирования
    Organs(Organs& obj){
        this->name = obj.name;
        this->cost = obj.cost;
    }
    // Конструктор с инициализацией
    Organs(string name, int cost){
        this->name = name;
        this->cost = cost;
    }

    // СЕТЕРЫ
	// сетер name
    void set_name(string name){this->name = name;}
	// сетер cost
    void set_cost(int cost){this->cost = cost;}

    // ГЕТЕРЫ
	// гетер name
    string get_name(){return this->name;}
	// гетер cost
    int get_cost(){return this->cost;}
};


class Human{
private:
    string name;

public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Human(){}
    // Конструктор с инициализацией
    Human(string name){
        this->name = name;
    }

    // СЕТЕРЫ
    // сетер name
    void set_name(string name){
        this->name = name; 
    }

    // ГЕТЕРЫ
    // гетер name
    string get_name(){return this->name;}

    // Метод возвращающий орган
    Organs get_organ(){
        // Временная связь 
        // создаем объект типа Organs
        Organs org; 
        // Работать с обьектом типа Organs
        org.set_name("Liver1");
        org.set_cost(500);
        // возращаем обьект
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
