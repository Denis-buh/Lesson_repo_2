



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

/* Множественное наследование работает так же как и обычное наследование.
При использовании/конфлике атрибутов класса базового и дочернего класса использовать следующую конструкцию:
"метод дочернего класса с аргументами"{
    "Базовый класс"::"метод который хотим использовать"
}
*/
// класс смартфона
class Smartphone : public Phone, public Camera{
public:
    void work(){
        /* Используем потому что:
            1) Изменили базовый метод
            2) Конфликты имен*/
        Phone::make();
        Camera::make();
        cout << "class Smartphone finish work\n";
    }
};
 



int main(){
    system("chcp 1251"); 

    Smartphone my_phone = Smartphone();
    my_phone.work(); // Используем метод класса Smartphone


    system("pause");
}
