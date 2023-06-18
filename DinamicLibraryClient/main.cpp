#include <iostream>
#include <DinamicLibrary.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    DinamicLibrary::Leaver leaver;
    leaver.leave(name);
    return 0;
}