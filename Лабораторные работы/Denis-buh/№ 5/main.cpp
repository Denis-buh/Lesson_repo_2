



#include <iostream>
#include <vector>
#include "modle.cpp"

using namespace std;

void print(vector<Tree>& trees){
    for (int i = 0; i < trees.size(); i += 1){
        trees[i].print(); 
        cout << "\n";
    }
}
// ����������
void sort(vector<Tree>& trees){
    int len = trees.size();
    for (int i = 0; i < len; i += 1){
        // ���� ��� ����������
        if (trees[i].get_type()) {continue;}
        int temp = i; 
        for (int ii = i + 1; ii < len; ii += 1){
            if (trees[temp] < trees[ii]){temp = ii;}
        }
        if (i != temp){
            Tree temp_tree = trees[i];
            trees[i] = trees[temp];
            trees[temp] = temp_tree; 
        }
    }
}

//#define CONST_MODE


#ifdef CONST_MODE
int main(){
    system("chcp 1251");
    // ��������� �������� ������
    const Plant* obj; 
    cout << "C������� ������������ ������" << "\n";
    const Flower flow("������", "������������", "���-��", "����������", 2);
    obj = &flow; 

    obj->print();

    cout << "\n\nC������� ������������ �����" << "\n";
    const Vegetable veg("�����", "��������������", "���-��", 5, 3); 
    obj = &veg; 

    obj->print();


    cout << "\n\n� ������� ������������ ������" << "\n";
    const Tree my_true("������", "���", "���-��", true, 3000, 100.9); 
    obj = &my_true; 

    obj->print();

    system("pause");
    return 0; 
}
#else

int main(){
    system("chcp 1251");
    // ��������� �������� ������
    Plant* obj; 
    cout << "C������� ������" << "\n";
    Flower flow("������", "������������", "���-��", "����������", 2);
    obj = &flow; 

    obj->print();

    cout << "\n\nC������� �����" << "\n";
    Vegetable veg("�����", "��������������", "���-��", 5, 3); 
    obj = &veg; 

    obj->print();


    cout << "\n\n� ������� ������" << "\n";
    Tree my_true("������", "���", "���-��", true, 3000, 100.9); 
    obj = &my_true; 

    obj->print();

    system("pause");

    vector<Tree> trees;
    trees.push_back(Tree("������1", "���1", "���-��1", false, 3000, 100.9));
    trees.push_back(Tree("������2", "���2", "���-��2", true, 597, 5.9));
    trees.push_back(Tree("������3", "���3", "���-��3", false, 345, 6.9));
    trees.push_back(Tree("������4", "���4", "���-��4", true, 65, 67.9));
    trees.push_back(Tree("������5", "���5", "���-��5", false, 75, 900.9));
    trees.push_back(Tree("������6", "���6", "���-��6", true, 98, 98.9));
    system("cls");
    sort(trees);
    print(trees); 

    system("pause");
    return 0; 
}

#endif 