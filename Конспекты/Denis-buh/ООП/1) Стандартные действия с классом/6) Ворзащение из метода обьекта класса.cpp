



#include <iostream>


using namespace std; 


class Test{
public:
    int te;
    // Конструктор класса с инициализацией
    Test(int te){this->te = te;}
    // Конструктор копирования
    Test(Test& obj){this->te = obj.te;}
    // Метод возращающий обьект класса
    Test get_copi(){
        Test obj(te + 1);
        return obj;
    }
};


int main(){
    system("chcp 1251");
    Test exempl(15);
    cout << "До копирования: " << exempl.te << "\n";
    Test copi = exempl.get_copi();
    cout << "После копирования: " << copi.te << "\n";

    system("pause");
    return 0;
}