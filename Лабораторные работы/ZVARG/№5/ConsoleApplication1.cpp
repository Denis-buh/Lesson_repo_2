#include <iostream>
#include <cmath>
#include "ConsoleApplication.cpp"
#include <vector>

using namespace std;

int main()
{
    system("chcp 1251");
    vector <Teacher> teachers;
    int year, newschool_number, newclass_number, newworked_years, number_of_ppl;
    char gend;
    string surnam, nam, newspecs, new_job;
    cout << "�������, ������� ����� �� ������ ������ � ����?\n";
    cin >> number_of_ppl;
    for (int i = 0; i < number_of_ppl; i++)
    {
        cout << "������� ��� �������� ��������..." << endl;
        cin >> year;
        if (year > 2006)
        {
            cout << "�������� ������ ��� ���������...\n";
            cout << "������� ���:\n";
            cin >> gend;
            cout << "������� ������� � ���:\n";
            cin >> surnam >> nam;
            cout << "������� ����� ����� � ������:\n";
            cin >> newschool_number >> newclass_number;
            const Schoolkid kid(year, gend, surnam, nam, newschool_number, newclass_number);
            kid.const_print_human();
        }
        else
        {
            cout << "�� ������ ������ ������ ��� �������� ��� �������������? 0 - ��� ��������, 1 - ��� �������������...\n";
            int cmd;
            cin >> cmd;
            if (cmd == 0)
            {
                cout << "�������� ������ ��� ��������...\n";
                cout << "������� ���:\n";
                cin >> gend;
                cout << "������� ������� � ���:\n";
                cin >> surnam >> nam;
                cout << "������� ������������� � ����� �����:\n";
                cin >> newspecs >> newclass_number;
                Student student(year, gend, surnam, nam, newspecs, newclass_number);
                student.print_human();
            }
            else
            {
                cout << "�������� ������ ��� �������������...\n";
                cout << "������� ���:\n";
                cin >> gend;
                cout << "������� ������� � ���:\n";
                cin >> surnam >> nam;
                cout << "������� ���� � ���������:\n";
                cin >> newworked_years >> new_job;
                Teacher teacher(year, gend, surnam, nam, newworked_years, new_job);
                teachers.push_back(teacher);
            }
        }
        cout << "������ ��������� vector � ������� � ��������. ��������� ������ �� ����...\n";
        for (auto iter = teachers.begin(); iter != teachers.end(); iter++)
        {
            if ((*iter).get_state_pensioner())
            {
                teachers.erase(iter);
            }
        }
        cout << "���������������� ��������� � ��������� ��� �����������:\n";
        for (auto iter = teachers.begin(); iter != teachers.end(); iter++)
        {
            (*iter).print_human();
        }
    }
}
