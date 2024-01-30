



#include <iostream>
using namespace std;
#include <map> // Это чтобы словари работали
// #include <unordered_map> // Это чтобы работали словари без автоматической сортировки



int main(){
    system("chcp 65001");
    /*
    Конструкция создания словаря:
        map<"тип данных для ключа", "тип данных для значения"> "имя словаря"

    map - данный словарь сртерует свои ключи по возрастанию (автоматически)
    unordered_map - данный словарь не сортирует свои ключи
    */
    map <string, float> bad_products; // Создание пустого словаря

    map <string, float> products{
        pair <string, float> {"bread", 30.8},
        {"milk", 80},
    }; // Создание словаря с предварительной инициализацией

    // Добавление элементов в словарь
    products["apple"] = 67.9;
    products["ace-cream"] = 100;

    // Получение элементов по ключу
    cout << "apple = " << products["apple"] << "\n";

    // Перебор элементов словаря по циклу
    for ( auto& product : products){
        // product - элемент словаря (пара ключь -> значение)
        // product.first - ключь
        // product.second - значение по ключю (Аналог products[product.first])
        cout << product.first << "\t" << product.second << "\n";
    };
    /* Упрощенный вариант
    for ( auto& [product, price] : products){
        // product - ключь
        // price - значение по ключю (Аналог products[product])
        cout << product << "\t" << price << "\n";
    };*/

    // Удаление элементов
    products.erase("apple"); // Удаляет значение по ключу

    // Измерение длины словаря
    cout << "Количество пар в словаре: " << size(products) << "\n"; // Замер длины словаря
    // Аналог: products.size()
    cout << "Словарь пуст = " << (bool)empty(products) << "\n"; // Проверка словаря на пустоту
    // Аналог: products.empty()

    // Проверка на наличие ключа
    // count() - данный метод проверает наличие ключа в словаре
    cout << "Проверка наличия orange в словаре " << products.count("orange") << "\n"; 



}