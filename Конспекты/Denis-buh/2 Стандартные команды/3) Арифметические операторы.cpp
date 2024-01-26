



#include <iostream>
using namespace std;


int main()
{
    system("chcp 65001");

    float number_1 = 23;
    float number_2 = 77;

    /*Виды операторов:
        1) Унарные (нужен только один операнд)
        2) Бинарные (нужно два операнда)
        3) Тернарные (нужно три операнда)
    */

    // Унарные операторы
    // Унарный минус (умножает число на -1)
    cout << "Унарный минус " << - number_1 << "\n";
    // ++ Инкримент (херовый аналог += 1)
    cout << "'number'++ " << number_1 ++ << "\n"; // Отображает 23 но на самом деле 24
    cout << "++'number' " << ++ number_1  << "\n"; // Отображает все как надо
    cout << "+= 1 " << (number_1 += 1) << "\n";

    // -- Дикремент (херовый аналог -= 1)
    cout << "'number'-- " << number_1 -- << "\n";  // Отображает 25 но на самом деле 24
    cout << "--'number'" << -- number_1 << "\n";  // Отображает все как надо
    cout << "-= 1 " << (number_1 -= 1) << "\n";

    number_1 = 23;

    // Бинарные операторы
    // + Сложение
    cout << "+ " << number_1 + number_2 << "\n";
    number_1 += number_2;
    cout << "+= " << number_1 << "\n";
    number_1 = 23;

    // - Вычитание
    cout << "- " << number_1 - number_2 << "\n";
    number_1 -= number_2;
    cout << "-= " << number_1 << "\n";
    number_1 = 23;


    // * Умножение
    cout << "* " << number_1 * number_2 << "\n";
    number_1 *= number_2;
    cout << "*= " << number_1 << "\n";
    number_1 = 23;


    // / Деление
    cout << "/ " << number_1 / number_2 << "\n";
    number_1 /= number_2;
    cout << "/= " << number_1 << "\n";
    number_1 = 23;


    // % Деление по модулю (остаток от деления). Работает только с целочисленными числами
    int number_2_int = number_2;
    cout << "% " << number_2_int % 2 << "\n";
    number_2_int %= 2;
    cout << "%= " << number_2_int << "\n";
    number_2_int = number_2;

    // Целочисленное деление
    cout << "Целочисленное деление " << int(number_2 / number_1) << "\n";
    number_2 = int(number_2 / number_1);
    cout << "Целочисленное деление c присваиванием " << number_2 << "\n";
    number_2 = 77;


    // **
    //cout << number_1 ** number_2 << "\n";

}