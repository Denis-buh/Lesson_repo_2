/*
10. � ������� ���������� ���������� ������������� ��������� ����������� �������, ���������� ����� ������� ������ ������ ������������
��������. ������������ ������� ��� ������ ������ ���������� �������
����������� 15 �� 15.


�������. � ������������ � ��������� ������� �������, �����������
������� ��������: ���������� ������ � ��� �����������.
������� ����������� ����� ���������:
1) ����� ��������� � ��������� ������� ����� ���������,
2) ������� ��������.
��� ������� ������ �����������: ������ ������ ���������� � ����������� ���������� �������, ���������� � ��������� �������.
����� ������� ��� ���������� ���������, ���� ��������� ���� ��������� � ������� ���������.
������������������ ����������� ���������� ��������� ������� �
������� ���������� �������. �������� ���������� ������� ������ ��������� �������, �� ����� ������� �� �� �����.
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std; 

int min_finding(int arr[], int arr_dim);//������� �� ���������� ������������ �� ������� (��� ��-���)
int arr_view(int arr_dim, int arr[]);// ������� ��� ������ ������� (��� ��-���)
int number_of_neg_el(int arr[], int arr_dim);//�������, ����������� ������� ��-�� ��� ��������� ������ (��� ��-���)
int main()
{
    system("chcp 1251");
	int arr_dim_numb = 15;
	int main_array[15][15];
	int* main_array_pointer = &main_array[0][0];
	srand(time(0)); //�������������� �����������
	for (int el_index = 0; el_index < 15; el_index++) //����, ��� ������ � ������ ����. �����
	{
		for (int el_index_aux = 0; el_index_aux < 15; el_index_aux++)
		{
			main_array[el_index][el_index_aux] = (rand() % 11) - 5;//��������������� ���� ��������� �����
		}
	}
	cout << "Input array: ";
	for (int dim_index = 0; dim_index < 15; dim_index++)
	{
			arr_view(arr_dim_numb, main_array[dim_index] );
	}
	int sum;
	for (int layer = 0; layer < arr_dim_numb; layer++)
	{
		sum+=number_of_neg_el(main_array[layer], arr_dim_numb);
	}
	cout << "�����:" << sum << endl;
	system("pause"); 
	return 0;
}
int min_finding(int arr[], int arr_dim)//������� �� ���������� ������������ �� ������� 
{
	int min(arr[0]);
	for (int el_index = 0; el_index < arr_dim; el_index++)
	{
		if (min > arr[el_index + 1]) min = arr[el_index + 1];
	}
	cout << "Loc min: " << min << endl;
	return min;
}
int arr_view(int arr_dim, int arr[]) // ������� ��� ������ ������� (����������� (������ �������), ��� ��-���)
{
	for (int el_index = 0; el_index < arr_dim; el_index++)
	{
			cout << setw(3) << arr[el_index] << ';';
	}
	cout << endl;
	return 0;
}
int number_of_neg_el(int arr[], int arr_dim) //�������, ����������� ������� ��-�� ��� ��������� ������
{
	int sum;
	int min;
	min = min_finding(arr, arr_dim);
	for (int el_index = 0; el_index < arr_dim; el_index++)
	{
		if (arr[el_index] == min) break;
		if (arr[el_index] < 0) sum += arr[el_index];
	}
	cout << "Local sum" << sum << endl;
	return sum;
}
