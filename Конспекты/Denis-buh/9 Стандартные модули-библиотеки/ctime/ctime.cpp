



#include <iostream>
/*
Для того чтобы подключить модуль необходимо использовать следующую конструкцию:
#include <"имя модуля или библиотеки">
*/
#include <ctime> // Подключение модуля ctime (модуль времени)
using namespace std;


int main()
{
    system("chcp 65001");

    // time() функция которая была взята из модуля ctime
    // time(NULL) - данная функция выдаст время прошедшее с 1 января 1970 года в секундах
    cout << "Время прошедшее с 1 января 1970 года в секундах: " << time(NULL) << "\n";
    
}
