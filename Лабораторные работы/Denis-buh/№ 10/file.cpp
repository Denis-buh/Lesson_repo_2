



#include <iostream>
#include <fstream> // ��� ���� ����� ����� ���� ����������� ������ � �����
#include <string>

using namespace std; 



int main(){
    system("chcp 1251");
    string name_file;
    cout << "�������� ���� � �����: ";
    getline(cin, name_file);
    name_file = "C:\\���������� ������������\\Lesson_repo_2\\������������ ������\\Denis-buh\\� 10\\test.txt";

    ifstream file; // ��������� ������ ����
    // ������ ������� ���������� ��� ����������� ��������� ��������� ������
    file.exceptions(ifstream::badbit | ifstream::failbit); 
    file.open(name_file); // �������� ����� � ������ ������ (���� ����� ���, �� �� ��� �� �������)
    if (not file.is_open()){ // ��������� ���� �� ��������
        cout << "���� �� ��������\n";
        system("pause");
        return 0;
    }
    int len_word_in_file = 0;
    system("pause");
    cout << "���������� �����\n";
    while (not file.eof()){
        // ����� eof ������ true ���� ��� ����� ����� � �� ������
        len_word_in_file += 1;
        
        string inform = ""; // ����� ��� ���������� ����������
        // ��������� ���������� �� ������� � ���������� ���� � inform.
        file >> inform;
        //  ���� ��� ������� �����
        if (len_word_in_file != 10){
            cout << inform << " ";
        }
        // ���� ��� ������� �����
        else if (len_word_in_file == 10){
            cout << "!" << inform << "! ";
        }
        
    }

    cout << "���������� ���� � ������: " << len_word_in_file << "\n";
    

    system("pause");
    return 0;
    

}