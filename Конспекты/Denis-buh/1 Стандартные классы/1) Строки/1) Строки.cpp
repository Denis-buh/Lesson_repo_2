



#include <iostream>
using namespace std;
#include <string> // Это чтобы работать со строками

// Реализация унивирсальных функций для работы со строками
#include <list>

list<string> split(string st, char delim);

string join(list<string> st, char delim);
// Реализация унивирсальных функций для работы со строками




int main()
{
    system("chcp 1251"); 

    /*Escape - последовательности - данные штуки используются во всех языках. Необходимы для текста
    
    \b - Удаление последнего выделеного символа
    \n - enter
    \t - tab

    \\ - Вывести \ (обратную черту)
    \" - Вывести кавычку "
    \' - Вывести кавычку '
    */
    char sim = 'f'; // Так создается переменная с символом
    cout << sim << "\n";
    // '' - данные кавычки создают символ. Аналог: 'символ'
    // "" - данные кавычки создают текст. Аналог: 'символ' + "\0". \0 - терминатор (символ завершения строки)
    // Интерменирующий ноль (\0) - необходим чтобы прога монимала где конец строки (массива char)
 
    char arr_sim[] = "My string"; // Массив из символов "" - добавляют \0 в конец строки

    cout << arr_sim << "\n";

    char arr_chars[] = {'M', 'y', ' ', 's', 't', 'r', 'i', 'n', 'g', 's', '\0'};
    cout << size(arr_chars) << "\n"; // size() - замерает количество элементов в массиве



    string name = "Alex"; // Так создается переменная с текстом
    cout << name << "\n";

    string vords[] = {"Hello", "world", "test"}; // Масив строк
    for (string i : vords){
        cout << i << "(" << size(i) << ")" << " ";// size() - замерает количество символов в строке
    }
    cout << "\n";
    cout << vords[0] + " " + vords[1] << "\n"; // Конкатенация строк для нормального человека
    
}


/**
Необходимо чтобы разбить строку по символу разоединителю
 * @brief 
 * 
 * @param st исходная строка которую нужно разбить по символу разоединителю
 * @param delim символ разоединитель
 * @return list<string> 
 */
list<string> split(string st, char delim){
    list <string> res;
    // int cout_delim = st.find(delim, 0 );  // Количество разоединителей
    int len_delim = 1; // Длина символа разоединителя
    int len_st = size(st); // Длина строки
    int past_ind = 0; // Индекс где последный раз был обнаружен разделитель
     
    for (int i = 0; i < len_st; i += 1){
        if (st[i] == delim){
            res.push_back(st.substr(past_ind, i - past_ind));
            past_ind = i + len_delim; 
        }

    }
    res.push_back(st.substr(past_ind, len_st - past_ind));
    return res;

}


/**
Необходимо чтобы соединить список в  строку по символу соединителю
 * @brief 
 * 
 * @param st список который нужно соединить с помощью символа соединителя
 * @param delim символ соединитель 
 * @return string 
 */
string join(list<string> st, char delim){
    string res;
    int len_st = size(st) - 1; // Длина списка который нужно объединить
    for (string i : st){
        res += i;
        if (len_st > 0){
            res += delim;
            len_st -= 1;
        }
    }
    return res;
}