#include "DinamicLibrary.h"
#include <iostream>
namespace DinamicLibrary
{
	void Leaver::leave(std::string name)
	{
		std::cout << "������� ���: ";
		std::cin >> name;
		std::cout << "�� ��������, " << name << "!" << std::endl;
	}
}