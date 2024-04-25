#include <iostream>
#include <cmath>

using namespace std;

class vectr
{
    private:
    float i, j;
    public:
    vectr(float _i, float _j){
        i = _i; j = _j;
    }
    void print_vector()
    {
        cout << "i = " << i << " j = " << j << " ���� ����� �������� � OX = " << find_angle() << "\n";
    }
    float find_angle()
    {
        float angle = acos(i/sqrt(i*i + j*j));
        return angle;
    }
    void comparison(vectr addit_vector)
    {
        if ((i == addit_vector.i) && (j == addit_vector.j))
        {
            cout << "������� �����" << endl;
        }
        else
        {
            cout << "������� �������" << endl;
        }
    }
};

int main()
{
    system("chcp 1251");
    cout << "������� �������...\n";
    float inp_i, inp_j;
    cout <<"������� ���������� �� ��. ������� i: \n";
    cin >> inp_i;
    cout <<"������� ���������� �� ��. ������� j: \n";
    cin >> inp_j;
    vectr my_vectr(inp_i, inp_j);
    int cmd;
    while (true)
    {
        cout << "��������� ��� �������� � ���������. ��� �� ������ �������?" << "\n";
        cout << "��� ���������� ��������, ����������, ������� 1 �� ������ ����:" << "\n";
        cout << "\t1)����� ���������� � �������\n";
        cout << "\t2)��������� ������� � ������, �������� ���� ��������\n";
        cout << "\t3)����� �� ���������\n";
        cin >> cmd;
        switch(cmd)
        {
            case 1:
            {
                my_vectr.print_vector();
                continue;
            }
            case 2:
            {
                float i_new, j_new;
                cout << "��������� ��������...(0 - �� �����/1 - �����)\n";
                cout << "������� ���������� �������, � ������� ��� ���������...\n";
                cin >> i_new >> j_new;
                vectr new_vector(i_new,j_new);
                cout << "��������� ��������� ��������: " << endl;
                my_vectr.comparison(new_vector);
                continue;
            }
            case 3: cout << "Arrivederci! \n"; system("pause"); return 0;
            default: "������� �������� �������. ��������� �������."; continue;
        }
    }
}