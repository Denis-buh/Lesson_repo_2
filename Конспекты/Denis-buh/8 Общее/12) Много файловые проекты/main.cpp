



#include <iostream> 
using namespace std; 

#include "modle.cpp"
// Импортируем самописный модуль 


int main(){ 
    system("chcp 65001");

    cout << 5 << " + " << 6 << " = " << my_fun(5, 6) << "\n";

}