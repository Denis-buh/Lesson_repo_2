



#include <iostream>
using namespace std;
#include <string>




int main(int argc, char* argv[]){
    setlocale(LC_ALL, "Rus");
    // argc - количество аргументов
    /*argv - массив аргументов
        Первым аргументом массива всегда будет путь к исполняему файлу exe
        Последующие аргументы - то что передано командной строке (файлы по асоциациям/открытиям с помощью )

    */
    cout << argc << "\n";
    for (int i = 0; i < argc; i += 1){
        cout << argv[i] << "\n";
    }

    system("pause");

}