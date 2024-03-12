/*
10. Создать функцию для определения значений синуса и косинуса углов
прямоугольного треугольника. Параметры функции – длины катетов. Вывести
результаты работы функции из основной программы.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int result_finding(float& adj,float& opp, double& hypo)//adj выступает в качестве cos, opp - в качестве sin
{
	float temp_param;
	temp_param = adj;
	opp = opp / hypo;
	adj = adj / hypo;
	return 0;
}
int main()
{
	float a;
	float& a_link = a;
	float b;
	float& b_link = b;
	double c;
	double& c_link = c;
	float result = 0;
	cout << "Enter a (adjacent leg) = ";
	cin >> a;
	cout << endl;
	cout << "Enter b (opposite leg) = ";
	cin >> b;
	cout << endl;
	c = sqrt (a*a + b*b);
	cout << "Hypotenuse = ";
	cout << c;
	cout << endl;
	result_finding(a_link, b_link, c_link);
	cout << "Sin = " << b_link << ", Cos = " << a_link << endl;
	system("pause");
	return 0;
}