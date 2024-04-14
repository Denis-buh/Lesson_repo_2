



#include <iostream>

using namespace std;



class My_class{
private:
    /*Создание атрибута который можно изменить в константном объекте
    Конструкция:
        mutable "тип атрибута" "имя атрибута" = "значение атрибута";
    */
    mutable int number;

public:
    My_class(int number){
        this->number = number; 
    }

    void set_number(int number) const{
        this->number = number; 
    }

    int get_number() const{
        return this->number;
    }
};



int main(){
    system("chcp 1251"); 


    const My_class new_class(4);
    new_class.set_number(9);

    cout << "My_class.number = " << new_class.get_number() << "\n";

    

    system("pause");
}
