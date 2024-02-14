



#include <iostream>
using namespace std;

/* Создание псевдонима для функции
using "имя псевдонима" = "тип данных которая должна возращать функция" (*)("аргументы функции")
*/
using fun = int (*)(int a, int b); // Создание псевданима для функции


int sum(int a, int b){
    return a + b;
}


int ras(fun my_fun, int a, int b){
    /* Первый параметр - псевдоним функции */
    int res =  my_fun(a, b);
    cout << "Результат выполнения функции псевданима: " << res << "\n";
    return res - b;
}

int main()
{
    system("chcp 1251");
    int res = ras(sum, 4, 5);
    cout << "3 + 5 = " << res << "\n";
    /*Если функцию нужно обернуть в указатель:
    int (*fun)(int a, int b); 
    fun = sum;

    cout << "3 + 5 = " << ras(fun, 4, 5) << "\n";
    */

    system("pause");
}