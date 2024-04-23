



#include "iostream"


using namespace std;

/*
Смысл асоциации заключается в том что: 
    мы обьект класса Organs получаем не в конструкторе Human а в методе класса Human
    полей типа Organs у класса Human нет
По прежнему не может возращать объекты Organs
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

    // Функция для работы с органами
    void show_inform_organ(Organs& org){
        // Временная связь 
        // Работать с обьектами типа Organs класс может тольько в своих методах
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
