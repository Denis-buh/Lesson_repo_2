



#include <iostream>

using namespace std;



class My_class{
protected:
    int number2 = 70; // Какой-то атрибут класса
    int get_number2(){
        return this->number2;
    }

public:
    int number = 7; // Какой-то атрибут класса
    int get_number(){
        return this->number;
    }

};


/* Конструкция наследования:
class "Имя класса наследника": "Имя класса родителя"{
    "реализация класса наследника"
Данная конструкция может из класса родителя вытянуть поля protected, public
при наследовании методы и атрибуты из класса родителя можно использовать только в классе наследнике
}
*/

class My_super_class: My_class
{
public:
    void show_iform(){
        cout << "number = " << this->get_number() << "\n";
        cout << "number2 = " << this->get_number2() << "\n";

    }

};



int main(){
    system("chcp 1251"); 


    My_super_class new_class = My_super_class();

    new_class.show_iform();



    system("pause");
}
