



#include <iostream>
#include <stdexcept> // ��� ����� ���� ����������� �������� ����������
#include <vector>


using namespace std;


class Square_matrix{
private:
    // ������ �������
    unsigned int n = 0;
    // ������ ��������� �������
    vector<vector<float>> items = {};
public:
    // ������������
    // �� ���������
    Square_matrix(){
        // ������������� ����������� ��������
        this->items = {};
        this->n = 0; 
    }
    // � ��������������
    Square_matrix(vector<vector<float>> items, unsigned int n = 0){
        // ������������� �������� ��������
        if (n == 0){
            n = size(items); 
        }
        this->set_inform(n, items); 
    }
    // �����������
    Square_matrix(const Square_matrix& obj){
        // ������������� �������� ��������
        this->set_inform(obj.n,  obj.items); 
    }

    // ������
    // ���������� �������
    void set_inform(unsigned int n, vector<vector<float>> items){
        for (int i = 0; i < n; i += 1){
            if (n != size(items[i])){
                throw invalid_argument("���������� ����� �� ��������� � ����������� ��������!");
            }
        }
        // ������ �������
        this->items.clear();
        this->n = n; 
        this->items = items; 
    }
    // ����� � �������
    void print(){
        cout << "(";
        if (size(this->items) != 0){
            // ���������� �������� �������
            for (int i = 0; i < this->n; i += 1){
                cout << "\n";
                for (int ii = 0; ii < this->n; ii += 1){
                    cout << this->items[i][ii] << " ";
                }
            }
            cout << "\n";
        }
        cout << ")\n";
    }
    // ����������������
    void tranponate(){
        if (this->n == 0){
            throw runtime_error("������ ������ �� ���������������!");
        }
        // ������ ��� ����� ��������
        vector<vector<float>>new_items(n); 
        for (int i = 0; i < this->n; i += 1){
            // ������� ������� ��� �������
            new_items[i] = vector<float>(n);
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
        float sum_plus = 0; 
        float sum_neg = 0; 
        for (int i = 0; i < this->n; i += 1){
            // ���������� ������� ���������
            sum_plus += (this->items[i][0]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][2]); 
            // ���������� �������� ���������
            sum_neg += (this->items[i][2]) * (this->items[(i + 1) % 3][1]) * (this->items[(i + 2) % 3][0]); 
        }
        return (sum_plus - sum_neg); 
    }
    // �������������
    ~Square_matrix(){
        // ������ �������
        this->items.clear();
        this->n = 0; 
    }
};

