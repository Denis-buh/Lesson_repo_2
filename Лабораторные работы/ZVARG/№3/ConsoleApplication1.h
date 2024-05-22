#include <iostream>
#include <cmath>

using namespace std;

class vectr
{
protected:
    float i, j;
public:
    vectr() { this->i = 0; this->j = 0; }//�� �����.
    vectr(float _i, float _j = 1) {//� ����������� (��. �������������) �� �����. 
        i = _i; j = _j;
    }
    vectr(const vectr& obj)//�����������
    {
        this->i = obj.i;
        this->j = obj.j;
    }

    void print_vector()
    {
        cout << "i = " << i << " j = " << j << " ���� ����� �������� � OX = " << find_angle() << "\n";
    }
    float find_angle()
    {
        float angle = acos(i / sqrt(i * i + j * j));
        return angle;
    }
    bool comparison(vectr& addit_vector)
    {
        if ((i == addit_vector.i) && (j == addit_vector.j))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~vectr()
    {}//����������
};

class my3Dvectr : public vectr
{
private: float k;
public:
    my3Dvectr(): vectr(){}//�� �����.
    my3Dvectr(float _i, float _j, float _k):vectr(_i, _j)//� �����.
    {
        this->k = _k;
    }
    my3Dvectr(const my3Dvectr& obj) : vectr(obj.i, obj.j){//�����.
        this->k = obj.k;
    }
    my3Dvectr plus(my3Dvectr added_one)//�������� ��������
    {
        my3Dvectr result;
        result.i = this->i + added_one.i;
        result.j = this->j + added_one.j;
        result.k = this->k + added_one.k;
        return result;
    }
    my3Dvectr minus(my3Dvectr minus_one)//��������� ��������
    {
        my3Dvectr result;
        result.i = this->i - minus_one.i;
        result.j = this->j - minus_one.j;
        result.k = this->k - minus_one.k;
        return result;
    }
    void print_3dvectr()//����� ��������
    {
        cout << "i = " << i << " j = " << j << " k = " << k << "\n";
    }
};
