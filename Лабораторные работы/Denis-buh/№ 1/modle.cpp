



#include <iostream>
#include <stdexcept> // ��� ����� ���� ����������� �������� ����������
#include <vector>


using namespace std;


class Square_matrix{
private:
    // ������ �������
    unsigned int n = 0;
    // ����� ������ �������� ��������
    unsigned int max_len_item = 0;
    // ������ ��������� �������
    vector<vector<int>> items;
public:
    // ������
    // ���������� �������
    void set_inform(unsigned int n, vector<vector<int>> items){
        // ������ �������
        this->items.clear();
        this->n = n; 
        this->items = items; 
        this->max_len_item = 0; 
    }
    void set_max_len_item(unsigned int len){
        this->max_len_item = len;
    }
    // ����� � �������
    friend ostream& operator<<(ostream& os, const Square_matrix& mat){
        os << "(";
        if (size(mat.items) != 0){
            // ���������� �������� �������
            os.setf(ios::left); 
            for (int i = 0; i < mat.n; i += 1){
                os << "\n";
                for (int ii = 0; ii < mat.n; ii += 1){
                    os.width(mat.max_len_item); 
                    os << mat.items[i][ii] << " ";
                }
            }
            os << "\n";
        }
        os << ")";
        return os;
    }
    // ����������������
    void tranponate(){
        if (this->n == 0){
            throw runtime_error("������ ������ �� ���������������!");
        }
        // ������ ��� ����� ��������
        vector<vector<int>>new_items(n); 
        for (int i = 0; i < this->n; i += 1){
            // ������� ������� ��� �������
            new_items[i] = vector<int>(n);
            for (int ii = 0; ii < this->n; ii += 1){
                new_items[i][ii] = this->items[ii][i]; 
            }
        }
        this->items = new_items; 
    }
    // ����� ������������
    int found_det(){
        if (this->n == 0){
            throw runtime_error("������ ������ �� ���������������!");
        }
        int sum_plus = 0; 
        int sum_neg = 0; 
        for (int i = 0; i < this->n; i += 1){
            // ���������� ������� ���������
            sum_plus += (this->items[i][0]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][2]); 
            // ���������� �������� ���������
            sum_neg += (this->items[i][2]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][0]); 
        }
        return (sum_plus - sum_neg); 
    }
};

