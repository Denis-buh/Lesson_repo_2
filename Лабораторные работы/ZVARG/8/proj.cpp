



#include <iostream>
#include <iomanip>
#include <string>

#include "proj2.cpp"

using namespace std; 


struct Pizzeria{
private:
    // ������ �������
    Order* order_arr = nullptr; 
    // ������ ������� �������
    int cout_order = 0; 
    // ������� �����
    Order maid_order(){
        string name; // �������� ����
        while(true){
            cout << "������� �������� ����: ";
            getline(cin, name);
            if (size(name) != 0) {break;}
            cout << "�������� ���� �� ����� ���� ������\n";
        }
        system("cls");
        Order new_order(name); 
        // ��������� ������ � ���
        new_order.append_order();
        new_order.set_discount();
        return new_order; 
    }

public:
    // ��������� ���
    void append_order(){
        Order new_order = this->maid_order(); // �������� ������ ������

        // ������� ����� ������ � ������
        int new_cout_order = cout_order + 1;
        Order* new_order_arr = new Order[new_cout_order];
        // ��������� ������ �� ������� ������� � �����
        for (int i = 0; i < this->cout_order; i += 1){
            new_order_arr[i] = order_arr[i];
        }
        new_order_arr[cout_order] = new_order;
        // ������� ������ ������
        delete []this->order_arr;
        // ��������� �� ����� ������
        this->order_arr = new_order_arr;
        this->cout_order = new_cout_order;
        cout << "������ �������\n";
    }
    // ���������� �� ������ ����
    void sort(){
        if (this->cout_order == 0){
            // ���� ���������� �� ���� �������
            cout << "��� �� ����������� ���������� �� ����� ������� ������\n"; 
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }

        for (int i = 0; i < this->cout_order - 1; i += 1){
            // ������� � ����� ������������ �������
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
        cout << "���������� �� ������ ��������� �������!\n";
    }
    // ������� ���������� � �������
    void print(){
        if (this->cout_order == 0){
            // ���� ���������� �� ���� �������
            cout << "��� �� ������� ���������� �� ����� ������� ������\n"; 
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }
        for (int i = 0; i < this->cout_order; i += 1){
            this->order_arr[i].print();
        }
    }
    // ���������� � ����� ������� ������
    void inform_max_order(){
        if (this->cout_order == 0){
            // ���� ���������� �� ���� �������
            cout << "��� �� ������� ���������� � ����� ������� ������, �� ����� ������� ������\n"; 
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }

        int ing_max_itm = 0;
        for (int i = 1; i < this->cout_order; i += 1){
            if (this->order_arr[i].get_cost() > this->order_arr[ing_max_itm].get_cost()) {ing_max_itm = i;}
        }
        cout << "���������� ������������ � ����� ������� ������: " << size(this->order_arr[ing_max_itm].get_arr_position()) << endl;
    }
    // ���� ���������� ������� � �������� �������������
    void found_order(){
        if (this->cout_order == 0){
            // ���� ���������� �� ���� �������
            cout << "��� �� ������� ���������� � ������� � �������� ������������� �� ����� ������� ������\n"; 
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }

        string name_position;
        cout << "������� ������������ �������: ";
        getline(cin, name_position);
        int cout_order_with_pos = 0;
        for (int i = 0; i < this->cout_order; i += 1){
            if (this->order_arr[i].position_in_order(name_position)){
                cout_order_with_pos += 1;
            }
        }
        cout << "���������� ������� � �������� �������������: " << cout_order_with_pos << endl;
    }
    // ������� ������������ ������
    ~Pizzeria(){
        // ������� ������������ ������
        delete []this->order_arr;
    }
};



int main(){
    system("chcp 1251");
    // �������������� ������ ����������� ��������
    Pizzeria my_pizzeria;
    while (true){
        // ������ �������
        system("cls");
        cout << "��������� ��������:\n";
        cout << "\t1) ���������� ������\n";
        cout << "\t2) ����� ���������� � �������\n";
        cout << "\t3) ���������� ������\n";
        cout << "\t4) ���������� ���������� ������������ � ����� ������� ������\n";
        cout << "\t5) ���������� ������� ������� �������� ������������, ��������� � ����������\n";
        cout << "\t6) ����� �� ���������\n";
        cout << "��� ���������� ������� ������� ����� �������: ";

        int number_command;

        try{
            string temp_action;
            getline(cin, temp_action);
            // ��������� �� ������ � �����
            number_command = stoi(temp_action); 
            // ��� ������������ ����� ��� �� ���� �����
        }
        catch (...) {
            // ��� ������������ �� ����� ��� �� ���� �����
            cout << "������ ������ ��� � ��� �����.\n";
            system("pause");
            continue;
        }

        switch (number_command){
            case 1: // ���������� ������
                system("cls");
                my_pizzeria.append_order();
                break;
            case 2: // ����� ���������� � �������
                system("cls");
                my_pizzeria.print();
                break;
            case 3: // ���������� ������
                system("cls");
                my_pizzeria.sort();
                break;
            case 4: // ���������� ���������� ������������ � ����� ������� ������
                system("cls");
                my_pizzeria.inform_max_order();
                break;
            case 5: // ���������� ������� ������� �������� ������������, ��������� � ����������
                system("cls");
                my_pizzeria.found_order();
                break;
            case 6: // ����� �� ���������
                return 0; 

            default:
                // ��� ��� ��� ��������� ������� ���� ������������� �� �������� ����������� ��������
                cout << "���� ������� �� ������ ��������\n";
                break;
        }
        system("pause");
    
    }
}
