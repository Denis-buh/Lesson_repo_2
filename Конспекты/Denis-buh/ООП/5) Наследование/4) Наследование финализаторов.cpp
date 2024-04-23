



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
    }

    ~My_class(){
        cout << "Удаление объекта класса My_class\n";
    }

};


class My_super_class: My_class
{
private:
    string inform = "None";
public:
    My_super_class(int number, string inform): My_class(number){
        this->inform = inform;
    }


    /* Если нужно изменить базовый финализатор
    Конструкция:
        "Конструктор класса наследника(с аргументами)": "финализатор базового класса(с аргументами)"{
            "реализация конструктора копирования"
        }*/
    ~My_super_class(){
        cout << "Удаление объекта класса My_super_class\n";
    }



    void show_iform(){
        cout << "inform = " << this->inform << "\n";
    }



};


int main(){
    system("chcp 1251"); 


    My_super_class* my_class = new My_super_class(5, "some inform");

    my_class->show_iform();
    delete my_class;




    {
        My_super_class new_good_class = My_super_class(5, "good inform");


        new_good_class.show_iform();
    }





    system("pause");
}
