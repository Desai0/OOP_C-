#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
	std::string name;
	unsigned age;

	Student();
public: //��� ��������� � ��������� �������, ���������� setter � getter

	// ����������� �����������
	Student(std::string const& n, unsigned a = 18); // ��� ���������� ����������� �����

	// �������� ������������ �����������
	Student(Student const& other);

	Student& operator=(Student const& other);

	void setName(std::string name);

	void setAge(unsigned age);

	unsigned getAge() const;

	std::string getName() const;
};

#endif // STUDENT_H