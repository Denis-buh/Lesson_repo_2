/*
�������. 
    - ���������� ����������� ������ � ������������ � �������������� ���������.
    - ������� ������������ ������ ���� �������������� ������������ ������� �� 10 ���������.
    
    - ����������� ���� ������ ��� ��������� ������� � ����������. ��� ����� 
    -    ������ ���������� �������� �� ������������.

    -���������� ����� ���������� ������ �� ����� � ���� �����������������
    -    �������. ������� ������� ������ ��������������� ����� ������� � ����� ������������.

    ������������ ��������� ������������ �� ������ ����, �������������
        �������� �������� �����: ���� ������, ����� ���� ����������, ����� �� ���������. 
        ��������� ������ ���� ���������� � ������������ ���������.

������������ ��������.
    - �������� ������������ ����� ������������� �������� �� ������������� 
    -     ��������� �������������� ��������: 
    -     ����� ������ ������ ���� � ��������� �� 1 �� 12, 
    -     ��������� ������ �� ����� ���� �������������, 
    -     ������� �������� �� ��������� 100 ��� � ��. 
    - � ������ ��������� �����, ��������� ������ ��������� ������ �� ���� � ����������� ���.

���� ������������ � �������������� ������������ ������ ��� ������� � ������� � ��������� switch. 
����� ��������� switch ������ ��������������� ������� ������� ����. 
������������� ��������� ����� ��������� ������ ������ ����.
��� ������ ������ �������� ������������ ��������������.
��� ��������� ������ ������ ���� ��������������� � ��������� � 
    ������� ��� ���������� ������������ ���� (��������, � ���� �������). 
��� ���������� ������ ��������� ����������� ������ ����������.
�� ������ � ������ ��������� ������������ � ������, ���� ������� ������ � ������ �� ����������.

������� 2: 
-� ����������� ������� ������ ����������� ��������� ��������:
-    �������� ������� ���������� �� �������, 
-    �����, 
-    ���������� ��������� �����.
-������������� ������������ ������ � ������� �������� ��������� �����. 
-�������� � ������ �������� ��� �� ����� �������. 
����������, ����� ����� ��� ������ � ����� ������. 
������� �� ����� ��������� ������, ��������� ������ �����, ��� ��������� ��������� �������
*/

#include <iostream>
#include <iomanip> // ��� ���������� ������
#include <string>
// ��� ��������� ���������� �������
#include "foot_comand.cpp"

using namespace std; 

// ��������� � ����������� ���������
struct Commands_footbal{
private:
    Football_comand* arr_command = nullptr; // ������ ���������� ������
    int len_mass_command; // ������ ������� 
    bool state_information = false; // ������ ���������� (�� ����������)

    // ���������� ��� �������� ���������� ������
    Football_comand made_command(int nimber){
        while (true){
            cout << "������� ������ ��� ������� ��� �" << nimber << "\n";
            string name_command; // �������� ������� �� �������
            while(true){
                cout << "������� �������� �������: ";
                getline(cin, name_command);
                // ���� ������ �� ������
                if (size(name_command) != 0)  {break;}
                cout << "�����������. ������ ������.\n";
            }

            string city; // ����� �������
            while(true){
                cout << "������� ����� �������: ";
                getline(cin, city);
                // ���� ������ �� ������
                if (size(city) != 0)  {break;}
                cout << "�����������. ������ ������.\n";
            }

            float points; // ���������� ��������� ����� 
            while(true){
                try{
                    string temp_points; // ��������� ���������� 
                    cout << "������� ���������� ��������� ����� �������: ";
                    getline(cin, temp_points);
                    // ��������� �� ������ � �����
                    points = stof(temp_points); 
                    // ���� ������������ ������ ��� ���� (� ��������� ������ ����������)
                    break;
                }
                // ���� ������� ���������� 
                catch (...)  {cout << "�����������. ������ ������ ��� � ��� ����� (� ���� �����).\n";}
            }
            cout << "��� ������� � � " << nimber << "\n�� ����� ��������� ������:\n";
            cout << "\t�������� �������: " << name_command << "\n";
            cout << "\t����� �������: " << city << "\n";
            cout << "\t���������� ��������� ����� " << points << "\n";
            cout << "������� �� �� ������������ ��������� ������� (Y - ��/N - ���)";
            int flag = system("CHOICE");
            system("cls"); // ������ ������� 
            // ���� ������������ �� ������� ������������ ���������
            if (flag == 2)  {return Football_comand(name_command, city, points);}
        }
    }

public:
    // �������������� ���������
    Commands_footbal(int len_mass_command){
        // ������������� ������ �������
        this->len_mass_command = len_mass_command;
        // ������� ������
        arr_command = new Football_comand[len_mass_command];
    }

    // ����������� ��������� (��� ����� ����� ������� ��������)
    ~Commands_footbal(){
        // ������� ������������ �����
        delete []arr_command;
        arr_command = nullptr; 
    }

    // ���������� ����������� ������ (��������� ���� ������)
    void registration(){
        for (int i = 0; i < len_mass_command; i += 1){
            this->arr_command[i] =  this->made_command(i + 1); 
        }
        // �������� ������ ��� ���������� �������
        this->state_information = true; 
    } 

