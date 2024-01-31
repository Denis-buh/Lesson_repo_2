



#include <iostream>
#include <stdexcept> // Это чтобы была возможность подымать исключения
using namespace std;

int main()
{
    system("chcp 1251");
    /*Конструкция throw
    throw "название исключения"("коментарий к исключению (если поддерживается)")
    Данная конструкция необходима чтобы подымать исключения

    Если используется тип данных который не наследуется от exception
    Допустимо в место "название исключения" писать другие классы (int, string, свои собственные классы ...) (не использовать)
    Для блока try-catch необходимо указывать тот же тип данных который использовался в throw 
    Пример:
        try{
            throw 5;
        }
        catch (const int& ex){
            cout << "Поймано число"
        }

        try{
            throw "strings";
        }
        catch (const string& ex){
            cout << "Поймана строка"
        }

        try{
            throw 6.8;
        }
        catch (const float& ex){
            cout << "Поймана дробь"
        }
    */
    throw invalid_argument("Коминтарий для исключения"); 
    system("pause");
}