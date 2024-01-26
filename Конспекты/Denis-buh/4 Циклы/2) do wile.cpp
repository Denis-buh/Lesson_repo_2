



#include <iostream>
using namespace std;


int main()
{
    system("chcp 65001");

    /*Общая конструкция множественного условия:
    do{
        "тело цикла где мы совершаем какие то действия";
        // Сначала исполняется тело цикла а потом идет проверка while

    } while (какое то выражение);

    break - точка выхода из цикла 
    continue - переход к следующей итерации цикла
    Любые переменные которые создаются в блоке тела цикла будут удалены
    */
    
    int number = 0;

    do{
        cout << "number = " << number << "\n";
        // number += 1;
    } while (number != 0);
    cout << "Цикл закончился\n";
}