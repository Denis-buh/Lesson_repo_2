



#include <iostream>
using namespace std;
#include <string> // ��� ����� �������� �� ��������

// ���������� ������������� ������� ��� ������ �� ��������
#include <list>



/**
���������� ����� ������� ������ �� ������� �������������
 * @brief 
 * 
 * @param st �������� ������ ������� ����� ������� �� ������� �������������
 * @param delim ������ �������������
 * @return list<string> 
 */
list<string> split(string st, char delim);



list<string> split(string st, char delim){
    list <string> res;
    // int cout_delim = st.find(delim, 0 );  // ���������� ��������������
    unsigned short int len_st = size(st); // ����� ������
    unsigned short int past_ind = 0; // ������ ��� ��������� ��� ��� ��������� �����������
    string st_small; // ������������� ������
     
    for (int i = 0; i <= len_st; i += 1){
        if (st[i] == delim){
            st_small = st.substr(past_ind, i - past_ind); 
            if (size(st_small) != 0){
                res.push_back(st.substr(past_ind, i - past_ind));
            }
            past_ind = i + 1;
        }

    }
    st_small = st.substr(past_ind, len_st); 
    if (size(st_small) != 0){
        res.push_back(st.substr(past_ind, len_st - past_ind));
    }
    return res;

}




int main(){
    system("chcp 1251"); 
    double start_time =  clock(); // ��������� �����
    string test = "���:��::��� ���:��";
    list<string> res = split(test, ':');
    for (string i : res){
        cout << i << "\t09" << "\n";
    }
    double end_time = clock(); // �������� �����
    double search_time = end_time - start_time; // ������� �����
    cout << search_time << "\n";

    system("pause");

}




