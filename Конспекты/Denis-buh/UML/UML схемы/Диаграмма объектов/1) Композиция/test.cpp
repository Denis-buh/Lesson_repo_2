



#include "iostream"


using namespace std;

/* Смысл композиции заключается в том что мы создаем обьект класса Organs в конструкторе Human
    Где-либо еще принимать обьекты Organs, Human не может. Самая сторогая
    Так же не может возращать объекты Organs
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
    // Классы части 
    Organs* heart = nullptr;
    Organs* liver = nullptr;
public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Human(){
        // Данные объеты должны существовать только классе и негде больше
        // Работать с ними можно только в этом классе 
        // Информацию в них можно подавать только в классе 
        this->heart = new Organs;
        this->liver = new Organs;
    }
    // Конструктор с инициализацией
    Human(string name, string heart_name, int heart_cost, string liver_name, int liver_cost):Human(){
        this->name = name;
        // Устанавливаем поданную информацию 
        this->heart->set_name(heart_name);  this->heart->set_cost(heart_cost);
        this->liver->set_name(liver_name);  this->liver->set_cost(liver_cost);
    }

    // СЕТЕРЫ
    // сетер name
    void set_name(string name){
        this->name = name; 
    }
    // сетер для name, heart, liver
    void set_inform(string name, string heart_name, int heart_cost, string liver_name, int liver_cost){
        this->name = name;
        // Устанавливаем поданную информацию 
        this->heart->set_name(heart_name);  this->heart->set_cost(heart_cost);
        this->liver->set_name(liver_name);  this->liver->set_cost(liver_cost);
    }

    // ГЕТЕРЫ
    // гетер name
    string get_name(){return this->name;}

    // Деструктор
    ~Human(){
        // Тут удаляем наши обьеты heart и liver
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
