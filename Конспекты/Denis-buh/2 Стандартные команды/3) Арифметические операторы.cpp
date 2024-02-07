



#include <iostream>
// подключение математической библиотеки
#include <cmath>

using namespace std;


int main()
{
    system("chcp 1251");

    float number_1 = 23;
    float number_2 = 77;

    /*Виды операторов:
        1) Унарные (нужен только один операнд)
        2) Бинарные (нужно два операнда)
        3) Тернарные (нужно три операнда)
    При работе с операторами все операнды должны быть одного типа
    */

    // Унарные операторы
    // Унарный минус (умножает число на -1)
    cout << "Унарный минус " << - number_1 << "\n";
    // ++ Инкримент ( аналог += 1)
    cout << "'number'++ " << number_1 ++ << "\n"; // Отображает 23 но на самом деле 24
    cout << "++'number' " << ++ number_1  << "\n"; // Отображает все как надо

    // -- Дикремент (херовый аналог -= 1)
    cout << "'number'-- " << number_1 -- << "\n";  // Отображает 25 но на самом деле 24
    cout << "--'number'" << -- number_1 << "\n";  // Отображает все как надо

    number_1 = 23;

    // Бинарные операторы
    // + Сложение
    cout << "+= " << number_1 << "\n";
    // number_1 += number_2 аналогично number_1 = number_1 + number_2
    number_1 = 23;

    // - Вычитание
    number_1 -= number_2;
    cout << "-= " << number_1 << "\n";
    // number_1 -= number_2 аналогично number_1 = number_1 - number_2
    number_1 = 23;


    // * Умножение
    number_1 *= number_2;
    cout << "*= " << number_1 << "\n";
    // number_1 *= number_2 аналогично number_1 = number_1 * number_2
    number_1 = 23;


    // / Деление
    number_1 /= number_2;
    cout << "/= " << number_1 << "\n";
    // number_1 /= number_2 аналогично number_1 = number_1 / number_2
    number_1 = 23;


    // % Деление по модулю (остаток от деления). Работает только с целочисленными числами
    int number_2_int = number_2;
    number_2_int %= 2;
    cout << "%= " << number_2_int << "\n";
    // number_1 %= number_2 аналогично number_1 = number_1 % number_2
    number_2_int = number_2;

    // Целочисленное деление
    cout << "Целочисленное деление " << int(number_2 / number_1) << "\n";
    number_2 = int(number_2 / number_1);
    cout << "Целочисленное деление c присваиванием " << number_2 << "\n";
    number_2 = 77;

    // Побитовые сдвиги
    int number_bin_1 = {0b10}; // 2
    int number_bin_2 = {0b01}; // 1

    cout << "1 << 2 = " << (number_bin_2 << 2) << "\n";
    // number_bin_2 <<= 2 аналогично number_bin_2 = number_bin_2 << 2;

    cout << "2 >> 1 = " << (number_bin_1 >> 1) << "\n";
    // Аналог: number_bin_1 >>= 1 аналогично number_bin_1 = number_bin_1 >> 1;



    // Все что работает с cmath
    
    // Возведение в степень 
    /*Конструкция возведения в степень:
        "результат возведения" = pow("основание степени", "показатель степени")
    */
    cout << "5 в 3 степени = " << pow(5, 3) << "\n";

    /*Конструкция корня:
        "корень" = sqrt("число")
    */
    cout << "Корень из 9 = " << sqrt(9) << "\n";

    /*Конструкция модуля для целых чисел:
        "модуль числа" = abs("число")
    */
    cout << "Модуль -9 = " << abs(-9) << "\n";

    /*Конструкция модуля для дробных чисел:
        "модуль числа" = fabs("число")
    */
    cout << "Модуль -9.9 = " << fabs(-9.9) << "\n";


    system("pause");

}