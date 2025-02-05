#pragma once

#include <string>

class StringWrapper
{
	class StringWrapperImpl {
		std::string& strref;
	public:
		// конструктор инициализирующий ссылку на строчку и позицией начала подстроки
		StringWrapperImpl();

		std::string operator[](int i) {
			// Использует позицию начала и переменную i в качестве позиции конца
			
		}
	};

	std::string str_;

public:
	StringWrapper(const char* str) : str_(str) {};

	StringWrapperImpl operator[](int i) {

	}
};

