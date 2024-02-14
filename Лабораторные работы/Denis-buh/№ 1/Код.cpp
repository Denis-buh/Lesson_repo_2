



#include <iostream>
#define _USE_MATH_DEFINES // Определяем для подключения констант
#include <cmath>

using namespace std;



int main(){
    // Добавление локализации
    system("chcp 1251"); 

    float x; // Создаем переменную 
    cout << "Введите значение для x(в радианах). x = ";
    cin >> x; // Инициализируем переменную
    cout << "Значение (в радианах) x = " << x << "\n";
    

    float y; // Создаем переменную 
    cout << "Введите значение для y(в радианах). y = ";
    cin >> y; // Инициализируем переменную
    cout << "Значение (в радианах) y = " << y << "\n";
    


    float z1 = pow(cos(x), 4) + pow(sin(y), 2) + (pow(sin(x * 2.0), 2) / 4.0) - 1.0;
    //cout << pow(cos(x), 4) << " " << pow(sin(y), 2) << " " << pow(sin(x * 2.0), 2) / 4.0 << "\n";
    cout << "z1 = " << z1 << "\n";

    float z2 = sin(x + y) * sin(y - x);
    //cout << sin(x + y) << " " << sin(y - x)<< "\n";
    cout << "z2 = " << z2 << "\n";

    system("pause"); // Данная строка добавляет задержку для окна консоли
    return 0;
}

