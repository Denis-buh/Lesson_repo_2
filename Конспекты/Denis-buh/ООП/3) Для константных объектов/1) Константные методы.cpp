



#include <iostream>

using namespace std;



class My_class{
private:
    int number;

public:
    My_class(int number){
        this->number = number; 
    }
    /* Создание константного метода:
    "тип данных который возращает метод" "имя методаи его аргументы" const{
        "код метода"
    }
    Данные методы необходимы чтобы объект класса мог работать как константа
    В данном методе не должны изменяться какие либо атрибуты класса
    Также данный метод может вызывать только константные методы
    */
    int get_number() const{
        return this->number; 
    }
};



int main(){
    system("chcp 1251"); 

    /* Когда мы объявляем объект класса константой то мы не можем менять его атрибуты*/
    const My_class new_class(4);

    cout << "My_class.number = " << new_class.get_number() << "\n";

    

    system("pause");
}
