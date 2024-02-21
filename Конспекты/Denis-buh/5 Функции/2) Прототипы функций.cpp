



#include <iostream>
using namespace std;



// В прототипе функции должно быть столько же аргументов и такойже возвращаемый тип данных как реализованной далее функции
// В прототипе можно не указывать название атрибута

double my_fun(double[], const int); // Это прототип функции. Обьявлять до main. Не работает без реализации основной функции
// double my_fun(double arr[], const int LEN_arr);


int main(){
    system("chcp 1251");

    const int LEN = 10;
    double arr[LEN] = {1.9, 2.6, 34.45, 5, 6, 6, 7, 8, 9, 43.3};
    double res = my_fun(arr, LEN);
    cout << "Результат сумирования: " << res << "\n";
    system("pause");
}

/*
Коментарий к функции
*/
double my_fun(double arr[], const int LEN_arr){
    double sum = 0;

    for (int i = 0; i < LEN_arr; i += 1){
        sum += arr[i];
    }
    return sum;

}