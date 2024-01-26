



#include <iostream>
using namespace std;


// template <typename "переменная в которой тип"> - Данная конструкция необходима для постройки шаблонной функции
// Количество typename с "переменная в которой тип" = количество аргументов. В качестве возвращаемого типа функция имеет auto
// "переменная в которой тип" - может иметь любое название (по умолчанию T). В ней находится тип данных 
// Аналог: template <class "переменная в которой тип">

/*
Коментарий к функции
*/
template <typename name_type, typename type_2> 
auto my_fun(name_type number_1, type_2 number_2){
    return number_1 + number_2;

}


int main(){
    system("chcp 65001");
    cout << "Результат функции: " << my_fun(10, 5) << "\n";
    cout << "Результат функции: " << my_fun(10.789, 5.565) << "\n";
    cout << "Результат функции: " << my_fun(10, 5.565) << "\n";
}

