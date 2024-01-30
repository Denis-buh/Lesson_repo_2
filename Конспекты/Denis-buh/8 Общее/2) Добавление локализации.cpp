



#include <iostream>
#include <string>
//#include <windows.h> // для SetConsoleCP и SetConsoleOutputCP
using namespace std;


int main(){
    // setlocale(LC_ALL, "rus"); добавление локализации (может не работать)
    // Устанавливаем кодировку utf-8 (65001)
    system("chcp 65001"); // добавление русской локализации (в консоли выводит русские буквы) (не поддержки ввода руских букв)
    // Устанавливаем кодировку Windows 1251 (1251)
    // system("chcp 1251"); // добавление русской локализации (в консоли выводит русские буквы) (есть поддержки ввода руских букв) (косячит с путями файлов)
    // system - информирует в консоли о смене кодировки

    // Аналоги которые не информируют пользователя
    // SetConsoleCP(1251); // (косячит с путями файлов)
    // SetConsoleOutputCP(1251); // (косячит с путями файлов)

    // SetConsoleCP(65001) (не поддержки ввода руских букв)
    // SetConsoleOutputCP(65001) (не поддержки ввода руских букв)

    cout << "Немного текста" << endl;
    string come_inform;
    cout << "Введите инфу на русском: ";
    cin >> come_inform;
    cout << "Инфа " << come_inform ;
    
}