


#include <iostream>

#include <filesystem> // Для работы с путями

using namespace std;
// using namespace filesystem; // для того чтобы не писать filesystem::


int main(int argc, char* argv[])
{
    system("chcp 65001"); // Устанавливаем кодировку utf-8 (65001)

    auto path = filesystem::current_path(); // получаем директорию в которой сейчас работает программа программы

    string path_new = "C:";
    filesystem::current_path(path_new); // устанавливаем директорию в которой будет работаеть программа


}