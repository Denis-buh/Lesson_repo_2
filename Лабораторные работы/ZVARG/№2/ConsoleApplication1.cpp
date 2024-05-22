#include <iostream>
#include <cmath>

using namespace std;

class vectr
{
private:
    float i, j;
public:
    vectr(){this->i = 0; this->j = 0;}//по умолч.
    vectr(float _i, float _j = 1) {//с параметрами (сп. инициализации) по умолч. 
        i = _i; j = _j;
    }
    vectr(const vectr& obj)//копирование
    {
        this->i = obj.i; 
        this->j = obj.j;
    }

    void print_vector()
    {
        cout << "i = " << i << " j = " << j << " Угол между вектором и OX = " << find_angle() << "\n";
    }
    float find_angle()
    {
        float angle = acos(i / sqrt(i * i + j * j));
        return angle;
    }
    bool comparison(vectr& addit_vector)
    {
        if ((i == addit_vector.i) && (j == addit_vector.j))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~vectr() 
    {
        cout << "Объект удалён..." << endl;
    }//деструктор
};

int main()
{
    system("chcp 1251");
    cout << "Задание вектора...\n";
    float inp_i, inp_j, inp_i1;
    cout << "Введите координаты по ед. вектору i: \n";
    cin >> inp_i;
    cout << "Введите координаты по ед. вектору j: \n";
    cin >> inp_j;
    cout << "Введите координаты по ед. вектору i (с параметром по умолчанию): \n";
    cin >> inp_i1;
    cout << endl;
    vectr my_vectr(inp_i, inp_j);
    vectr stock_vectr;
    vectr new_vctr(inp_i1);
    int cmd;
    while (true)
    {
        cout << "Программа для операций с векторами. Что вы хотите сделать?" << "\n";
        cout << "Для выполнения операции, пожалуйста, введите 1 из команд ниже:" << "\n";
        cout << "\t1)Вывод информации о векторе\n";
        cout << "\t2)Сравнение вектора с другим, заданным вами вектором\n";
        cout << "\t3)Выход из программы\n";
        cin >> cmd;
        switch (cmd)
        {
        case 1:
        {
            cout << "Вектор, созданный конструктором по умолчанию: ";
            stock_vectr.print_vector();
            cout << "\nВектор, созданный конструктором с параметрами по умолчанию: ";
            new_vctr.print_vector();
            cout << "\nВектор, созданный конструктором с параметрами (сп. инициализации): ";
            my_vectr.print_vector();
            cout << endl;
            continue;
        }
        case 2:
        {
            float i_new, j_new;
            cout << "Сравнение векторов...\n";
            cout << "Введите координаты вектора, с которым идёт сравнение...\n";
            cin >> i_new >> j_new;
            vectr new_vector(i_new, j_new);
            cout << "Состояние равенства векторов: " << endl;
            if (my_vectr.comparison(new_vector))
            {
            	cout << "Векторы равны" << endl;
			}
			else
			{
				cout << "Векторы неравны" << endl;
			}
            continue;
        }
        case 3: cout << "Arrivederci! \n"; system("pause"); return 0;
        default: "Введена неверная команда. Повторите попытку."; continue;
        }
    }
}
