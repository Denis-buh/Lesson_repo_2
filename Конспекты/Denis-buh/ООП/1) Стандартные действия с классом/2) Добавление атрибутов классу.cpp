



#include <iostream>

using namespace std;



class My_class{
private:
    /* —оздание инкапсулированных атрибутов
    ƒанные атрибуты могут использоватс€ только в классе
    */
    int super_number = 25;
protected:
    /* —оздание защищеных атрибутов
    ƒанные атрибуты могут использоватс€ только в классе или в классах производным от данного.
    */
    int s_number = 20; 
public:
    /* —оздание публичных атрибутов
    ƒанные атрибуты доступны в любой части программы
    */
    int number = 15;

};



int main(){
    system("chcp 1251"); 

    My_class new_class;

    // ќбращение к публичным атрибутам класса
    cout << "ќбращение к атрибуту number класса My_class: " << new_class.number << "\n";
    // «а классом мы можем использовать только public атрибуты

    // »зменение атрибутов класса
    new_class.number = 100;
    cout << "ќбращение к атрибуту number класса My_class: " << new_class.number << "\n";

    /* ќбращение к атрибутам через указатель*/
    My_class* ptr_class = &new_class; // —оздание указател€ на new_class

    // ќбращение к публичным атрибутам класса через указатель
    cout << "ќбращение к атрибуту number класса My_class через указатель: " << ptr_class->number << "\n";

    // »зменение атрибутов класса через указатель
    ptr_class->number = 10;
    cout << "ќбращение к атрибуту number класса My_class через указатель: " << ptr_class->number << "\n";

    system("pause");
}
