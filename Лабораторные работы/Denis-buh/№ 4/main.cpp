



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
    int n = 3; 
    vector<vector<float>>items(n); 
    cout << "������� �������� ��� ������� A\n";
    for (int i = 0; i < n; i += 1){
        items[i] = vector<float>(n);
        for (int ii = 0; ii < n; ii += 1){
            cout << "������� ������� � �������: " << (i + 1) << "." << (ii + 1) << ": ";
            float temp;
            cin >> temp;
            items[i][ii] = temp; 
        }
    }
    Matrix_square mat(items);
    cout << "����� ������� � �������: ";
    mat.print();

    system("pause");
    system("cls");


    items.clear();
    cout << "������� �������� ��� ������� B\n";
    for (int i = 0; i < n; i += 1){

        items.push_back(vector<float>(n));
        for (int ii = 0; ii < n; ii += 1){
            cout << "������� ������� � �������: " << (i + 1) << "." << (ii + 1) << ": ";
            float temp;
            cin >> temp;
            items[i][ii] = temp; 
        }
    }
    Matrix_square mat2(items);
    cout << "����� ������� � �������: ";
    mat2.print();

    system("pause");
    system("cls");
    cout << "�������� ������� A � B �� ���������\n";
    if (mat == mat2){
        cout << "������� A � B �����\n";
    }
    else{
        cout << "������� A � B �� �����\n";
    }

    cout << "C = A + B\n";
    Matrix_square mat3 = (mat + mat2); 
    cout << "����� �\n";
    mat3.print(); 

    cout << "������� ����� �� ������� ����� �������� �������: ";
    int number;
    cin >> number; 
    cout << "mat4 = A * number\n";
    Matrix_square mat4 = (mat * number); 
    cout << "����� mat4\n";
    mat4.print(); 
    cout << "mat5 = B * number\n";
    Matrix_square mat5 = (mat2 * number); 
    cout << "����� mat5\n";
    mat5.print(); 


    system("pause");
    return 0; 
}


#endif 
