



/*
������� ������� - ���������� ������ � �������� ��������� ��� ����������� ������/�������
��������������� - ������� ��������� ������������ ������������ ������

������:
    template <��������� ������� ����� �������> class "��� ������"{"���� ������"}

*/


#include <iostream>

using namespace std;

template<class type> class Point{
private:
    type x;
    type y;
public:
    Point(type x, type y){
        this->x = x;
        this->y = y;
    }
};


int main(){
    system("chcp 1251");

    Point<int> obj(4, 6);
    Point<float> obj(4.9, 6.5);

    system("pause");
    return 0; 
}