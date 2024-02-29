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



// ������� ��� ������ ������� (����������� (������ �������), ��� ��-���)
void arr_view(int arr[], int arr_dim){
	for (int el_index = 0; el_index < arr_dim; el_index+=1)
	{
			cout << setw(3) << arr[el_index] << ';';
	}
	cout << endl;
}


int number_of_neg_el(int arr[], int arr_dim) //�������, ����������� ������� ��-�� ��� ��������� ������
{

	int min = 0;
	for (int el_index = 1; el_index < arr_dim; el_index++)
	{
		if (arr[min] > arr[el_index]) min = el_index;
	}
	cout << "Loc min: " << min << endl;

	int sum = 0;

	for (int el_index = 0; el_index < min; el_index++)
	{
		if (arr[el_index] < 0) sum += arr[el_index];
	}
	cout << "Local sum" << sum << endl;
	return sum;
}



int main(){
    system("chcp 1251");
	srand(time(0)); //�������������� �����������

	int arr_dim_numb = 15;
	int main_array[15][15];
	int* main_array_pointer = &main_array[0][0];

    // ����, ��� ������ � ������ ����. �����
	for (int el_index = 0; el_index < 15; el_index++) {
		for (int el_index_aux = 0; el_index_aux < 15; el_index_aux++){
            // ��������������� ���� ��������� �����
			main_array[el_index][el_index_aux] = (rand() % 11) - 5;
		}
	}

	cout << "Input array: ";
	for (int dim_index = 0; dim_index < 15; dim_index++){
			arr_view(main_array[dim_index], arr_dim_numb);
	}

	int sum;
	for (int layer = 0; layer < arr_dim_numb; layer++){

		sum += number_of_neg_el(main_array[layer], arr_dim_numb);
	}
	cout << "�����:" << sum << endl;
	system("pause"); 
	
}




