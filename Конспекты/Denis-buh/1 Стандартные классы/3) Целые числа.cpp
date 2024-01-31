



#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251"); 

    // Целые числа
    //int - 4 байт (Значения: [-2147483648; 2147483647])
    int number_int = 34; // Так создается переменная с целочисленым типом данных
    cout << number_int << "\n";
    //unsigned int - 4 байт (Значения: [ 0; 4294967295]). unsigned int = unsigned
    unsigned int number_int_pos = 34; // Так создается переменная с целочисленым типом данных
    cout << number_int_pos << "\n";

    //short - 2 байта (Значения: [-322768; 322767]). short = short int = signed short int = signed short.
    short number_shr = 56; // Так создается переменная с целочисленым типом данных
    cout << number_shr << "\n";
    //unsigned short - 2 байта (Значения: [0; 65535]). unsigned short = unsigned short int
    unsigned short number_shr_pos = 56; // Так создается переменная с целочисленым типом данных
    cout << number_shr_pos << "\n";

    //long - 4 байт (Значения: [?2147483648; 2147483647]). long = long int = signed long int = signed long. Утарело
    long number_lng = 98; // Так создается переменная с целочисленым типом данных
    cout << number_lng << "\n";
    //unsigned long - 4 байт (Значения: [0; 4294967295]). unsigned long = unsigned long int. Утарело
    unsigned long number_lng_pos = 98; // Так создается переменная с целочисленым типом данных
    cout << number_lng_pos << "\n";

    //long long - 8 байт (Значения: [?9223372036854775808 до 9223372036854775807]). long long = long long int = signed long long int = signed long long
    long long number_lng_lng = 98; // Так создается переменная с целочисленым типом данных
    cout << number_lng << "\n";
    //unsigned long long - 8 байт (Значения: [0; 18446744073709551615]). unsigned long long = unsigned long long int
    unsigned long long number_lng_lng_pos = 98; // Так создается переменная с целочисленым типом данных
    cout << number_lng_lng_pos << "\n";
    system("pause");
}