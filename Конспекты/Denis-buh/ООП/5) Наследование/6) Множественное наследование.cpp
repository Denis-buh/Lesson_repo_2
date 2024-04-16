



#include <iostream>

using namespace std;

// класс фотокамеры
class Camera{
public:
    int cout_mp_camera; // количество мегапиксилей камеры

    Camera(int cout_mp_camera = 1){
        this->cout_mp_camera = cout_mp_camera; 
    }

    void make(){
        cout << "making photo\n";
    }
};
 

// класс телефона
class Phone{
public:
    string name_phone; // количество мегапиксилей камеры
    
    Phone(string name_phone = "Phone"){
        this->name_phone = name_phone; 
    }

    void make(){
        cout << "making call\n";
    }
};

/* ћножественное наследование работает так же как и обычное наследование.
ѕри использовании/конфлике атрибутов класса базового и дочернего класса использовать следующую конструкцию:
"метод дочернего класса с аргументами"{
    "Ѕазовый класс"::"метод который хотим использовать"
}
*/
// класс смартфона
class Smartphone : public Phone, public Camera{
public:
    void work(){
        /* »спользуем потому что:
            1) »зменили функционал базового метода
            2)  онфликты имен
            3) ¬ случае если произошла кализи€ по именнам атрибутов (замещение атрибутов)
                3.1) ¬озникает когда в родительском и дочернем классе есть атрибуты с одинаковым названием
                3.2) ѕо умолчанию используетс€ то, что находитс€ в дочернем классе
        */
        this->Phone::make();
        this->Camera::make();
        cout << "class Smartphone finish work\n";
    }
};
 



int main(){
    system("chcp 1251"); 

    Smartphone my_phone = Smartphone();
    // ¬ызов из родительского атрибута через дочерний класс
    my_phone.Phone::make();
    my_phone.work(); // »спользуем метод класса Smartphone


    system("pause");
}
