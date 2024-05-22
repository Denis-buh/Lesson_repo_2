



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
// Сортировка
void sort(vector<Tree>& trees){
    int len = trees.size();
    for (int i = 0; i < len; i += 1){
        // Если уже лиственное
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
    // Указатель базового класса
    const Plant* obj; 
    cout << "Cоздание константного цветка" << "\n";
    const Flower flow("Цветок", "обыкновенный", "где-то", "фиолетовый", 2);
    obj = &flow; 

    obj->print();

    cout << "\n\nCоздание константного овоща" << "\n";
    const Vegetable veg("Овощь", "необыкновенный", "где-то", 5, 3); 
    obj = &veg; 

    obj->print();


    cout << "\n\nЯ посадил константного дерево" << "\n";
    const Tree my_true("Дерево", "дуб", "где-то", true, 3000, 100.9); 
    obj = &my_true; 

    obj->print();

    system("pause");
    return 0; 
}
#else

int main(){
    system("chcp 1251");
    // Указатель базового класса
    Plant* obj; 
    cout << "Cоздание цветка" << "\n";
    Flower flow("Цветок", "обыкновенный", "где-то", "фиолетовый", 2);
    obj = &flow; 

    obj->print();

    cout << "\n\nCоздание овоща" << "\n";
    Vegetable veg("Овощь", "необыкновенный", "где-то", 5, 3); 
    obj = &veg; 

    obj->print();


    cout << "\n\nЯ посадил дерево" << "\n";
    Tree my_true("Дерево", "дуб", "где-то", true, 3000, 100.9); 
    obj = &my_true; 

    obj->print();

    system("pause");

    vector<Tree> trees;
    trees.push_back(Tree("Дерево1", "дуб1", "где-то1", false, 3000, 100.9));
    trees.push_back(Tree("Дерево2", "дуб2", "где-то2", true, 597, 5.9));
    trees.push_back(Tree("Дерево3", "дуб3", "где-то3", false, 345, 6.9));
    trees.push_back(Tree("Дерево4", "дуб4", "где-то4", true, 65, 67.9));
    trees.push_back(Tree("Дерево5", "дуб5", "где-то5", false, 75, 900.9));
    trees.push_back(Tree("Дерево6", "дуб6", "где-то6", true, 98, 98.9));
    system("cls");
    sort(trees);
    print(trees); 

    system("pause");
    return 0; 
}

#endif 