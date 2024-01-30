



#include <iostream>
using namespace std;


int main()
{
    system("chcp 65001");

    // Дробные числа
    // float - 4 байт (Значения: одинарная точность)
    float number_flt = 23.6;  // Так создается переменная с дробным численым типом данных
    cout << number_flt << "\n";

    // double - 8 байт (Значения: двойная точность)
    double number_dbl = 45.9;  // Так создается переменная с дробным численым типом данных
    cout << number_dbl << "\n";

    // double - 8 байт (Значения: двойная точность)
    long double number_dbl2 = 45.9;  // Так создается переменная с дробным численым типом данных
    cout << number_dbl2 << "\n";

    // Обрубание дробной части у числа
    int number_in_int = 38765.456; 
    // На горячую: (int)number_dbl
    cout << number_in_int << "\n";
    
}