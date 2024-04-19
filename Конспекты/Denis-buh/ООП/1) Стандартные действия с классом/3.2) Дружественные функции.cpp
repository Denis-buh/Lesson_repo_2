



#include <iostream>


using namespace std;
/*
Дружественные функции - функции которые не являются атрибутами класса, 
но имеют достут к закрытым атрибутам
Может быть дружественна к некольким классам.
Дружественной может стать функция обьявленная в другом классе.
Можно сделать дружественный класс. 
Нарушает инкапсуляцию класса.
*/



class Test{
private:
    int value;
public:
    void set_value(int value){
        this->value = value; 
    }

    friend void show_inform(Test& test){
        // test - необходима для рабботы с текущем обьектом 
        cout << test.value << "\n";
    }
};

int main(){
    system("chcp 1251");
    Test tes;
    tes.set_value(100);
    // Вызываем дружественную функцию для класса
    show_inform(tes);
    system("pause");
    return 0; 
}