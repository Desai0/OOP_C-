#pragma once

#include <string>

class StringWrapper
{
	class StringWrapperImpl {
		std::string& strref;
	public:
		// ����������� ���������������� ������ �� ������� � �������� ������ ���������
		StringWrapperImpl();

		std::string operator[](int i) {
			// ���������� ������� ������ � ���������� i � �������� ������� �����
			
		}
	};

	std::string str_;

public:
	StringWrapper(const char* str) : str_(str) {};

	StringWrapperImpl operator[](int i) {

	}
};

