



#include <iostream>
using namespace std;
#include <string> // ��� ����� �������� �� ��������

// ���������� ������������� ������� ��� ������ �� ��������
#include <list>

list<string> split(string st, char delim);

string join(list<string> st, char delim);
// ���������� ������������� ������� ��� ������ �� ��������




int main()
{
    system("chcp 1251"); 

    /*Escape - ������������������ - ������ ����� ������������ �� ���� ������. ���������� ��� ������
    
    \b - �������� ���������� ���������� �������
    \n - enter
    \t - tab

    \\ - ������� \ (�������� �����)
    \" - ������� ������� "
    \' - ������� ������� '
    */
    char sim = 'f'; // ��� ��������� ���������� � ��������
    cout << sim << "\n";
    // '' - ������ ������� ������� ������. ������: '������'
    // "" - ������ ������� ������� �����. ������: '������' + "\0". \0 - ���������� (������ ���������� ������)
    // ��������������� ���� (\0) - ��������� ����� ����� �������� ��� ����� ������ (������� char)
 
    char arr_sim[] = "My string"; // ������ �� �������� "" - ��������� \0 � ����� ������

    cout << arr_sim << "\n";

    char arr_chars[] = {'M', 'y', ' ', 's', 't', 'r', 'i', 'n', 'g', 's', '\0'};
    cout << size(arr_chars) << "\n"; // size() - �������� ���������� ��������� � �������



    string name = "Alex"; // ��� ��������� ���������� � �������
    cout << name << "\n";

    string vords[] = {"Hello", "world", "test"}; // ����� �����
    for (string i : vords){
        cout << i << "(" << size(i) << ")" << " ";// size() - �������� ���������� �������� � ������
    }
    cout << "\n";
    cout << vords[0] + " " + vords[1] << "\n"; // ������������ ����� ��� ����������� ��������
    
}


/**
���������� ����� ������� ������ �� ������� �������������
 * @brief 
 * 
 * @param st �������� ������ ������� ����� ������� �� ������� �������������
 * @param delim ������ �������������
 * @return list<string> 
 */
list<string> split(string st, char delim){
    list <string> res;
    // int cout_delim = st.find(delim, 0 );  // ���������� ��������������
    int len_delim = 1; // ����� ������� �������������
    int len_st = size(st); // ����� ������
    int past_ind = 0; // ������ ��� ��������� ��� ��� ��������� �����������
     
    for (int i = 0; i < len_st; i += 1){
        if (st[i] == delim){
            res.push_back(st.substr(past_ind, i - past_ind));
            past_ind = i + len_delim; 
        }

    }
    res.push_back(st.substr(past_ind, len_st - past_ind));
    return res;

}


/**
���������� ����� ��������� ������ �  ������ �� ������� �����������
 * @brief 
 * 
 * @param st ������ ������� ����� ��������� � ������� ������� �����������
 * @param delim ������ ����������� 
 * @return string 
 */
string join(list<string> st, char delim){
    string res;
    int len_st = size(st) - 1; // ����� ������ ������� ����� ����������
    for (string i : st){
        res += i;
        if (len_st > 0){
            res += delim;
            len_st -= 1;
        }
    }
    return res;
}