



#include <iostream>
using namespace std;


int sum(int a, int b){
    return a + b;
}

int ras(int (*fun)(int a, int b), int a, int b){
    /*Первый параметр - указатель на функцию
    Конструкция аргумента ссылающевося на функцию:
        "тип данных который возращает функция" (*"имя аргумента")("аргументы функции-аргумента")
    */
    int res =  fun(a, b);
    cout << "Результат выполнения функции переданой как аргумент: " << res << "\n";
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