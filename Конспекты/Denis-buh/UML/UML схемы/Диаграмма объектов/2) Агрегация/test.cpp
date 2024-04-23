



#include "iostream"


using namespace std;

/* Смысл агрегации заключается в том что: 
    мы ссылаемся на обьект класса Organs в конструкторе Human (если был подан обект Organs в конструктор)

Human может еще принимать обьекты Organs в своих методах
Так же  может возращать объекты Organs
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
    Organs* heart = nullptr;
    Organs* liver = nullptr;
public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Human(){}
    // Конструктор с инициализацией
    Human(string name, Organs& heart, Organs& liver){
        this->name = name;
        // Данные обьекты были созданы где-то там и тут присвоины к полям класса
        this->heart = &heart;
        this->liver = &liver;
    }

    // СЕТЕРЫ
    // сетер name
    void set_name(string name){
        this->name = name; 
    }
	// сетер для name, heart, liver
    void set_inform(string name, Organs& heart, Organs& liver){
        this->name = name;
        this->heart = (&heart);
        this->liver = (&liver);
    }

    // ГЕТЕРЫ
    // гетер name
    string get_name(){return this->name;}
    // гетер для name, heart, liver
    void get_inform(string& name, Organs& heart, Organs& liver){
        name = this->name;
        heart = *(this->heart);
        liver = *(this->liver);
    }

};



int main(){
    system("chcp 1251");
    Organs heart ("Heart1", 5500);
    {
        Human my_hum;
        {
            Organs liver("Liver1", 500);
            // Устанавливаем информацию для класса
            my_hum.set_inform("Oleg", heart, liver);
            liver.set_cost(1000);
        }
        string name;
        // Необходимо использовать динамическую память 
        // При компиляции у liver и heart_new одинаковый адрес по памяти
        Organs* liver_new = new Organs;
        Organs* heart_new = new Organs; 
        // Получаем информацию из класса
        my_hum.get_inform(name, *heart_new, *liver_new);
    }

    system("pause");
    return 0; 
}