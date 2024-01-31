



#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251");

    /*¬иды операторов:
        1) ”нарные (нужен только один операнд)
        2) Ѕинарные (нужно два операнда)
        3) “ернарные (нужно три операнда)
    */

    bool flag_1 = false;
    bool flag_2 = true;

    char sim = 'A';
    string name = "Alex";

    float number_float_1 = 15.6;
    float number_float_2 = 150.68;

    // Ѕинарные операторы
    // ќператоры сравнени€
    // < - меньше
    bool res = number_float_1 < number_float_2;
    cout << "< " << res <<"\n";

    // > - больше
    res = number_float_1 > number_float_2;
    cout << "> " << res <<"\n";

    // <= - меньше или равно
    res = number_float_1 <= number_float_2;
    cout << "<= " << res <<"\n";
    
    // >= больше или равно
    res = number_float_1 >= number_float_2;
    cout << ">= " << res <<"\n";


    // ќператоры равенства
    // == - равно
    res = number_float_1 == number_float_2;
    cout << "== " << res <<"\n";

    // != - не равно
    res = number_float_1 != number_float_2;
    cout << "!= " << res <<"\n";

    // Ћогические операторы
    // && - и (лог умножение)
    // and - и (лог умножение)
    res = flag_1 && flag_2;
    cout << "&& " << res <<"\n";
    res = flag_1 and flag_2;
    cout << "and " << res <<"\n";

    // || - или (лог сложение)
    // or - или (лог сложение)
    res = flag_1 || flag_2;
    cout << "|| " << res <<"\n";
    res = flag_1 or flag_2;
    cout << "or " << res <<"\n";

    // ! - не (лог отрицание\инверси€) 
    // not  - не (лог отрицание\инверси€) 
    res = (! flag_1);
    cout << "! " << res <<"\n";
    res = (not flag_1);
    cout << "not " << res <<"\n";

    // “ернарные операторы
    /*
    (логическое выражение)? (действие если выражение правдиво): (действие если выражение ложно)
    */
    (number_float_2 >= number_float_1)? (cout << "number_float_2 >= number_float_1\n"): (cout << "number_float_2 < number_float_1\n");
    system("pause");

}