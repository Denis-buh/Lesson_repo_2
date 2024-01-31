



#include <iostream>
using namespace std;
#include <list> // ��� ����� ������ ��������




int cout_call = 0;

void show_list(list <int> my_list){
    cout  << cout_call << " numbers = ";
    for (int n : my_list){
        cout << n << "\t";
    }
    cout << "\n";
    cout_call +=  1;
}

int main(){

    system("chcp 1251");

    /*
    ����������� �������� ������:
        list<"��� ������ ������� ������ ������� ������"> "��� ������" {"�������� ������"}

    */
    // �������� ������
    list <double> list1; // �������� ������� ������
    list <float> list2(5); // �������� ������ � ������ 5 � ���������� �� ���������
    list <int> list3(5, 2); // �������� ������ � ������ 5 � ���������� 2

    // ����������� ������
    list <int> list4(list3); // ����������� ������ list3
    // ������: list <int> list6 = list3;


    list <int> numbers = {1, 2, 3, 4, 5}; // �������� ������ � ��������������
    // ������: list <int> numbers{ 1, 2, 3, 4, 5 };

    // �������������� � ������ ������
    // size("��� ������") - ��������� ������� ���������� ���������
    cout << "����� ������ numbers = " << size(numbers) << "\n"; // ������: numbers.size()
    //  empty("��� ������") - ������ ����� ��������� ������ �� �������
    cout << "������ numbers ����: " << (bool)empty(numbers) << "\n"; // ������: numbers.empty()
    /* resize(n, value) - ������ ����� ��������� � ������ n ������ ���������. 
    ���� ������ �������� ������ ���������, �� �� ��������� �� ������ n ���������. 
    ���� ������ ������ ������ n, �� ����������� ����������� �������� � ���������������� ��������� �� ��������� (���� �� ������ value) */
    numbers.resize(3); // ������� ������ ������ �� 3 ���������


    // ��������� ��������� �� ������
    // ����� front() ��������� ������ ������� ������
    cout << "������ ������� ������: " << numbers.front() << "\n";
    // ����� back() ��������� ��������� ������� ������
    cout << "��������� ������� ������: " << numbers.back() << "\n";
    // ������� ��������� ������ � ����� � ������� ��������
    cout << "numbers = ";
    for (int n : numbers){
        cout << n << "\t";
    }
    cout << "\n";
    // ������� � ������� ����������
    cout << "numbers = ";
    for (auto iter = numbers.begin(); iter != numbers.end(); iter++){
        // numbers.begin() - ������ �� ������ ������
        // numbers.end() - ������ �� ����� ������
        cout << *iter << "\t";
    }
    cout << "\n";
    



    // ��������� ��������� ������
    // assign(il) ����� �������� ���������� ������ ���������� �� ������ il
    numbers.assign({2, 8, 4, 9});
    show_list(numbers);

    // assign(n, value) ����� �������� ���������� ������  n ����������, ������� ����� �������� value
    numbers.assign(5, 9);
    show_list(numbers);

    // assign(begin, end) ����� �������� ���������� ������ ���������� �� ���������, �� ������ � ����� �������� ��������� ��������� begin � end
    numbers.assign(list3.begin(), list3.end()) ;
    show_list(numbers);

    // swap() ����� ���������� ���������� ��� ������ (�������� ���� � ������� 2 ���������� ���� ������)
    list <int> new_list = {2, 4, 7};
    numbers.swap(new_list);
    show_list(numbers);


    // ���������� ��������� � ������
    // push_back(val) ������ ����� ��������� �������� val � ����� ������
    numbers.push_back(6); 
    // push_front(val) ������ ����� ��������� �������� val � ������ ������
    // emplace_back(val) ������ ����� ��������� �������� val � ����� ������
    // emplace_front(val) ������ ����� ��������� �������� val � ������ ������
    show_list(numbers);

    // emplace(pos, val) ������ ����� ��������� ������� val �� �������, �� ������� ��������� �������� pos. ���������� �������� �� ����������� �������
    auto iter = numbers.begin(); // �������� ��������� �� ������ ������� ������
    numbers.emplace(iter, 8);
    // insert(pos, val) ������ ����� ��������� ������� val �� �������, �� ������� ��������� �������� pos. ���������� �������� �� ����������� �������
    // insert(pos, n, val) ������ ����� ��������� n ��������� val ������� � �������, �� ������� ��������� �������� pos. ���������� �������� �� ������ ����������� �������. ���� n = 0, �� ������������ �������� pos.
    /* insert(pos, begin, end) ������ ����� ��������� ������� � �������, �� ������� ��������� �������� pos, �������� �� ������� ���������� �� ��������� ����� ����������� begin � end. 
        ���������� �������� �� ������ ����������� �������. ���� ����� ����������� begin � end ��� ���������, �� ������������ �������� pos.*/
    /* insert(pos, values) ������ ����� ��������� ������ �������� values ������� � �������, �� ������� ��������� �������� pos. 
        ���������� �������� �� ������ ����������� �������. ���� values �� �������� ���������, �� ������������ �������� pos.*/
    show_list(numbers);



    // �������� ��������� �� ������
    // pop_back() ������ ����� ������� ��������� �������
    numbers.pop_back();
    // pop_front() ������ ����� ������� ������ �������
    show_list(numbers);

    /* erase(p) ������ ����� ������� �������, �� ������� ��������� �������� p. 
        ���������� �������� �� �������, ��������� ����� ����������, ��� �� ����� ����������, ���� ������ ��������� �������*/
    auto iter1 = numbers.begin(); // ��������� �� ������ �������
    numbers.erase(iter1); // ������� ������ �������
    /*erase(begin, end): ������� �������� �� ���������, �� ������ � ����� �������� ��������� ��������� begin � end.
        ���������� �������� �� �������, ��������� ����� ���������� ����������, ��� �� ����� ����������, ���� ������ ��������� �������*/
    show_list(numbers);

    // clear() ������ �����  ������� ��� ��������
    numbers.clear();
    show_list(numbers);
    system("pause");
}