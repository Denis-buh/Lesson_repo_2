



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
    }

    My_class(const My_class &p){
        /* Данный конструктор используется когда мы копируем объект
        По умолчанию просто копирует объект со всеми его атрибутами 
        При создании это конструктора необходимо указать что нужно скопировать
        */
        this->number = p.number; // Передаем копии атрибут объекта который хотим скопировать
        cout << "Копирование класса My_class\n";
    }
    /* Иногда необходимо удалить конструктор копирования для чего используется следующая конструкция
    Person(const Person &p) = delete;
    */



};



int main(){
    system("chcp 1251"); 


    My_class new_class(4);

    My_class new_obj(new_class);

    system("pause");
}
