



#include <iostream>
using namespace std;


/**
—умирует полученный масив
 * @tparam arrey 
 * @param arr  масив значений
 * @param LEN_arr  размер масива
 * @return arrey просумированный масив
 */
template <typename arrey>
arrey sum(arrey *arr, const int LEN_arr){
    // *arr - указатель дл€ работы с массивом (так как без указател€ получем 1 элемент масива)
    arrey res = 0;
    for (int i = 0; i < LEN_arr; i += 1){
        res += arr[i];
    }
    return res;
}


void my_fun(int *number, int *number_1){// Ќе использовать из-за возможных непон€ток в коде. ƒанный метод позвол€ет возвращать и мен€ть сразу несколько переменных из функции
    // *number * необходима дл€ того чтобы получить адрес 
    int res = *number  + 1; // –азъименовываем указатель (получам значение) и прибавл€ем к нему 1
    *number = res; // ћен€ем значение в области озу (на область ссылаютс€ *number и number)
    *number_1 = 20; 
}


int main(){
    system("chcp 1251");

    const int LEN_my_arr = 5;
    double my_arr[LEN_my_arr] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double sum_arr = sum(my_arr, LEN_my_arr);

    cout << sum_arr << "\n";

    int number = 10, number_1 = 0;
    cout << "number = " << number << "\t" << "number_1 = " << number_1 << "\n";
    my_fun(&number, &number_1); // Ќеобходимо использовать аперсант чтобы получить адрес из оперы
    cout << "number = " << number << "\t" << "number_1 = " << number_1 << "\n";
    system("pause");
}