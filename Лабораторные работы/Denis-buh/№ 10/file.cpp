



#include <iostream>
#include <fstream> // Для того чтобы можно было производить запись в файлы
#include <string>

using namespace std; 



int main(){
    system("chcp 1251");
    string name_file;
    cout << "Введеите путь к файлу: ";
    getline(cin, name_file);
    name_file = "C:\\Разработки разработчика\\Lesson_repo_2\\Лабораторные работы\\Denis-buh\\№ 10\\test.txt";

    ifstream file; // Позволяет читать файл
    // Данная команда необходима для возможности коректной обработки ошибок
    file.exceptions(ifstream::badbit | ifstream::failbit); 
    file.open(name_file); // Открытие файла в режиме чтения (если файла нет, то он его не создаст)
    if (not file.is_open()){ // Проверяем файл на открытие
        cout << "Файл не открылся\n";
        system("pause");
        return 0;
    }
    int len_word_in_file = 0;
    system("pause");
    cout << "Содержимое файла\n";
    while (not file.eof()){
        // метод eof вернет true если был конец файла и на оборот
        len_word_in_file += 1;
        
        string inform = ""; // Нужно для коректного считывания
        // считывает информацию до пробела и засовывает инфу в inform.
        file >> inform;
        //  Если это обычное слово
        if (len_word_in_file != 10){
            cout << inform << " ";
        }
        // Если это десятое слово
        else if (len_word_in_file == 10){
            cout << "!" << inform << "! ";
        }
        
    }

    cout << "Количество слов в тексте: " << len_word_in_file << "\n";
    

    system("pause");
    return 0;
    

}