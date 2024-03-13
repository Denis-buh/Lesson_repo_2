



/*
В структурном шаблоне должны содержаться следующие сведения:
    название команды первенства по футболу, 
    город, 
    количество набранных очков.
*/


#include <iostream>
#include <iomanip> // Для форматного вывода


using namespace std; 


struct Football_comand{
private:
    // название команды первенства по футболу
    string name_command; 
    // город команды
    string city;
    // количество набранных очков 
    float points;

public:
    // Инициализируем объект структуры
    Football_comand(string name_command, string city, float points){
        // this - обьект структуры Football_comand
        this->name_command =  string(name_command);
        this->city =  string(city);
        this->points =  float(points); 
    }
    Football_comand(){
    }
    Football_comand(Football_comand& obj){
        this->name_command =  string(obj.name_command);
        this->city =  string(obj.city);
        this->points =  float(obj.points); 
    }

    // Гетеры
    string get_name_command(){return this->name_command;}
    string get_city(){return this->city;}
    float get_points(){return this->points;}

    // Форматный вывод
    void fprint(){
        cout << setw(20) << this->name_command << "|";
        cout << setw(20)  << this->city << "|";
        cout << setw(20)  << this->points << "|";
        cout << "\n";
    }


};
