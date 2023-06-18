#include "DinamicLibrary.h"
#include <iostream>
namespace DinamicLibrary
{
	void Leaver::leave(std::string name)
	{
		std::cout << "Введите имя: ";
		std::cin >> name;
		std::cout << "До свидания, " << name << "!" << std::endl;
	}
}