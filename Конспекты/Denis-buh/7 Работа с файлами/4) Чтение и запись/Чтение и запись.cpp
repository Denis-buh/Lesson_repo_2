


#include <iostream>
#include<string>
#include <filesystem> 
#include <fstream> // Для того чтобы можно было производить запись в файлы
#include <windows.h> // Для коректного ввода с консоли


using namespace std;


int main(int argc, char* argv[])
{
    system("chcp 65001"); // Устанавливаем кодировку utf-8 (65001)


    string path_new = "D:\\Разработки разработчика\\Проекты\\My Soft\\My_Textbook_cpp\\7 Работа с файлами\\4) Чтение и запись";
    filesystem::current_path(path_new); // устанавливаем указаную директорию в которой будет работать программа

    string name_file = "my_file.txt"; // Задаем имя файла

    fstream file; // Позволяет одновременно читать и писать в файл
    file.open(name_file, fstream::in | fstream::out | fstream::app); // Открытие файла в режиме чтения записи (если файла нет, то он его создаст)

    if (not file.is_open()){ // Проверяем файл на открытие
        cout << "Файл не открылся\n";
        system("pause");
        return 0;
    }
    // Программа может либо читать либо писать файл
    int flag;
    cin >> flag;

    if (flag == 1){
        string inf;
        cout << "Введите информацию для файла: ";
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);  
        cin >> inf;
        file << inf << "\n"; // Производим запись в файл
        SetConsoleCP(65001); 
        SetConsoleOutputCP(65001); 
        //  Также можно работать со собственными типами данных и вообще с любыми типами данных
        cout << "Была произведена запись в файл\n"; 
    }

    if (flag == 2){
        // Считывание информации по строкам
        string inform;
        SetConsoleCP(1251); 
        SetConsoleOutputCP(1251); 
        while (not file.eof()){
            inform = ""; // Нужно для коректного считывания
            // считывает информацию до перехода на новую строку и засовывает инфу в inform.
            getline(file, inform); 
            cout << inform << "\n";
        }
        SetConsoleCP(65001); 
        SetConsoleOutputCP(65001); 
    }

    file.close(); // Закрываем файл

    system("pause");
}