#include <iostream>
#include <cmath>

using namespace std;

class vectr
{
private:
    float i, j;
public:
    vectr(){this->i = 0; this->j = 0;}//�� �����.
    vectr(float _i, float _j = 1) {//� ����������� (��. �������������) �� �����. 
        i = _i; j = _j;
    }
    vectr(const vectr& obj)//�����������
    {
        this->i = obj.i; 
        this->j = obj.j;
    }

    void print_vector()
    {
        cout << "i = " << i << " j = " << j << " ���� ����� �������� � OX = " << find_angle() << "\n";
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
        cout << "������ �����..." << endl;
    }//����������
};

int main()
{
    system("chcp 1251");
    cout << "������� �������...\n";
    float inp_i, inp_j, inp_i1;
    cout << "������� ���������� �� ��. ������� i: \n";
    cin >> inp_i;
    cout << "������� ���������� �� ��. ������� j: \n";
    cin >> inp_j;
    cout << "������� ���������� �� ��. ������� i (� ���������� �� ���������): \n";
    cin >> inp_i1;
    cout << endl;
    vectr my_vectr(inp_i, inp_j);
    vectr stock_vectr;
    vectr new_vctr(inp_i1);
    int cmd;
    while (true)
    {
        cout << "��������� ��� �������� � ���������. ��� �� ������ �������?" << "\n";
        cout << "��� ���������� ��������, ����������, ������� 1 �� ������ ����:" << "\n";
        cout << "\t1)����� ���������� � �������\n";
        cout << "\t2)��������� ������� � ������, �������� ���� ��������\n";
        cout << "\t3)����� �� ���������\n";
        cin >> cmd;
        switch (cmd)
        {
        case 1:
        {
            cout << "������, ��������� ������������� �� ���������: ";
            stock_vectr.print_vector();
            cout << "\n������, ��������� ������������� � ����������� �� ���������: ";
            new_vctr.print_vector();
            cout << "\n������, ��������� ������������� � ����������� (��. �������������): ";
            my_vectr.print_vector();
            cout << endl;
            continue;
        }
        case 2:
        {
            float i_new, j_new;
            cout << "��������� ��������...\n";
            cout << "������� ���������� �������, � ������� ��� ���������...\n";
            cin >> i_new >> j_new;
            vectr new_vector(i_new, j_new);
            cout << "��������� ��������� ��������: " << endl;
            if (my_vectr.comparison(new_vector))
            {
            	cout << "������� �����" << endl;
			}
			else
			{
				cout << "������� �������" << endl;
			}
            continue;
        }
        case 3: cout << "Arrivederci! \n"; system("pause"); return 0;
        default: "������� �������� �������. ��������� �������."; continue;
        }
    }
}
