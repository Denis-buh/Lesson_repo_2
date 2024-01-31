



#include <iostream>
using namespace std;


/*
Коментарий к функции
*/
inline void my_fun(int number = 6){
    // inline позволяет встройть код my_fun в код функции main (только там где был вызов my_fun). Работает только с легкими функциями (нет свичей, циклов, рекурсии)
    cout << "number = " << number << "\n";
}


int main(){
    system("chcp 1251");
    my_fun(7);
    my_fun(); // Ошибки не будет так как имеется значение параметра по умолчанию
    system("pause");
}

