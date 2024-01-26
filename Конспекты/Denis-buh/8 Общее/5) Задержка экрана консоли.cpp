



#include <iostream>
using namespace std;


int main()
{
    system("chcp 65001");
   
    for (int i = 0; i < 5; i += 1){
        cout << "i = " <<  i << "\n";

    }
    cout << "Цикл закончился\n";

    system("pause"); // Данная строка добавляет задержку для окна консоли

   
}