



#include <iostream>
#include <fstream> // Для того чтобы можно было работать с файлами
#include <string>
#include <filesystem> 

using namespace std; 



int main(){
    system("chcp 65001");
    // Устанавливаем рабочий каталог для программы
    string path_new = "D:\\Разработки разработчика\\Ёба программы\\Lesson_repo_2\\Лабораторные работы\\Denis-buh\\№ 10";
    filesystem::current_path(path_new); 

    fstream file; // Позволяет читать файл
    // Данная команда необходима для возможности коректной обработки ошибок
    file.exceptions(fstream::badbit | fstream::failbit); 
    file.open("test.txt", ios::in); // Открытие файла в режиме чтения

    // С начала просто выводим файл
    cout << "Вывод содержимого файла:\n\n";
    while (not file.eof()){
        string inform = "";
        getline(file, inform); 
        cout << inform << "\n";
    }
    // Возращаемся в начало файла
    file.seekg(0); 
    cout << "Для продолжения нажмите любую клавишу\n";
    system("pause");

    cout << "Вывод содержимого файла с выделениями фрагментов текста:\n\n";
    int cout_word = 0; // Количество слов
    while (not file.eof()){
        string inform = "";
        getline(file, inform);
        inform += " "; // Для коректоной работы последующего цикла

        int split_index = 0; // Индекс разоиденителя (в данном случае ' ')
        for (int i = 0; i < inform.length(); i += 1){
            char smd = inform[i]; 
            // если поймали разоиденитель
            if (smd == ' ' or smd == ';'){
                // Выделяем подстроку/слово
                string temp = inform.substr(split_index, i - split_index); 
                // Проверка на то что строка не вырождена
                if (temp.length()){
                    cout_word += 1; 
                    // Если это  10 слово
                    if (cout_word == 10){cout << "!" << temp << "!";}
                    // Если это не  10 слово
                    else{cout << temp ;}
                }
                cout << smd; // Выводим разоединитель
                split_index = i + 1; // Устанавливаем индекс после разоиденителя
            }
        } 
        cout << "\n"; // Так как считывали до \n нужно обратно отобразить \n
    }
    cout << "Количество слов в файле: " << cout_word << "\n";

    system("pause");
    return 0; 
};
