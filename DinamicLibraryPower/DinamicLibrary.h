#pragma once
#include <iostream>

#ifdef DINAMICLIBRARYPOWER_EXPORTS
#define DINAMICLIBRARY_API __declspec(dllexport)
#else
#define DINAMICLIBRARY_API __declspec(dllimport)
#endif

namespace DinamicLibrary
{
	class Leaver
	{
	public:
		DINAMICLIBRARY_API
		void leave(std::string name);
	};
}
