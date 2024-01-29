



#include <iostream>
#include <cmath>

//#define DEBUG // создание флага условной компиляции 

using namespace std;


double fun1(float x, float y) {
    double r1 = pow(cos(x), 4); // Промежуточные переменные для хранения результата
    double r2 = pow(sin(y), 2); // Промежуточные переменные для хранения результата
    double r3 = pow(sin(x * 2.0), 2) / 4; // Промежуточные переменные для хранения результата
    return r1 + r2 + r3 - 1.0; 

}


double fun2(float x, float y) {
    return sin(x + y) * sin(y - x);
}


int main(){
    // Добавление локализации
    setlocale(LC_ALL, "rus");

    #ifdef DEBUG 
        // Производим тестирование программы
        float x; float y; // Аргументы функций
        double z1; double z2; // Значения функций

        cout << "Тест 1\n";
        x = 0; y = 3.14;
        cout << "\tx = " << x << ", y = " << y << "\n";
        z1 = fun1(x, y);
        cout << "\tТест 1.1: " << ((0.0 < z1) and (z1 < 0.001)) << "\n";
        z2 = fun2(x, y);
        cout << "\tТест 1.2: " << ((0.0 < z2) and (z2 < 0.001)) << "\n";

        cout << "Тест 2\n";
        x = 0; y = 0;
        cout << "\tx = " << x << ", y = " << y << "\n";
        z1 = fun1(x, y);
        cout << "\tТест 2.1: " << (z1 == 0) << "\n";
        z2 = fun2(x, y);
        cout << "\tТест 2.2: " << (z2 == 0) << "\n";

    #else 
         float x; // Создаем переменную 
         cout << "Введите значение для x. x = ";
         cin >> x; // Инициализируем переменную
         cout << "Вы ввели x = " << x << "\n";
         
         float y; // Создаем переменную 
         cout << "Введите значение для y. y = ";
         cin >> y; // Инициализируем переменную
         cout << "Вы ввели y = " << y << "\n";

         cout << "Значение функций:\n";
         cout << "z1 = " << fun1(x, y) << "\n";
         cout << "z2 = " << fun2(x, y) << "\n";

    #endif 

    system("pause"); // Данная строка добавляет задержку для окна консоли
}

