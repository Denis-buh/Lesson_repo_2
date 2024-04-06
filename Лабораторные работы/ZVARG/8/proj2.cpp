



#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std; 

//#define DEBUG 

// �������� ����� � ���������� ����
string format_float(float number){
    int num1 = number; // ����� ����� �����
    float num2 = number - num1; // ������� �����
    string res = to_string(num1);
    if (num2 > 0.0001){
        res += ".";
        res += to_string(num2).substr(2, 2);
    }
    return res;
}



// ������� � ���� (������� ������: ���� 1 ��, 103.9 �/�)
struct Position{
protected:
    string name; // �������� �������
    float cost_position; // ��������� ������� �� 1 �����
    int cout_position; // ���������� �������
public:
    // ����������� ������ position ��� �������������
    Position(){}
    // ����������� ������ position ��� �������������
    Position(string name, float cost_position, int cout_position){
        this->name = name;
        this->cost_position = cost_position;
        this->cout_position = cout_position;
    }
    // ����������� ������ position ��� �����������
    Position(Position& pos){
        cout << "Position(Position& pos)\n";
        this->name = pos.name;
        this->cost_position = pos.cost_position;
        this->cout_position = pos.cout_position;
    }
    // �������� ������������ (������ �����������)
    void operator=(Position const &obj){
        this->name = obj.name;
        this->cost_position = obj.cost_position;
        this->cout_position = obj.cout_position;
    }


    // ������ //
    // �������� �������
    string get_name() {return this->name;} 
    // ��������� ������� �� 1 �����
    float get_cost_position() {return this->cost_position;}
    // ���������� �������
    int get_cout_position() {return this->cout_position;} 

    // ����������� ��������� �������
    float cost() {return this->cost_position * float(this->cout_position);}

    // ������� ���������� � ������� ������
    void print(){
        cout.fill(' '); // ��������� ������� �����������
        cout.setf(ios::left); // �������� � ����
        // ������� ���� �� �������

        cout.width(35); // ������� ������ ����
        cout.precision(30); // ����������� �������� ��� ����
        cout << this->name;

        cout.width(35); // ������� ������ ����
        cout.precision(30); // ����������� �������� ��� ����
        cout << (format_float(this->cost_position) + " �/��");


        cout.width(35); // ������� ������ ����
        cout.precision(30); // ����������� �������� ��� ����
        cout << (to_string(this->cout_position) + " ��");
        
        cout << endl; 
    }
};



// ��������� ������ (���)
struct Order{
private:
    // �������� ����� �������
    Position made_position(int number = 0){
        if (number){
            cout << "������� ��������� ��� ������� ���� �� � " << number << "\n";
        }
        string name; // ��� �������
        // ����������� ��� �������
        while (true){
            cout << "������� �������� �������: ";
            getline(cin, name);
            if (size(name) != 0) {break;}
            cout << "��� ������� �� ����� ���� ������\n";
        }

        float cost_position; // C�������� �������
        // ����������� ��������� �������
        while(true){
            try{
                string temp;
                cout << "������� ��������� �������: ";
                getline(cin, temp);
                float res = stof(temp); 
                if (res < 0){
                    cout << "���� �� ����� ���� �������������\n";
                    continue;
                }
                cost_position = res; 
                break;
            }
            catch (...)  {cout << "������ ������ ��� � ��� ���������� �����.\n";}
        }

            
        // ���������� ���� �������
        int cout_position; // ���������� ���� �������
        while(true){
            try{
                string temp;
                cout << "������� ���������� ���� �������: ";
                getline(cin, temp);
                int res = stoi(temp); 
                if (res < 0){
                    cout << "���������� �� ����� ���� �������������\n";
                    continue;
                }
                cout_position = res; 
                break;
            }
            catch (...)  {cout << "������ ������ ��� � ��� ���������� �����.\n";}
        }

        cout << "��� ������� ���� � � " << number << "\n�� ����� ��������� ������:\n";
        cout << "\t��� �������: " << name << "\n";
        cout << "\tC�������� �������: " << cost_position << "\n";
        cout << "\t���������� ���� ������� " << cout_position << "\n";
        cout << "������� �� �� ������� ������� ��������� ������� (Y - ��/N - ���)";
        int flag = system("CHOICE");
        cout << endl; 
        system("cls"); // ������ ������� 
        if (flag == 1)  {return Position(name, cost_position, cout_position);}
        made_position(number);
    }

protected:
	string name; // �������� ����
	float cost = 0; // ��������� ����
    int discount = 0; // ������
    vector<Position*> arr_position; // ������ ������� � ������
public:
    // ����������� ������ order ��� �������������
    Order(){};
    // ����������� ������ position ��� �������������
    Order(string name) {
        this->name = name;
	    this->cost = 0; // ��������� ����
        this->discount = 0; // ������
    }
    // ����������� ������ position ��� �����������
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
    // �������� ������������ (������ �����������)
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

    // ������ //
    // �������� ����
    string get_name() {return this->name;} 
    // ��������� ����
	float get_cost() {return this->cost;} 
    // ������
    int get_discount() {return this->discount;} 
    // ������ ������� � ������
    vector<Position*> get_arr_position() {return this->arr_position;}

    // ������ // 
    bool position_in_order(string name_position){
        for (Position* i : this->arr_position){
            if (i->get_name() == name_position){
                return true;
            }
        }
        return false;
    }

    // ���������� ������� ���� � ���
    void append_order(){
        int len_position; // ���������� ������� � ����
        // �������� ���������� ������� � ����
        while(true){
            try{
                string temp; // ��������� ���������� 
                cout << "������� ���������� ������� � ����: ";
                getline(cin, temp);
                // ��������� �� ������ � �����
                int res = stof(temp); 
                if (res < 0){
                    cout << "���������� �������� �� ����� ���� �������������\n";
                    continue;
                }
                len_position = res; 
                // ���� ������������ ������ ��� ���� (� ��������� ������ ����������)
                break;
                }
                // ���� ������� ���������� 
                catch (...)  {cout << "������ ������ ��� � ��� ���������� �����.\n";}
            }
        system("cls"); // ������ ������� 
        // ��������� �������
        for (int i = 1; i < len_position + 1; i += 1){
            // ������� ����� ������� �������
            Position* new_item = new Position;
            *new_item = this->made_position(i); 
            // ��������� ����� ������� � ������
            this->arr_position.emplace_back(new_item); 
            // � ����� ��������� ���� ��������� ��������� ������ ������
            this->cost += new_item->cost();
        }

    }

    // ���������� ������ �� ����
    void set_discount(){
        if (this->cost > 5000) {this->discount = 5;}
        else if (this->cost > 2000) {this->discount = 2;}
    }

    // ������� ���������� �� ����
    void print(){
        cout.fill(' '); // ��������� ������� �����������
        cout.setf(ios::left); // �������� � ����

        cout << "�������� ����: " << this->name << "\n";
        cout << "������� ����:\n";

        // �����
        cout.width(35); // ������� ������ ����
        cout << "�������� �������";

        cout.width(35); // ������� ������ ����
        cout << "��������� ������� (�� �����)";

        cout.width(35); // ������� ������ ����
        cout << "���������� �������";
        cout << "\n";

        // ������� ���� �� �������
        for (int i = 0; i < this->arr_position.size(); i += 1){
            this->arr_position[i]->print();
        }

        cout << "����� ��������� ����: " << format_float(this->cost) << " p\n"; 
        cout << "������ ����: " << this->discount << "%\n";
        cout << endl; 
    }


    // ������������� ������ position ��� �������� ������������ ���������
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