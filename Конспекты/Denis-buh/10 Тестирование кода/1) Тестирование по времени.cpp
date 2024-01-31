



#include <iostream>
using namespace std;
#include <ctime> 



int main(){
    system("chcp 1251"); 
    srand(time(0));
    // Код который тестируем 
    
    cout << "Время выполнения кода (сек): " << clock()/1000.0 << endl; // время работы программы  

    system("pause");

}




