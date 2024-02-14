



#include <iostream>

using namespace std;



class My_class{
private:
    mutable int number;

public:
    My_class(int number){
        super_number += 1; 
        this->number = number; 
    }
    /* ¬ C++ можно определить атрибуты которые будут относитс€ не к объекту а именно к самому классу
    —татическа€ переменна€ определ€етс€ только один раз и будет существовать, даже если объекты класса не были созданы
     онструкци€ дл€ атрибутов:
        static inline "тип данных атрибутов" "им€ атрибута" = "значение атрибута"
     онструкци€ дл€ методов:
        static inline "тип данных возращаемым методом" "им€ метода и его аргументы"{
            "код метода. ¬ коде не допускаетс€ использование this"
        }
    —татические атрибуты не используют приписку this. 
    */
    static inline int super_number = 0; 
    static inline int get_super_number(){
        return super_number; 
    }

};



int main(){
    system("chcp 1251"); 


    cout << "My_class.super_number = " << My_class::get_super_number() << "\n";
    const My_class new_class(4);

    cout << "My_class.super_number = " << My_class::get_super_number() << "\n";
    cout << "My_class.super_number (через new_class) = " << new_class.get_super_number() << "\n";

    

    system("pause");
}
