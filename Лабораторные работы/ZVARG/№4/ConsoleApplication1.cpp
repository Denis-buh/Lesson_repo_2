#include <iostream>
#include <cmath>
#include "ConsoleApplication1 (2).cpp"

using namespace std;

int main()
{
    system("chcp 1251");
    cout << "������� �������...\n";
    float inp_i, inp_j, inp_k;
    cout << "������� ���������� �� ��. ������� i (3-������ ������): \n";
    cin >> inp_i;
    cout << "������� ���������� �� ��. ������� j (3-������ ������): \n";
    cin >> inp_j;
    cout << "������� ���������� �� ��. ������� k (3-������ ������): \n";
    cin >> inp_k;
    cout << endl;
    my3Dvectr my3d_vectr(inp_i, inp_j, inp_k);
    cout << "������� ���������� �� ��. ������� i (3-������ ������ �2): \n";
    cin >> inp_i;
    cout << "������� ���������� �� ��. ������� j (3-������ ������ �2): \n";
    cin >> inp_j;
    cout << "������� ���������� �� ��. ������� k (3-������ ������ �2): \n";
    cin >> inp_k;
    cout << endl;
    my3Dvectr new3d_vectr(inp_i, inp_j, inp_k);
    cout << "������� ���������� �� ��. ������� i (2-������ ������): \n";
    cin >> inp_i;
    cout << "������� ���������� �� ��. ������� j (2-������ ������): \n";
    cin >> inp_j;
    vectr my_vectr(inp_i, inp_j);
    int cmd;
    while (true)
    {
        cout << "��������� ��� �������� � ���������. ��� �� ������ �������?" << "\n";
        cout << "��� ���������� ��������, ����������, ������� 1 �� ������ ����:" << "\n";
        cout << "\t1)����� ���������� � �������\n";
        cout << "\t2)��������� ������� � ������, �������� ���� ��������\n";
        cout << "\t3)�������� 3-������ ��������\n";
        cout << "\t4)��������� ��������� �� 3-������� �������\n";
        cout << "\t5)��������� ������������ 3-������ ��������\n";
        cout << "\t6)����� �� ���������\n";
        cin >> cmd;
        switch (cmd)
        {
        case 1:
        {
            cout << "\n���������� ������: ";
            my_vectr.print_vector();
            cout << endl;
            cout << "\n��������� ������ �1: ";
            my3d_vectr.print_3dvectr();
            cout << endl;
            cout << "\n��������� ������ �2: ";
            new3d_vectr.print_3dvectr();
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
            if (my_vectr == new_vector)
            {
            	cout << "������� �����" << endl;
			}
			else
			{
				cout << "������� �������" << endl;
			}
            cout << "��������� 3-������ ��������...\n";
            if (my3d_vectr != new3d_vectr)
            {
                cout << "������� �������" << endl;
            }
            else
            {
                cout << "������� �����" << endl;
            }
            continue;
        }
        case 3:
       	{
            cout << "�������� ��������...";
        	my3Dvectr result_vectr;
			result_vectr = 	my3d_vectr + new3d_vectr;
			result_vectr.print_3dvectr();
            continue;
		}
        case 4:
       	{
            cout << "��������� ��������� �� �������...";
        	my3Dvectr result_vectr;
			result_vectr = 	my3d_vectr--;
			result_vectr.print_3dvectr();
            continue;
		}
        case 5:
        {
            cout << "��������� ������������ ��������...";
            my3Dvectr result_vectr;
            my3d_vectr *= new3d_vectr;
            result_vectr.print_3dvectr();
            continue;
        }
        case 6: cout << "Arrivederci! \n"; system("pause"); return 0;
        default: "������� �������� �������. ��������� �������."; continue;
        }
    }
}
