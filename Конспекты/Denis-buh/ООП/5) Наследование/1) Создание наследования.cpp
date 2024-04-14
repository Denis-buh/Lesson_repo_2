



#include <iostream>

using namespace std;



class My_class{
protected:
    int number2 = 70; //  акой-то атрибут класса
    int get_number2(){
        return this->number2;
    }

public:
    int number = 7; //  акой-то атрибут класса
    int get_number(){
        return this->number;
    }
    
};


/*  онструкци€ наследовани€:
class "»м€ класса наследника": "спецификатор наследовани€" "»м€ класса родител€"{
    "реализаци€ класса наследника"
}
ƒанна€ конструкци€ может из класса родител€ выт€нуть пол€ protected, public (private будет наследоватс€, но не будет доступна) 
при наследовании методы и атрибуты из класса родител€ можно использовать только в классе наследнике
≈сли при наслдовании не указан спецификатор наследовани€ то по умолчанию будет использован спецификатор private (дл€ структур - public)
ѕри использовании разных спецификаторов наследовани€ пол€ атрибутов различаютс€ (подробнее в файле "1) –азличи€ спецификатора наследовани€.png")
*/

class My_super_class: My_class
{
public:
    /* ”становка статуса доступа public дл€ атрибутов (полученных через наследование)
        using "им€ класса от которого наследуемс€"::"атрибут который ходим наследовать";
    */
    using My_class::number2; // ”станавливает данному атрибуту статус public

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
