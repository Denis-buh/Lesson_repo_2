


#include <iostream>
#include<string>
#include <filesystem> 
#include <fstream> // Для того чтобы можно было производить запись в файлы
#include <windows.h> // Для коректного ввода с консоли


using namespace std;


int main(int argc, char* argv[])
{
    system("chcp 65001"); // Устанавливаем кодировку utf-8 (65001)


    string path_new = "D:\\Разработки разработчика\\Проекты\\My Soft\\My_Textbook_cpp\\7 Работа с файлами\\2) Перезапись файла";
    filesystem::current_path(path_new); // устанавливаем указаную директорию в которой будет работать программа

    string name_file = "my_file.txt"; // Задаем имя файла

    ofstream file; // Позволяет писать в файл
    file.open(name_file); // Открытие файла в режиме перезаписи (если файла нет, то он его создаст)

    if (not file.is_open()){ // Проверяем файл на открытие
        cout << "Файл не открылся\n";
        system("pause");
        return 0;
    }

    file << "some inform\n"; // Производим запись в файл
    file << 3.14 << "\n"; // Производим запись в файл
    file << true << "\n"; // Производим запись в файл
    string inf;
    cout << "Введите информацию для файла: ";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);  
    cin >> inf;
    file << inf << "\n"; // Производим запись в файл
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 
    //  Также можно работать со собственными типами данных и вообще с любыми типами данных
    file.close(); // Закрываем файл
    cout << "Была произведена запись в файл\n"; 


    system("pause");

}