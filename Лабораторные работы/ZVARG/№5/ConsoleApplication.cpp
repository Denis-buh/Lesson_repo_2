#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Human
{
	protected: 
	int birth_year, age; 
	char gender; 
	string surname, name;
	public:
	virtual void print_human() = 0;
	Human(int year, char gend, string surnam, string nam)
	{
		birth_year = year;
		gender = gend;
		surname = surnam;
		name = nam;
		age = 2024 - birth_year;
	}
	Human() {};
};

class Schoolkid : public Human
{
	private: 
	int school_number, class_number;
	bool over_18;
	public:
	Schoolkid(int year, char gend, string surnam, string nam, int newschool_number, int newclass_number)
	{
		birth_year = year;
		gender = gend;
		surname = surnam;
		name = nam;
		school_number = newschool_number;
		class_number = newclass_number;
		age = 2024 - birth_year;
		if (age > 17)
		{
			over_18 = true;
		}
		else
		{
			over_18 = false;
		}
	}
	virtual void print_human()
	{
		cout << "| Год рождения: " << birth_year << " | " << "Возраст: " << age << " | " << "Пол: " << gender << " | " << "Фамилия и имя: " << surname << " " << name << " | " << "Номер школы: " << school_number << " | " << "Номер класса: " << class_number << " |" << endl;
	}
	void const_print_human() const
	{
		cout << "| Год рождения: " << birth_year << " | " << "Возраст: " << age << " | " << "Пол: " << gender << " | " << "Фамилия и имя: " << surname << " " << name << " | " << "Номер школы: " << school_number << " | " << "Номер класса: " << class_number << " |" << endl;
	}
};

class Student : public Human
{
	private:
	string specs;
	int class_number;
	public:
	Student(int year, char gend, string surnam, string nam, string newspecs, int newclass_number)
	{
		birth_year = year;
		gender = gend;
		surname = surnam;
		name = nam;
		specs = newspecs;
		class_number = newclass_number;
		age = 2024 - birth_year;
	}
	virtual void print_human()
	{
		cout << "| Год рождения: " << birth_year << " | " << "Возраст: " << age << " | " << "Пол: " << gender << " | " << "Фамилия и имя: " << surname << " " << name << " | " << "Специальность: " << specs << " | " << "Номер курса: " << class_number << " |" << endl;
	}
};

class Teacher : public Human
{
	private:
	int worked_years;
	string job;
	bool is_pensioner;
	public:
	Teacher(int year, char gend, string surnam, string nam, int newworked_years, string new_job)
	{
		birth_year = year;
		gender = gend;
		surname = surnam;
		name = nam;
		worked_years = newworked_years;
		new_job = new_job;
		age = 2024 - birth_year;
		if (((age > 62) && (gender == 'м')) || ((age > 57) && (gender == 'ж')))
		{
			is_pensioner = true;
		}
		else
		{
			is_pensioner = false;
		}
	}
	bool get_state_pensioner() const{ return this->is_pensioner;}

	virtual void print_human()
	{
		cout << "| Год рождения: " << birth_year << " | " << "Возраст: " << age << " | " << "Пол: " << gender << " | " << "Фамилия и имя: " << surname << " " << name << " | " << "Стаж: " << worked_years << " | " << "Должность: " << job << " |" << endl;
	}
};