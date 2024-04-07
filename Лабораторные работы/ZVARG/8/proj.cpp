



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
        cout << "Данные введены\n";
    }
    // Сортировка по скидке чека
    void sort(){
        if (this->cout_order == 0){
            // Если информация не была указана
            cout << "Что бы соритровать информацию ее нужно сначала ввести\n"; 
            // Убиваем функцию (так как дальше нет смысла)
            return; 
        }

        for (int i = 0; i < this->cout_order - 1; i += 1){
            // Елемент с самой максимальной скидкой
            int max_discons = i; 
            for (int ii = i + 1; ii < this->cout_order; ii += 1){
                if (this->order_arr[max_discons].get_discount() < this->order_arr[ii].get_discount()){
                    max_discons = ii;
                }
            }
            if (max_discons != i){
                Order temp = this->order_arr[i];
                this->order_arr[i] = this->order_arr[max_discons];
                this->order_arr[max_discons] = temp;
            }
        }
        cout << "Сортировка по скидке выполнена успешно!\n";
    }
    // Выводим инофрмацию о заказах
    void print(){
        if (this->cout_order == 0){
            // Если информация не была указана
            cout << "Что бы вывести информацию ее нужно сначала ввести\n"; 
            // Убиваем функцию (так как дальше нет смысла)
            return; 
        }
        for (int i = 0; i < this->cout_order; i += 1){
            this->order_arr[i].print();
        }
    }
    // Инофрмация о самом дорогом заказе
    void inform_max_order(){
        if (this->cout_order == 0){
            // Если информация не была указана
            cout << "Что бы вывести информацию о самом дорогом заказе, ее нужно сначала ввести\n"; 
            // Убиваем функцию (так как дальше нет смысла)
            return; 
        }

        int ing_max_itm = 0;
        for (int i = 1; i < this->cout_order; i += 1){
            if (this->order_arr[i].get_cost() > this->order_arr[ing_max_itm].get_cost()) {ing_max_itm = i;}
        }
        cout << "Количество наименований в самом дорогом заказе: " << size(this->order_arr[ing_max_itm].get_arr_position()) << endl;
    }
    // Ищем количество заказов с введеным наименованием
    void found_order(){
        if (this->cout_order == 0){
            // Если информация не была указана
            cout << "Что бы вывести информацию о заказах с введеным наименованием ее нужно сначала ввести\n"; 
            // Убиваем функцию (так как дальше нет смысла)
            return; 
        }

        string name_position;
        cout << "Введите наименование позиции: ";
        getline(cin, name_position);
        int cout_order_with_pos = 0;
        for (int i = 0; i < this->cout_order; i += 1){
            if (this->order_arr[i].position_in_order(name_position)){
                cout_order_with_pos += 1;
            }
        }
        cout << "Количество заказов с введеным наименованием: " << cout_order_with_pos << endl;
    }
    // Очищаем динамическую память
    ~Pizzeria(){
        // Удаляем динамический массив
        delete []this->order_arr;
    }
};



int main(){
    system("chcp 1251");
    // Инициализируем объект управляющий заказами
    Pizzeria my_pizzeria;
    while (true){
        // Чистим консоль
        system("cls");
        cout << "Возможные действия:\n";
        cout << "\t1) Добавление заказа\n";
        cout << "\t2) Вывод информации о заказах\n";
        cout << "\t3) Сортировка данных\n";
        cout << "\t4) Определить количество наименований в самом дорогом заказе\n";
        cout << "\t5) Определить сколько заказов содержат наименование, введенное с клавиатуры\n";
        cout << "\t6) Выход из программы\n";
        cout << "Для выполнения команды введите номер команды: ";

        int number_command;

        try{
            string temp_action;
            getline(cin, temp_action);
            // Переводим из строки в дробь
            number_command = stoi(temp_action); 
            // Ели пользователь понял что от него хотят
        }
        catch (...) {
            // Ели пользователь не понял что от него хотят
            cout << "Строка пустая или в ней буквы.\n";
            system("pause");
            continue;
        }

        switch (number_command){
            case 1: // Добавление заказа
                system("cls");
                my_pizzeria.append_order();
                break;
            case 2: // Вывод информации о заказах
                system("cls");
                my_pizzeria.print();
                break;
            case 3: // Сортировка данных
                system("cls");
                my_pizzeria.sort();
                break;
            case 4: // Определить количество наименований в самом дорогом заказе
                system("cls");
                my_pizzeria.inform_max_order();
                break;
            case 5: // Определить сколько заказов содержат наименование, введенное с клавиатуры
                system("cls");
                my_pizzeria.found_order();
                break;
            case 6: // Выход из программы
                return 0; 

            default:
                // Так как все возможные варинты были перепробаваны то остаются невозможные варианты
                cout << "Было введено не верное значение\n";
                break;
        }
        system("pause");
    
    }
}
