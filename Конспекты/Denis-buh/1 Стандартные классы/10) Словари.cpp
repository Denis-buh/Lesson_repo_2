



#include <iostream>
using namespace std;
#include <map> // ��� ����� ������� ��������
// #include <unordered_map> // ��� ����� �������� ������� ��� �������������� ����������



int main(){
    system("chcp 1251");
    /*
    ����������� �������� �������:
        map<"��� ������ ��� �����", "��� ������ ��� ��������"> "��� �������"

    map - ������ ������� �������� ���� ����� �� ����������� (�������������)
    unordered_map - ������ ������� �� ��������� ���� �����
    */
    map <string, float> bad_products; // �������� ������� �������

    map <string, float> products{
        pair <string, float> {"bread", 30.8},
        {"milk", 80},
    }; // �������� ������� � ��������������� ��������������

    // ���������� ��������� � �������
    products["apple"] = 67.9;
    products["ace-cream"] = 100;

    // ��������� ��������� �� �����
    cout << "apple = " << products["apple"] << "\n";

    // ������� ��������� ������� �� �����
    for ( auto& product : products){
        // product - ������� ������� (���� ����� -> ��������)
        // product.first - �����
        // product.second - �������� �� ����� (������ products[product.first])
        cout << product.first << "\t" << product.second << "\n";
    };
    /* ���������� �������
    for ( auto& [product, price] : products){
        // product - �����
        // price - �������� �� ����� (������ products[product])
        cout << product << "\t" << price << "\n";
    };*/

    // �������� ���������
    products.erase("apple"); // ������� �������� �� �����

    // ��������� ����� �������
    cout << "���������� ��� � �������: " << size(products) << "\n"; // ����� ����� �������
    // ������: products.size()
    cout << "������� ���� = " << (bool)empty(products) << "\n"; // �������� ������� �� �������
    // ������: products.empty()

    // �������� �� ������� �����
    // count() - ������ ����� ��������� ������� ����� � �������
    cout << "�������� ������� orange � ������� " << products.count("orange") << "\n"; 
    system("pause");
}