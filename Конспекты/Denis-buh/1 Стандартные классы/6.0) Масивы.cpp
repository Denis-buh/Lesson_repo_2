



#include <iostream>
using namespace std;


int main()
{
    system("chcp 1251");

    /*
    ������� - ������������ ���������� ����������� ������� ��������� ���������� ��������
    ������ ���������� ������������ ������ �������� ��������� ����� �������
    ������ - ���������� ����� ��������������
    ������ �� ����� ������� ���������� ������ �����
    ����� ������ ������������ �� ���� ���������
    ���������� ��������� ������� <= ������ ������� (���� ������� �� �������� �� �� ������� ����� �� ������)
    */
    // ���������� �������: ���_������_������� ���_�������[����������_����������_�������]; // ��� �������������
    // ���������� �������: ���_������_������� ���_�������[����������_����������_�������] = {"��� ����� �������� � ������ ����� �������"}; // � ��������������
    // ���������� �������: ���_������_������� ���_�������[] = {"��� ����� �������� � ������ ����� �������"}; // � ��������������


    // ��������� ������������� ������ (��� �������������)
    int numbers[4];
    // ����� �������� ������� � ��� ��������� ������ �� ���������
    // ������� ���������� ������� ����� ���� �����
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // ������� �������� �������
    cout << numbers[2] << "\n";

    // ������� � �������� �������� �� ������� ����� ������ �� ������������ �������� (�� 0  �� ����������_����������_������� - 1)
    // ����� ����� �����-�� �����

    // ��������� ������������� ������ 
    int new_numbers[] = {1, 2, 3, 4}; // �� ����� �����: int new_numbers[]{1, 2, 3, 4};
    // ��� �������� ������� � �������������� �� ����������� ������� ���������� ���������


    // ����� ������� � ������� �����
    const int len_arr = 4;
    int arr[4];
    // ������ arr ��������� �� ����� ������� �������� � ������
    for (int i = 0; i < len_arr; i += 1){
        arr[i] = (i + 1); // ��������� ������
        cout << "������� ��� ��������: " << i << " � ������� arr = " << arr[i] << "\n"; // ������� �������� �������
    }

    // ������ � ���������� ����� �������
    int super_numbers[] = {2, 4, 5, 6, 7, 8, 45};

    cout << "����� ������� (���������� ���������): " << sizeof(super_numbers) / sizeof(super_numbers[0]) << "\n";
    // �� ������ �� sizeof(int) ��� ��� sizeof(super_numbers) = "���������� ��������� � ������" * sizeof("��� ��������� � �������")
    // size(super_numbers) - ������ ������� ����� ������ ������ �������

    /*����������� ������
    ���������� ������������ �������
    "��� ������ �������" "��� �������"["���������� ��������� ��� �������� �������"]["���������� ��������� ��� ����������� �������"] = "�������� ��� �������"
    */
    int my_super_arr[3][2] = {
        {1, 2},
        {3, 4},
        {5}
    };
    // ������� � �������� 2.1 - �������� �������
    cout << "����� ������������ �������:\n";
    for (int i = 0; i < 3; i += 1){
        for (int ii = 0; ii < 2; ii += 1){
            cout << my_super_arr[i][ii] << "\t";
        }
        cout << "\n";
    }
    /* ������ � ���������� �������� ����� ������
    for (auto& i : my_super_arr){
        for (auto& ii : i){
            cout << ii << "\t";
        }
        cout << "\n";
    }
    */

    system("pause");
}