    bool get_state_information()  {return this->state_information;}

    // ������ ������� ��������� ����� ������
    void sort(){
        if (not this->state_information){
            // ���� ���������� �� ���� �������
            cout << "��� �� ����������� ���������� �� ����� ������� ������\n"; 
            system("pause");
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }

        for(int i = 0; i < len_mass_command - 1; i += 1){
            // ������������� ��� ������ ������� ������������
            int index_max_irem = i; 
            for (int ii = i + 1; ii < len_mass_command; ii += 1){
                if (arr_command[ii].get_points() > arr_command[index_max_irem].get_points())  {index_max_irem = ii;}
            }
            // ���� ������ �� ����������
            if (index_max_irem == i) {continue;}
            // ���� ��������� ����
            Football_comand temp = Football_comand(arr_command[i]);
            arr_command[i] = arr_command[index_max_irem];
            arr_command[index_max_irem] = temp;
        }
        cout << "���������� ���������\n";
        system("pause");
    }

    // ������ ������� ������ ������ �� ��������� ������
    /**
     * 
    */
    void print(int start_with = 0){
        if (not this->state_information){
            // ���� ���������� �� ���� �������
            cout << "��� �� ������� ���������� �� ����� ������� ������\n"; 
            system("pause");
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }
        // ���� ��� �� ������ ���� ������� 
        // ������������� ������������ �� ������ ����
        cout.setf(ios::left);
        cout << setw(20) << "�������� �������" << "|";
        cout << setw(20)  << "����� �������" << "|";
        cout << setw(20)  << "���� �������" << "|";
        cout << "\n"; 
        for (int i = start_with; i < len_mass_command; i += 1){
            arr_command[i].fprint();
        }
        system("pause");
    }
    // ��������� ����� ������� � ������
    void append_command(){
        // ���� �� ����� �� ���� ����� ����������
        if (not this->state_information){
            // ���� ���������� �� ���� �������
            cout << "��� �� �������� ����� ������� ���������� ��������� ���������� �� ������� " << this->len_mass_command << " ��������\n"; 
            system("pause");
            // ������� ������� (��� ��� ������ ��� ������)
            return; 
        }

        // ������� ����� �������
        Football_comand command = this->made_command(this->len_mass_command + 1);
        // ����� ������ ������
        int new_len_mass_command = this->len_mass_command + 1;
        // ����� �����
        Football_comand* new_arr_command = new Football_comand[new_len_mass_command];
        // ��������� ���������� � ����� �����
        for (int i = 0; i < this->len_mass_command; i += 1){
            new_arr_command[i] = arr_command[i];
        };
        // ��������� ����� ������� � ����� ������
        new_arr_command[len_mass_command] = command;
        // ������� ������ ������
        delete []arr_command;
        // ��������� �� ����� ����� � ����� ������
        arr_command = new_arr_command;
        len_mass_command = new_len_mass_command;
        // ��������� ������ ������
        this->sort();
        int position; // ������� ����� ���������� �������
        // ���������� ������� ����� �������
        for (int i = 0; i < this->len_mass_command; i += 1){
            if (arr_command[i].get_name_command() == command.get_name_command())  {position = i;}
        }
        cout << "����� ������ ������\n";
        this->print();
        cout << "������� ����� ������� � ����� ������ = " << position + 1 << "\n";
        cout << "������� ������� ������� ������ ����� ��� ��������� �������� �������\n";
        this->print(position + 1);
    }
};


int main(){
    // ���������� �����������
    system("chcp 1251");
    // ������� ���������-��������� ��� �������� � ��������� 10 ���������� ������
    Commands_footbal football_commands = Commands_footbal(2/*10*/);

    while(true){
        system("cls");
        int action; // �������� 
        cout << "��������� ��������:\n";
        cout << "\t1) ���� ������\n";
        cout << "\t2) ����� ����������\n";
        cout << "\t3) ���������� ������\n";
        cout << "\t4) ���������� �������\n";
        cout << "\t5) ����� �� ���������\n";
        cout << "��� ���������� ������� ������� ����� �������: ";
        try{
            string temp_action;
            getline(cin, temp_action);
            // ��������� �� ������ � �����
            action = stoi(temp_action); 
            // ��� ������������ ����� ��� �� ���� �����
        }
        catch (...) {
            // ��� ������������ �� ����� ��� �� ���� �����
            cout << "�����������. ������ ������ ��� � ��� ����� (� ���� �����).\n";
            system("pause");
            continue;
        }
        switch (action){
            case 1: // ���� ������
                system("cls");
                football_commands.registration();
                break;

            case 2: // ����� ����������
                system("cls");
                football_commands.print();
                break;

            case 3: // ���������� ������
                system("cls");
                football_commands.sort();
                break;
            case 4: // ���������� �������
                system("cls");
                football_commands.append_command();
                break;
            case 5: // ����� �� ���������
                return 0; 

            default:
                // ��� ��� ��� ��������� ������� ���� ������������� �� �������� ����������� ��������
                cout << "���� ������� �� ������ ��������\n";
                system("pause");
                break;

        }
    }
}