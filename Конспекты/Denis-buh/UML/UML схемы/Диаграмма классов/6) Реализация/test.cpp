



#include "iostream"


using namespace std;


class Abstract_obj{
protected:
    string name; // имя
    int age; // возраст
public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Abstract_obj(){}
    // Конструктор с инициализацией
    Abstract_obj(string name, int age){
        this->name = name;
        this->age = age;
    }

};


// Спецификатор наследования по умолчанию должен быть private но все зависит от ситуации
class Human: private Abstract_obj{
private:
public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Human():Abstract_obj(){}
    // Конструктор с инициализацией по 2 аргументам
    Human(string name, int age): Abstract_obj(name, age){}

    // СЕТЕРЫ
	// сетер name
    void set_name(string name){this->name = name;}
	// сетер age
    void set_age(int age){this->age = age;}
	// сетер для name и age
    void set_inform(string name, int age){
        this->set_name(name);
        this->set_age(age);
    }


    // ГЕТЕРЫ
	// гетер name
    string get_name(){return this->name;}
	// гетер age
    int get_age(){return this->age;}
	// гетер name и age
    void get_inform(string& name, int& age){
        name = this->get_name(); 
        age = this->get_age(); 
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