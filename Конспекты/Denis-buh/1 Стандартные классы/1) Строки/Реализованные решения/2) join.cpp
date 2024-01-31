



#include <iostream>
#include <string> 
#include <list>

using namespace std;

/**
Необходимо чтобы соединить список в  строку по символу соединителю
 * @brief 
 * 
 * @param st список который нужно соединить с помощью символа соединителя
 * @param delim символ соединитель 
 * @return string 
 */
string join(list<string> st, char delim);

/**
Необходимо чтобы соединить список в  строку по символу соединителю
 * @brief 
 * 
 * @param st массив который нужно соединить с помощью символа соединителя
 * @param delim символ соединитель 
 * @return string 
 */
string join(string* st, const unsigned short int len_st, char delim);

/**
Необходимо чтобы соединить список в  строку по символу соединителю
 * @brief 
 * 
 * @param st массив который нужно соединить с помощью символа соединителя
 * 
 * @param delim символ соединитель 
 * @return string 
 */
string join(char* st, const unsigned short int len_st, char delim);




int main()
{
    system("chcp 1251"); 
    char st[] {'k', 'j', 'g', 'h', 'j', 'u', 'g', 'j', 'u', 'g'}; 
    unsigned short int len_st = 10;
    string sth = join(st, len_st, ':');
    cout << sth << "\n";


    system("pause");
}



string join(list<string> st, char delim){
    string res = ""; // Результирующая строка
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

string join(string* st, const unsigned short int len_st, char delim){
    string res = "";
    for (unsigned short int i = 0; i < len_st; i += 1){
        res += st[i];
        if (len_st - i > 1){
            res += delim;
        }
    }
    return res;
}

string join(char* st, const unsigned short int len_st, char delim){
    string res = "";
    for (unsigned short int i = 0; i < len_st; i += 1){
        res += st[i];
        if (len_st - i > 1){
            res += delim;
        }
    }
    return res;
}