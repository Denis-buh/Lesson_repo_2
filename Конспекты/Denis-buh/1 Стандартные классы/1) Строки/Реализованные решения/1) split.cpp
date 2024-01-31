



#include <iostream>
#include <string>
#include <list>

using namespace std;


/**
���������� ����� ������� ������ �� ������� �������������
 * @brief 
 * 
 * @param st �������� ������ ������� ����� ������� �� ������� �������������
 * @param delim ������ �������������
 * @return list<string> ������ � ������� �������� ������
 */
list<string> split(string st, const char delim);

/**
���������� ����� ������� ������ �� ������� �������������
 * @brief 
 * 
 * @param st �������� ������ ������� ����� ������� �� ������� �������������
 * @param delim ������ �������������
 * @param len_res ��������� �� ����� ��������������� ������� 
 * @return string* ������ �� ��������
 */
string* split(string st, const char delim, unsigned short int *len_res);






int main(){
    system("chcp 1251"); 
    string test = "���:�� :��� �����::::";
    unsigned short int len_res = 0;
    
    string* resr = split(test, ':', &len_res);
    for (int i = 0; i < len_res; i += 1){
        cout << resr[i] << "\n";
    }

    /*
    string test = "���:�� ��� �����:o";
    list<string> res = split(test, ':');
    for (string i : res){
        cout << i << "\t09" << "\n";
    }*/

    system("pause");

}




list<string> split(string st, const char delim){
    list <string> res; // �������������� ������
    const unsigned short int len_st = size(st); // ����� ������
    unsigned short int past_ind = 0; // ������ ��� ��������� ��� ��� ��������� �����������
    string st_small; // ������������� ������
     
    for (unsigned short int i = 0; i < len_st; i += 1){
        if (st[i] == delim){
            st_small = st.substr(past_ind, i - past_ind); 
            if (size(st_small) != 0){
                // ���� ������ �� ������
                res.push_back(st_small);
            }
            past_ind = i + 1;
        }
    }
    // �������� ���� ��� �������� ����� �����
    st_small = st.substr(past_ind, len_st); 
    if (size(st_small) != 0){
        res.push_back(st_small);
    }
    cout << "����� ���������� ���� (���): " << clock()/1000.0 << endl; // ����� ������ ���������  
    return res;

}


string* split(string st, const char delim, unsigned short int *len_res){
    const unsigned short int len_st = size(st); // ����� ������
    unsigned short int past_ind = 0; // ������ ��� ��������� ��� ��� ��������� �����������

    // ���������� ���������� ������ ������������
    for (unsigned short int i = 0; i <= len_st; i += 1){
        if (st[i] == delim){
            if (size(st.substr(past_ind, i - past_ind)) != 0){
                // ���� ������ �� ������
                *len_res += 1;
            }
            past_ind = i + 1;
        }
    }
    // �������� ���� ��� �������� ����� �����
    if (size(st.substr(past_ind, len_st)) != 0){
        *len_res += 1;
    }

    past_ind = 0; // ���������� ������ � ����������� ��������
    string st_small; // ������������� ������
    string *res = new string[*len_res]; // �������������� ������
    int ii = 0;
    // ���������� �������������� ������
    for (unsigned short int i = 0; i < len_st; i += 1){
        if (st[i] == delim){
            st_small = st.substr(past_ind, i - past_ind); 
            if (size(st_small) != 0){
                // ���� ������ �� ������
                res[ii] = st_small;
                ii += 1;
            }
            past_ind = i + 1;
        }
    }
    // �������� ���� ��� �������� ����� �����
    st_small = st.substr(past_ind, len_st); 
    if (size(st_small) != 0){
        res[*len_res - 1] = st_small;
    }
    
    return res;
}
