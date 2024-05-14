

/*
Запрет переопределения:

С помощью спецификатора final  можно запретить определение в производных классах функций, 
    которые имеют то же самое имя, возвращаемый тип и список параметров, 
    что и виртуальная функция в базовом классе.  

    
*/

#include <iostream>

using namespace std;

class Pers{
protected:
    string name;
    int age;
public:
    Pers(string n, int a){
        name = n; 
        age = a;
    }
    virtual void display(){
        cout << name << "\n" << age << "\n";
    }
};

class Employee: public Pers{
private:
    string comp;
public:
    Employee(string n, int a, string c): Pers(n, a){
        comp = c;
    }
    void display() final{
        cout << name << "\n" << age << "\n" << comp << "\n";
    }
};


int main(){



    system("pause");
    return 0; 
}