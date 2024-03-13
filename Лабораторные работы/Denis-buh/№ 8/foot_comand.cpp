



/*
В структурном шаблоне должны содержаться следующие сведения:
    название команды первенства по футболу, 
    город, 
    количество набранных очков.
*/


#include <iostream>

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
        this->name_command = name_command;
        this->city = city;
        this->points = points; 
    }

    Football_comand(){
    }
};
