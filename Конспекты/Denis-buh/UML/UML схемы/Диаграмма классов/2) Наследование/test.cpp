



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


class Human: public Abstract_obj{
private:
    string city;
public:
    // КОНСТРУКТОРЫ
    // Конструктор с отложенной инициализацией
    Human():Abstract_obj(){}
    // Конструктор с инициализацией по 2 аргументам
    Human(string name, int age): Abstract_obj(name, age){}
    // Конструктор с инициализацией по 3 аргументам
    Human(string name, int age, string city): Abstract_obj(name, age){
        this->city = city; 
    }

    // СЕТЕРЫ
    // сетер city
    void set_city(string city){
        this->city = city; 
    }
	// сетер для name и age
    void set_inform(string name, int age){this->Abstract_obj::set_inform(name, age);}
	// сетер для name, age и city
    void set_inform(string name, int age, string city){
        this->Abstract_obj::set_inform(name, age); 
        this->city = city; 
    }

    // ГЕТЕРЫ
    // гетер city
    string get_city(){return this->city;}
    // гетер для name и age
    void get_inform(string& name, int& age){this->Abstract_obj::get_inform(name, age);}
    // гетер для name, age и city
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