



#include <iostream>
#include <cmath>
using namespace std;

// ������� ������ 
void print_arr(const float* arr, const int len_arr_2){
    int i = 0; 
    for (; i < (len_arr_2 - 1); i += 1){
        cout << arr[i] << ", ";
    };
    cout << arr[i] << "\n";
};


void found_characteristics(float a, float b, float c, float &perimeter, float &square){
    // ���� �������� ������������
    perimeter = a + b + c; 
    // ������������
    float p = perimeter / 2;
    // ���� �������
    square = sqrt(p * (p - a) * (p - b) * (p - c));
}

void sort(float* arr, const int len_arr){
    for (int i = 0; i < len_arr - 1; i += 1){
        // index ������������ ��������
        int min_iitem_arr = i;
        for (int ii = i + 1; ii < len_arr; ii += 1){
            if (arr[ii] < arr[min_iitem_arr]){
                min_iitem_arr = ii; 
                continue;
            }
        }
        float temp = arr[min_iitem_arr]; 
        arr[min_iitem_arr] = arr[i];
        arr[i] = temp; 
    }
}


int main(){
    // ���������� �����������
    system("chcp 1251");
    // ������ ��������� ����� ����������
    srand(time(NULL) % 10000);

    // ��������� ������ ��� �������������
    const int len_arr_tren = 5;
    // ������ ���������
    float p_arr_tren[len_arr_tren] = {8, 4, 2, 9, 0}; 
    // ������ ��������
    float s_arr_tren[len_arr_tren] = {3, 5, 2, 43, 1}; 

    // ��������� ������
    for (int i = 0; i < len_arr_tren; i += 1){
        float a, b, c; 
        cout << "������� ��������� ��� ������������ � " << i + 1 << "\n";
        cout << "\t������� �������� ��� a:"; 
        cin >> a;
        cout << "\t������� �������� ��� b:"; 
        cin >> b;
        cout << "\t������� �������� ��� c:"; 
        cin >> c;
        found_characteristics(a, b, c, p_arr_tren[i], s_arr_tren[i]);
        cout << "��������� ������������: " << p_arr_tren[i] << "\n";
        cout << "������� ������������: " << s_arr_tren[i] << "\n";
        system("pause");
        system("cls");

    };
    cout << "������ ����������\n�� ����������\n";
    print_arr(p_arr_tren, len_arr_tren); 
    sort(p_arr_tren, len_arr_tren); 
    cout << "����� ����������\n";
    print_arr(p_arr_tren, len_arr_tren); 

    cout << "\n";

    cout << "������ ��������\n�� ����������\n";
    print_arr(s_arr_tren, len_arr_tren); 
    sort(s_arr_tren, len_arr_tren); 
    cout << "����� ����������\n";
    print_arr(s_arr_tren, len_arr_tren); 


    system("pause"); // ������ ������ ��������� �������� ��� ���� �������
    return 0;
};

