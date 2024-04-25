



#include <iostream>
#include <vector>
#include "modle.cpp"

using namespace std;
//#define DEBUG

#ifdef DEBUG
int main(){
    system("chcp 1251");
    Square_matrix mat;

    while(true){
        system("cls");
        cout << "��������� ��������\n";
        cout << "1) ������ ������ ��� �������\n";
        cout << "2) ������� �������\n";
        cout << "3) ��������������� �������\n";
        cout << "4) ����� ������������ �������\n";
        cout << "5) ����� � ���������" << endl;
        cout << "�������� ����� ������� ��������: ";
        int action;
        cin >> action; 
        system("cls");
        try{
            switch(action){
                case 1:{
                    //cout << "������� ������ �������: ";
                    int n = 3; 
                    //cin >> n;
                    // ������� ������ ��������� �������
                    int max_len_item = 0; 
                    vector<vector<float>>items(n); 
                    for (int i = 0; i < n; i += 1){
                        items[i] = vector<float>(n);
                        for (int ii = 0; ii < n; ii += 1){
                            cout << "������� ������� � �������: " << (i + 1) << "." << (ii + 1) << ": ";
                            string temp;
                            cin >> temp;
                            items[i][ii] = stof(temp); 
                        }
                    }
                    mat = Square_matrix(items, n);
                    cout << "������ �������\n";
                }
                    break;

                case 2:
                    mat.print(); 
                    break;

                case 3:
                    mat.tranponate();
                    cout << "������� ���������������\n";
                    break;

                case 4:
                    cout << "����������� ������� " << mat.found_det() << "\n"; 
                    break;

                case 5:
                    return 0;
            }
        }
        catch (const exception& ex){
                cout << "��������� ������\n";
                cout << "�����������: " << ex.what() << "\n";
            }
        system("pause");
    }
}
#else
int main(){
    system("chcp 1251");
    cout << "�������� ������� ����� ����������� �� ���������\n";
    // �� ���������
    Square_matrix mat;
    cout << "����� ������� � �������: ";
    mat.print();

    system("pause");
    system("cls");

    int n = 3; 
    vector<vector<float>>items(n); 
    cout << "������� �������� ��� �������\n";
    for (int i = 0; i < n; i += 1){
        items[i] = vector<float>(n);
        for (int ii = 0; ii < n; ii += 1){
            cout << "������� ������� � �������: " << (i + 1) << "." << (ii + 1) << ": ";
            float temp;
            cin >> temp;
            items[i][ii] = temp; 
        }
    }
    cout << "�������� ������� ����� ����������� c ��������������\n";
    Square_matrix mat2(items);
    cout << "����� ������� � �������:\n";
    mat2.print();
    cout << "����� ������� � ������� ����� ����������������:\n";
    mat2.tranponate();
    mat2.print();
    cout << "����� ������������ ������� � �������: " << mat2.found_det() << "\n";

    system("pause");
    system("cls");

    // ����� �����������
    cout << "�������� ������� ����� ����������� �����������\n";
    Square_matrix mat3(mat2);
    cout << "����� ������� � �������:\n";
    mat3.print();
    cout << "����� ������� � ������� ����� ����������������:\n";
    mat3.tranponate();
    mat3.print();
    cout << "����� ������������ ������� � �������: " << mat3.found_det() << "\n";

    system("pause");
    return 0; 
}


#endif 
