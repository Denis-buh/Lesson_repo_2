



#include <iostream>
using namespace std;


int main()
{
    system("chcp 65001");
   
    cout << "1\n";
    /* Использовать goto необходимо в крайних случаях когда без него не обойтись
    Может ломать код
    */

    goto link; // link - ссылка (куда нужно перейти)

    cout << "2\n";

    link: // Ссылка (куда нужно перейти)

    cout << "3\n";
   
}