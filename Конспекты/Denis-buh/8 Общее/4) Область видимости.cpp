



#include <iostream>
using namespace std;


// Глобальные переменные - переменные которые находятся вне {} (переменные из внешней области)
// Локальные переменные - переменные которые находятся в {} (переменные внутреней области видимости). Все локальные переменные за {} удаляются
int global = 12; // Глобальная переменная (можно вызвать где угодно)



int main(){
    system("chcp 65001");

    int a = 10;
    // int b = 0; Данная конструкция необходима чтобы переменной из внешней области предать значение в нутреней области видимости

    if (true){
        // Новая область видимости
        // {} - область видимости. Все переменные находящиеся в {} - локальные
        int a = 100; // данная локальная переменная а перекроит внешную а на момент блока if (далее будет удалена)
        cout << "Я вижу global и она = " << global << "\n";
        cout << "Я вижу а и она = " << a << "\n";
        int b = 20;
        // b = 20; Данная конструкция необходима чтобы переменной из внешней области предать значение в нутреней области видимости
        cout << "Я вижу b и она = " << b << "\n";
        // После блока if b будет удалена (если локальная переменная)
        cout << "Конец if"<< "\n";
    }
    cout << "Я вижу global и она = " << global << "\n";
    cout << "Я вижу а и она = " << a << "\n";
    // cout << "Я вижу b и она = " << b << "\n"; Будет ошибка так как эта переменная в другой области видимости
}
