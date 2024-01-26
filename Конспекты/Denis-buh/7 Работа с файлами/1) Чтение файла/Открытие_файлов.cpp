


#include <iostream>
#include<string>
#include <filesystem> 
#include <fstream> // Для того чтобы можно было производить запись в файлы
#include <windows.h> // Для коректного ввода с консоли


using namespace std;


int main(int argc, char* argv[])
{
    system("chcp 65001"); // Устанавливаем кодировку utf-8 (65001)


    string path_new = "D:\\Разработки разработчика\\Проекты\\My Soft\\My_Textbook_cpp\\7 Работа с файлами\\1) Чтение файла";
    filesystem::current_path(path_new); // устанавливаем указаную директорию в которой будет работать программа

    string name_file = "my_file.txt"; // Задаем имя файла

    ifstream file; // Позволяет читать файл
    file.exceptions(ifstream::badbit | ifstream::failbit); // Данная команда необходима для возможности коректной обработки ошибок
    file.open(name_file); // Открытие файла в режиме перезаписи (если файла нет, то он его не создаст)

    if (not file.is_open()){ // Проверяем файл на открытие
        cout << "Файл не открылся\n";
        system("pause");
        return 0;
    }
    /*
    // Считывание по одному символу
    char inform;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);  
    while (file.get(inform)){
        // метод get считывает информацию по символам и засовывает инфу в inform. Если получилось считать инфу то вернет true и на оборот
        cout << inform;
    }
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 
    cout << "\n";*/

    /*
    // Считывание информации до пробела
    string inform;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);  
    while (not file.eof()){
        // метод eof вернет true если был конец файла и на оборот
        inform = ""; // Нужно для коректного считывания
        // считывает информацию до пробела и засовывает инфу в inform.
        file >> inform;
        cout << inform;
    }
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 
    */

    // Считывание информации по строкам
    string inform;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);  
    while (not file.eof()){
        inform = ""; // Нужно для коректного считывания
        // считывает информацию до перехода на новую строку и засовывает инфу в inform.
        getline(file, inform); 
        cout << inform;
    }
    SetConsoleCP(65001); 
    SetConsoleOutputCP(65001); 

    file.close(); // Закрываем файл

    
}