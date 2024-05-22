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
    cout << "Укажите, сколько людей вы хотите внести в базу?\n";
    cin >> number_of_ppl;
    for (int i = 0; i < number_of_ppl; i++)
    {
        cout << "Введите год рождения человека..." << endl;
        cin >> year;
        if (year > 2006)
        {
            cout << "Вводятся данные для школьника...\n";
            cout << "Введите пол:\n";
            cin >> gend;
            cout << "Введите фамилию и имя:\n";
            cin >> surnam >> nam;
            cout << "Введите номер школы и класса:\n";
            cin >> newschool_number >> newclass_number;
            const Schoolkid kid(year, gend, surnam, nam, newschool_number, newclass_number);
            kid.const_print_human();
        }
        else
        {
            cout << "Вы хотите ввести данные для студента или преподавателя? 0 - для студента, 1 - для преподавателя...\n";
            int cmd;
            cin >> cmd;
            if (cmd == 0)
            {
                cout << "Вводятся данные для студента...\n";
                cout << "Введите пол:\n";
                cin >> gend;
                cout << "Введите фамилию и имя:\n";
                cin >> surnam >> nam;
                cout << "Введите специализацию и номер курса:\n";
                cin >> newspecs >> newclass_number;
                Student student(year, gend, surnam, nam, newspecs, newclass_number);
                student.print_human();
            }
            else
            {
                cout << "Вводятся данные для преподавателя...\n";
                cout << "Введите пол:\n";
                cin >> gend;
                cout << "Введите фамилию и имя:\n";
                cin >> surnam >> nam;
                cout << "Введите стаж и должность:\n";
                cin >> newworked_years >> new_job;
                Teacher teacher(year, gend, surnam, nam, newworked_years, new_job);
                teachers.push_back(teacher);
            }
        }
        cout << "Создан контейнер vector с данными о учителях. Отображаю данные из него...\n";
        for (auto iter = teachers.begin(); iter != teachers.end(); iter++)
        {
            if ((*iter).get_state_pensioner())
            {
                teachers.erase(iter);
            }
        }
        cout << "Модифицированный контейнер с учителями без пенсионеров:\n";
        for (auto iter = teachers.begin(); iter != teachers.end(); iter++)
        {
            (*iter).print_human();
        }
    }
}
