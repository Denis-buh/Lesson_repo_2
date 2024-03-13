



#include <iostream>

using namespace std;


/* Структуры
Структура - тоже самое что и классы в C++ за исключением некоторых аспектов.
Структура имеет все тоже самое что и классы.
Обычно структуры служат для хранения каких-то общедоступных данных в виде публичных переменных. 
Конструкция структуры:
    struct "имя_структуры"{
        "компоненты_структуры";
    };
Любую структуру можно представить в виде класса и наоборот
*/

struct My_struct{
private:
    int secret_number;
public:
    My_struct(int number){
        this->secret_number = number;
        cout << "Объект My_struct был создан\n";
    }

    ~My_struct(){
        cout << "Объект My_struct был удален\n";
    }

    int get_secret_number(){
        return this->secret_number;
    }
};



int main(){
    system("chcp 1251"); 

    // Создание объекта структуры
    My_struct* my_struct_obj = new My_struct(3);

    cout << "secret_number = " << my_struct_obj->get_secret_number() << "\n";

    delete my_struct_obj;

    my_struct_obj = nullptr;


    {
        My_struct my_stru = My_struct(8);

        cout << "secret_number = " << my_stru.get_secret_number() << "\n";
    }


    system("pause");
}
