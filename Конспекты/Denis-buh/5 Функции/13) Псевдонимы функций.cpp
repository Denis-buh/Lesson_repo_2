



#include <iostream>
using namespace std;

/* �������� ���������� ��� �������
using "��� ����������" = "��� ������ ������� ������ ��������� �������" (*)("��������� �������")
*/
using fun = int (*)(int a, int b); // �������� ���������� ��� �������


int sum(int a, int b){
    return a + b;
}


int ras(fun my_fun, int a, int b){
    /* ������ �������� - ��������� ������� */
    int res =  my_fun(a, b);
    cout << "��������� ���������� ������� ����������: " << res << "\n";
    return res - b;
}

int main()
{
    system("chcp 1251");
    int res = ras(sum, 4, 5);
    cout << "3 + 5 = " << res << "\n";
    /*���� ������� ����� �������� � ���������:
    int (*fun)(int a, int b); 
    fun = sum;

    cout << "3 + 5 = " << ras(fun, 4, 5) << "\n";
    */

    system("pause");
}