



#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std; 

//#define DEBUG 

// Приводит дробь к форматному виду
string format_float(float number){
    int num1 = number; // Целая часть числа
    float num2 = number - num1; // Матисса числа
    string res = to_string(num1);
    if (num2 > 0.0001){
        res += ".";
        res += to_string(num2).substr(2, 2);
    }
    return res;
}



// Позиция в меню (позиция пример: пиво 1 шт, 103.9 р/ш)
struct Position{
protected:
    string name; // Название позиции
    float cost_position; // Стоимость позиции за 1 штука
    int cout_position; // Количество позиций
public:
    // Конструктор класса position без инициализации
    Position(){}
    // Конструктор класса position для инициализации
    Position(string name, float cost_position, int cout_position){
        this->name = name;
        this->cost_position = cost_position;
        this->cout_position = cout_position;
    }
    // Конструктор класса position для копирования
    Position(Position& pos){
        cout << "Position(Position& pos)\n";
        this->name = pos.name;
        this->cost_position = pos.cost_position;
        this->cout_position = pos.cout_position;
    }
    // Оператор присваивания (случай копирования)
    void operator=(Position const &obj){
        this->name = obj.name;
        this->cost_position = obj.cost_position;
        this->cout_position = obj.cout_position;
    }


    // Гетеры //
    // Название позиции
    string get_name() {return this->name;} 
    // Стоимость позиции за 1 штука
    float get_cost_position() {return this->cost_position;}
    // Количество позиций
    int get_cout_position() {return this->cout_position;} 

    // Расчитываем стоимость позиции
    float cost() {return this->cost_position * float(this->cout_position);}

    // Выводит информацию о позиции заказа
    void print(){
        cout.fill(' '); // Установка символа заполнителя
        cout.setf(ios::left); // Равнение с лева
        // выводим инфу по позиции

        cout.width(35); // Задание ширины поля
        cout.precision(30); // Масимальное значение для поля
        cout << this->name;

        cout.width(35); // Задание ширины поля
        cout.precision(30); // Масимальное значение для поля
        cout << (format_float(this->cost_position) + " р/шт");


        cout.width(35); // Задание ширины поля
        cout.precision(30); // Масимальное значение для поля
        cout << (to_string(this->cout_position) + " шт");
        
        cout << endl; 
    }
};



// Структура заказа (чек)
struct Order{
private:
    // Создание новой позиции
    Position made_position(int number = 0){
        if (number){
            cout << "Введите параметры для позиции чека по № " << number << "\n";
        }
        string name; // Имя позиции
        // Запрашиваем имя позиции
        while (true){
            cout << "Введите название позиции: ";
            getline(cin, name);
            if (size(name) != 0) {break;}
            cout << "Имя позиции не может быть пустой\n";
        }

        float cost_position; // Cтоимость позиции
        // Запрашиваем стоимость позиции
        while(true){
            try{
                string temp;
                cout << "Введите стоимость позиции: ";
                getline(cin, temp);
                float res = stof(temp); 
                if (res < 0){
                    cout << "Цена не может быть отрицательной\n";
                    continue;
                }
                cost_position = res; 
                break;
            }
            catch (...)  {cout << "Строка пустая или в ней содержатся буквы.\n";}
        }

            
        // Количество штук позиции
        int cout_position; // Количество штук позиции
        while(true){
            try{
                string temp;
                cout << "Введите количество штук позиции: ";
                getline(cin, temp);
                int res = stoi(temp); 
                if (res < 0){
                    cout << "Количество не может быть отрицательным\n";
                    continue;
                }
                cout_position = res; 
                break;
            }
            catch (...)  {cout << "Строка пустая или в ней содержатся буквы.\n";}
        }

        cout << "Для позиции чека с № " << number << "\nВы ввели следующие данные:\n";
        cout << "\tИмя позиции: " << name << "\n";
        cout << "\tCтоимость позиции: " << cost_position << "\n";
        cout << "\tКоличество штук позиции " << cout_position << "\n";
        cout << "Согласы ли вы создать позицию параметры команды (Y - да/N - нет)";
        int flag = system("CHOICE");
        cout << endl; 
        system("cls"); // Чистим консоль 
        if (flag == 1)  {return Position(name, cost_position, cout_position);}
        made_position(number);
    }

protected:
	string name; // Название чека
	float cost = 0; // стоимость чека
    int discount = 0; // уценка
    vector<Position*> arr_position; // Список позиций в заказе
public:
    // Конструктор класса order без инициализации
    Order(){};
    // Конструктор класса position для инициализации
    Order(string name) {
        this->name = name;
	    this->cost = 0; // стоимость чека
        this->discount = 0; // уценка
    }
    // Конструктор класса position для копирования
    Order(Order& ord){
        cout << "Order(Order& ord)\n";
        this->name = ord.name;
        this->cost = ord.cost ;
        this->discount = ord.discount;
        for (int i = 0; i < ord.arr_position.size(); i += 1){
            Position* new_item = new Position;
            *new_item = *ord.arr_position[i]; 
            this->arr_position.emplace_back(new_item); 
        }
    }
    // Оператор присваивания (случай копирования)
    void operator=(Order const &obj){
        this->name = obj.name;
        this->cost = obj.cost;
        this->discount = obj.discount;
        for (int i = 0; i < obj.arr_position.size(); i += 1){
            Position* new_item = new Position;
            *new_item = *obj.arr_position[i]; 
            this->arr_position.emplace_back(new_item); 
        }
    }

