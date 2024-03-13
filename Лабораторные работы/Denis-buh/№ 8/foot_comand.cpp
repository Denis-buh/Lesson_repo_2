



/*
� ����������� ������� ������ ����������� ��������� ��������:
    �������� ������� ���������� �� �������, 
    �����, 
    ���������� ��������� �����.
*/


#include <iostream>
#include <iomanip> // ��� ���������� ������


using namespace std; 


struct Football_comand{
private:
    // �������� ������� ���������� �� �������
    string name_command; 
    // ����� �������
    string city;
    // ���������� ��������� ����� 
    float points;

public:
    // �������������� ������ ���������
    Football_comand(string name_command, string city, float points){
        // this - ������ ��������� Football_comand
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

    // ������
    string get_name_command(){return this->name_command;}
    string get_city(){return this->city;}
    float get_points(){return this->points;}

    // ��������� �����
    void fprint(){
        cout << setw(20) << this->name_command << "|";
        cout << setw(20)  << this->city << "|";
        cout << setw(20)  << this->points << "|";
        cout << "\n";
    }


};
