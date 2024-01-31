



#include <iostream>
#include <string>
#include <list>

using namespace std;


/**
Необходимо чтобы разбить строку по символу разоединителю
 * @brief 
 * 
 * @param st исходная строка которую нужно разбить по символу разоединителю
 * @param delim символ разоединитель
 * @return list<string> Список в котором разбитая строка
 */
list<string> split(string st, const char delim);

/**
Необходимо чтобы разбить строку по символу разоединителю
 * @brief 
 * 
 * @param st исходная строка которую нужно разбить по символу разоединителю
 * @param delim символ разоединитель
 * @param len_res Указатель на длину результирующего массива 
 * @return string* Массив со строками
 */
string* split(string st, const char delim, unsigned short int *len_res);






int main(){
    system("chcp 1251"); 
    string test = "Тек:ст :Для теста::::";
    unsigned short int len_res = 0;
    
    string* resr = split(test, ':', &len_res);
    for (int i = 0; i < len_res; i += 1){
        cout << resr[i] << "\n";
    }

    /*
    string test = "Тек:ст Для теста:o";
    list<string> res = split(test, ':');
    for (string i : res){
        cout << i << "\t09" << "\n";
    }*/

    system("pause");

}




list<string> split(string st, const char delim){
    list <string> res; // Результирующий список
    const unsigned short int len_st = size(st); // Длина строки
    unsigned short int past_ind = 0; // Индекс где последный раз был обнаружен разделитель
    string st_small; // Промежуточная строка
     
    for (unsigned short int i = 0; i < len_st; i += 1){
        if (st[i] == delim){
            st_small = st.substr(past_ind, i - past_ind); 
            if (size(st_small) != 0){
                // Если строка не пустая
                res.push_back(st_small);
            }
            past_ind = i + 1;
        }
    }
    // Проверка того что осталось после цикла
    st_small = st.substr(past_ind, len_st); 
    if (size(st_small) != 0){
        res.push_back(st_small);
    }
    cout << "Время выполнения кода (сек): " << clock()/1000.0 << endl; // время работы программы  
    return res;

}


string* split(string st, const char delim, unsigned short int *len_res){
    const unsigned short int len_st = size(st); // Длина строки
    unsigned short int past_ind = 0; // Индекс где последный раз был обнаружен разделитель

    // Определяем количество знаков разделителей
    for (unsigned short int i = 0; i <= len_st; i += 1){
        if (st[i] == delim){
            if (size(st.substr(past_ind, i - past_ind)) != 0){
                // Если строка не пустая
                *len_res += 1;
            }
            past_ind = i + 1;
        }
    }
    // Проверка того что осталось после цикла
    if (size(st.substr(past_ind, len_st)) != 0){
        *len_res += 1;
    }

    past_ind = 0; // Возвращаем индекс в стандартное значение
    string st_small; // Промежуточная строка
    string *res = new string[*len_res]; // Результирующий массив
    int ii = 0;
    // Заполняенм результирующий список
    for (unsigned short int i = 0; i < len_st; i += 1){
        if (st[i] == delim){
            st_small = st.substr(past_ind, i - past_ind); 
            if (size(st_small) != 0){
                // Если строка не пустая
                res[ii] = st_small;
                ii += 1;
            }
            past_ind = i + 1;
        }
    }
    // Проверка того что осталось после цикла
    st_small = st.substr(past_ind, len_st); 
    if (size(st_small) != 0){
        res[*len_res - 1] = st_small;
    }
    
    return res;
}