    // Гетеры //
    // Название чека
    string get_name() {return this->name;} 
    // Стоимость чека
	float get_cost() {return this->cost;} 
    // Уценка
    int get_discount() {return this->discount;} 
    // Список позиций в заказе
    vector<Position*> get_arr_position() {return this->arr_position;}

    // Чекеры // 
    bool position_in_order(string name_position){
        for (Position* i : this->arr_position){
            if (i->get_name() == name_position){
                return true;
            }
        }
        return false;
    }

    // Добавление позиций меню в чек
    void append_order(){
        int len_position; // Количество позиций в чеке
        // Получаем количество позиций в чеке
        while(true){
            try{
                string temp; // Временная переменная 
                cout << "Введите количество позиций в чеке: ";
                getline(cin, temp);
                // Переводим из строки в дробь
                int res = stof(temp); 
                if (res < 0){
                    cout << "Количество повторов не может быть отрицательным\n";
                    continue;
                }
                len_position = res; 
                // Если пользователь сделал как надо (в противном случае исключение)
                break;
                }
                // Если словили исключение 
                catch (...)  {cout << "Строка пустая или в ней содержатся буквы.\n";}
            }
        system("cls"); // Чистим консоль 
        // Добавляем позиции
        for (int i = 1; i < len_position + 1; i += 1){
            // Создаем новый элемент массива
            Position* new_item = new Position;
            *new_item = this->made_position(i); 
            // Добавляем новый елемент в массив
            this->arr_position.emplace_back(new_item); 
            // К общей стоимости чека добавляем стоимость нового пункта
            this->cost += new_item->cost();
        }

    }

    // Определяем уценку по чеку
    void set_discount(){
        if (this->cost > 5000) {this->discount = 5;}
        else if (this->cost > 2000) {this->discount = 2;}
    }

    // Выводим информацию по чеку
    void print(){
        cout.fill(' '); // Установка символа заполнителя
        cout.setf(ios::left); // Равнение с лева

        cout << "Название чека: " << this->name << "\n";
        cout << "Позиции чека:\n";

        // Шапка
        cout.width(35); // Задание ширины поля
        cout << "Название позиции";

        cout.width(35); // Задание ширины поля
        cout << "Стоимость позиции (за штука)";

        cout.width(35); // Задание ширины поля
        cout << "Количество позиций";
        cout << "\n";

        // выводим инфу по позиции
        for (int i = 0; i < this->arr_position.size(); i += 1){
            this->arr_position[i]->print();
        }

        cout << "Общая стоимость чека: " << format_float(this->cost) << " p\n"; 
        cout << "Уценка чека: " << this->discount << "%\n";
        cout << endl; 
    }


    // Деконструктор класса position для удаления динамических елементов
    ~Order(){
        for (int i = 0; i < this->arr_position.size(); i += 1){
            delete this->arr_position[i];
        }
    }


};






#ifdef DEBUG 
int main(){
    system("chcp 1251");
    Order ord; 
    {
        Order new_order("My_order");

        new_order.append_order();
        new_order.print();
        ord = new_order;
    }
    ord.print();

    /*
    Position posit;

    {
        Position new_pos("Test", 23.6, 9);
        cout << "cost position = " << new_pos.cost() << "\n";
        cout << "Print inform:\n";
        new_pos.print();
        posit = new_pos;
    }

    cout << endl;

    cout << "cost position = " << posit.cost() << "\n";
    cout << "Print inform:\n";
    posit.print();
    */



    system("pause");
    return 0; 
}
#endif