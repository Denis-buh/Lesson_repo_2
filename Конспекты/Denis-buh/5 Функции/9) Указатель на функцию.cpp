



#include <iostream>
using namespace std;


void test_fun(){
    cout << "call test_fun\n";
}

void test_fun2(int a){
    cout << "call test_fun2; a = " << a << "\n";
}

int main(){
    system("chcp 1251");
    /*Конструкция для указаеля который будет принемать функцию
        "тип данных который возращает функция" (*"имя указателя")("Параметры которая принимает функция")
    */
    void (*fun)(); // Создаем указатель для приема функции 
    fun = test_fun; // Ссылаем указатель на функцию
    fun(); 

    void (*fun2)(int a); // Создаем указатель для приема функции с параметром int
    fun2 = test_fun2; // Ссылаем указатель на функцию
    fun2(6); 
    system("pause");
}