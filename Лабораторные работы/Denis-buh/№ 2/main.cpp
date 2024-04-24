



#include <iostream>
#include <vector>
#include "modle.cpp"

using namespace std;
#define DEBUG

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
    vector<vector<float>>items= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; 
    // �� ���������
    Square_matrix mat;
    // � ��������������
    Square_matrix mat2(items);
    // ����� �����������
    Square_matrix mat3(mat2);

    system("pause");
}


#endif 
