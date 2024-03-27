


#include <iostream>
#include<string>
#include <filesystem> 
/*
Модули для работы с данными
Для работы с типами char, string 
    ifstream: для чтения с файла
    ofstream: для записи в файл
    fstream: совмещает запись и чтение
Для работы с типами wchar_t, wstring
    wifstream: для чтения с файла
    wofstream: для записи в файл
    wfstream: совмещает запись и чтение
*/
#include <fstream> // Для того чтобы можно было производить запись в файлы
#include <windows.h> // Для коректного ввода с консоли


using namespace std;


int main(int argc, char* argv[])
{
    system("chcp 65001"); // Устанавливаем кодировку utf-8 (65001)

    string path_new = "D:\\Разработки разработчика\\Проекты\\My Soft\\My_Textbook_cpp\\7 Работа с файлами";
    path_new = "C:\\Разработки разработчика\\Lesson_repo_2\\Конспекты\\Denis-buh\\7 Работа с файлами";
    filesystem::current_path(path_new); // устанавливаем указаную директорию в которой будет работать программа

    string name_file = "my_file.bn"; // Задаем имя файла

    fstream file; // Инициализируем обьект для работы с файлами
    file.exceptions(ifstream::badbit | ifstream::failbit); // Данная команда необходима для возможности коректной обработки ошибок
    /*.open() - данный метод необходим для открытия файлов
        .open(путь до файла, режим работы с файлом)
    Режимы работы с файлами
        ios::in: файл открывается для чтения. (для ifstream или fstream) (по умолчанию)
        ios::out: файл открывается для перезаписи. (для ofstream или fstream)
        ios::app: файл открывается для дозаписи. Старые данные не удаляются.
        ios::ate: после открытия файла перемещает указатель в конец файла (не надо)
        ios::trunc: файл усекается при открытии. Может быть установлен, если также установлен режим out (не надо)
        ios::binary: файл открывается в бинарном режиме
    */
    file.open(name_file, ios::out | ios::binary); // Открытие файла в режиме чтения (если файла нет, то он его не создаст)

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