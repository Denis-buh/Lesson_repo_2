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
    bool operator ==(vectr& addit_vector)
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
    my3Dvectr() { this->i = 0; this->j = 0; this->k = 0; }//�� �����.
    my3Dvectr(const my3Dvectr& obj)//�����.
    {
        this->i = obj.i;
        this->j = obj.j;
        this->k = obj.k;
    }
    my3Dvectr(float _i, float _j, float _k)//� �����.
    {
        this->i = _i; this->j = _j; this->k = _k;
    }
    bool operator ==(my3Dvectr& addit_vector)//��������� ��������
    {
        if ((i == addit_vector.i) && (j == addit_vector.j) && (k == addit_vector.k))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator !=(const my3Dvectr& obj)//��������� ����� "�������" ��������
    {
        if ((i != obj.i) && (j != obj.j) && (k != obj.k))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    my3Dvectr operator +(my3Dvectr added_one)//�������� ��������
    {
        my3Dvectr result;
        result.i = this->i + added_one.i;
        result.j = this->j + added_one.j;
        result.k = this->k + added_one.k;
        return result;
    }
    my3Dvectr operator--(int obj)//��������� ��������� �� �������
    {
        my3Dvectr temp = (*this);
        temp.i--;
        temp.j--;
        temp.k--;
        return temp;
    }
    my3Dvectr operator -(my3Dvectr minus_one)//��������� ��������
    {
        my3Dvectr result;
        result.i = this->i - minus_one.i;
        result.j = this->j - minus_one.j;
        result.k = this->k - minus_one.k;
        return result;
    }
    my3Dvectr operator *=(my3Dvectr multi_one)//��������� ������������ ��������
    {
        this->i = (this->j * multi_one.k - this->k * multi_one.j);
        this->j = (this->i * multi_one.k - this->k * multi_one.i);
        this->k = (this->i * multi_one.j - this->j * multi_one.i);
        return *this;
    }

    void print_3dvectr()//����� ��������
    {
        cout << "i = " << i << " j = " << j << " k = " << k << "\n";
    }
};
