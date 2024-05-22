#include <iostream>
#include <cmath>
#include "ConsoleApplication1 (2).cpp"

using namespace std;

int main()
{
    system("chcp 1251");
    cout << "Задание вектора...\n";
    float inp_i, inp_j, inp_k;
    cout << "Введите координаты по ед. вектору i (3-мерный вектор): \n";
    cin >> inp_i;
    cout << "Введите координаты по ед. вектору j (3-мерный вектор): \n";
    cin >> inp_j;
    cout << "Введите координаты по ед. вектору k (3-мерный вектор): \n";
    cin >> inp_k;
    cout << endl;
    my3Dvectr my3d_vectr(inp_i, inp_j, inp_k);
    cout << "Введите координаты по ед. вектору i (3-мерный вектор №2): \n";
    cin >> inp_i;
    cout << "Введите координаты по ед. вектору j (3-мерный вектор №2): \n";
    cin >> inp_j;
    cout << "Введите координаты по ед. вектору k (3-мерный вектор №2): \n";
    cin >> inp_k;
    cout << endl;
    my3Dvectr new3d_vectr(inp_i, inp_j, inp_k);
    cout << "Введите координаты по ед. вектору i (2-мерный вектор): \n";
    cin >> inp_i;
    cout << "Введите координаты по ед. вектору j (2-мерный вектор): \n";
    cin >> inp_j;
    vectr my_vectr(inp_i, inp_j);
    int cmd;
    while (true)
    {
        cout << "Программа для операций с векторами. Что вы хотите сделать?" << "\n";
        cout << "Для выполнения операции, пожалуйста, введите 1 из команд ниже:" << "\n";
        cout << "\t1)Вывод информации о векторе\n";
        cout << "\t2)Сравнение вектора с другим, заданным вами вектором\n";
        cout << "\t3)Сложение 3-мерных векторов\n";
        cout << "\t4)Тернарное вычитание из 3-мерного вектора\n";
        cout << "\t5)Векторное произведение 3-мерных векторов\n";
        cout << "\t6)Выход из программы\n";
        cin >> cmd;
        switch (cmd)
        {
        case 1:
        {
            cout << "\nДвухмерный вектор: ";
            my_vectr.print_vector();
            cout << endl;
            cout << "\nТрёхмерный вектор №1: ";
            my3d_vectr.print_3dvectr();
            cout << endl;
            cout << "\nТрёхмерный вектор №2: ";
            new3d_vectr.print_3dvectr();
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
            if (my_vectr == new_vector)
            {
            	cout << "Векторы равны" << endl;
			}
			else
			{
				cout << "Векторы неравны" << endl;
			}
            cout << "Сравнение 3-мерных векторов...\n";
            if (my3d_vectr != new3d_vectr)
            {
                cout << "Векторы неравны" << endl;
            }
            else
            {
                cout << "Векторы равны" << endl;
            }
            continue;
        }
        case 3:
       	{
            cout << "Сложение векторов...";
        	my3Dvectr result_vectr;
			result_vectr = 	my3d_vectr + new3d_vectr;
			result_vectr.print_3dvectr();
            continue;
		}
        case 4:
       	{
            cout << "Тернарное вычитание из вектора...";
        	my3Dvectr result_vectr;
			result_vectr = 	my3d_vectr--;
			result_vectr.print_3dvectr();
            continue;
		}
        case 5:
        {
            cout << "Векторное произведение векторов...";
            my3Dvectr result_vectr;
            my3d_vectr *= new3d_vectr;
            result_vectr.print_3dvectr();
            continue;
        }
        case 6: cout << "Arrivederci! \n"; system("pause"); return 0;
        default: "Введена неверная команда. Повторите попытку."; continue;
        }
    }
}
