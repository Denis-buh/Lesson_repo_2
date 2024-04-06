



#include <iostream>
#include <iomanip>
#include <string>

#include "proj2.cpp"

using namespace std; 


struct Pizzeria{
private:
    // Массив заказов
    Order* order_arr = nullptr; 
    // Размер массива заказов
    int cout_order = 0; 
    // Создаем заказ
    Order maid_order(){
        string name; // Название чека
        while(true){
            cout << "Введите название чека: ";
            getline(cin, name);
            if (size(name) != 0) {break;}
            cout << "Название чека не может быть пустым\n";
        }
        system("cls");
        Order new_order(name); 
        // Добавляем заказы в чек
        new_order.append_order();
        new_order.set_discount();
        return new_order; 
    }


public:
    // Добавляем чек
    void append_order(){
        Order new_order = this->maid_order(); // Создание нового заказа

        // Создаем новый массив и размер
        int new_cout_order = cout_order + 1;
        Order* new_order_arr = new Order[new_cout_order];
        // Переводим данные из старого массива в новый
        for (int i = 0; i < this->cout_order; i += 1){
            new_order_arr[i] = order_arr[i];
        }
        new_order_arr[cout_order] = new_order;
        // Удаляем старый массив
        delete []this->order_arr;
        // Ссылаемся на новые данные
        this->order_arr = new_order_arr;
        this->cout_order = new_cout_order;
    }

    // Сортировка по скидке чека
    void sort(){
        for (int i = 0; i < this->cout_order - 1; i += 1){
            // Елемент с самой максимальной скидкой
            int max_discons = i; 
            for (int ii = i + 1; ii < this->cout_order; ii += 1){
                if (this->order_arr[max_discons].get_discount() << this->order_arr[ii].get_discount()){
                    max_discons == ii;
                }
            }
            if (max_discons != i){
                Order temp = this->order_arr[i];
                this->order_arr[i] = this->order_arr[max_discons];
                this->order_arr[max_discons] = temp;
            }
        }
    }

    // Выводим инофрмацию о заказах
    void print(){
        this->sort();
        for (int i = 0; i < this->cout_order; i += 1){
            this->order_arr[i].print();
        }
    }

    void inform_max_order(){
        int ing_max_itm = 0;
        for (int i = 1; i < this->cout_order; i += 1){
            if (this->order_arr[i].get_cost() > this->order_arr[ing_max_itm].get_cost()) {ing_max_itm = i;}
        }
        cout << "Количество наименований в самом дорогом заказе" << size(this->order_arr[ing_max_itm].get_arr_position()) << endl;
        system("pause");
        system("cls");

    }

    void found_order(){
        string name_position;
        getline(cin, name_position);
        int cout_order_with_pos = 0;
        for (int i = 0; i < this->cout_order; i += 1){
            if (this->order_arr[i].position_in_order(name_position)){
                cout_order_with_pos += 1;
            }
        }

        cout << "Количество заказов с введеным наименованием: " << cout_order_with_pos << endl;

        system("pause");
        system("cls");

    }
    

    ~Pizzeria(){
        delete []this->order_arr;
    }

};






int main(){
    system("chcp 1251");
    Pizzeria my_pizzeria;
    my_pizzeria.append_order();
    //my_pizzeria.append_order();
    //my_pizzeria.append_order();
    my_pizzeria.inform_max_order();
    my_pizzeria.found_order();
    my_pizzeria.print();

    system("pause");
    return 0; 
}