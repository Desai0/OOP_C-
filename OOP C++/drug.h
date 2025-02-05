#pragma once

#ifndef DRUG_H
#define DRUG_H

#include <string>
#include <list>

class Drug {
private:
	std::string type;
	double weight;
	std::string name;

	Drug();
public: //��� ��������� � ��������� �������, ���������� setter � getter

	// ����������� �����������
	Drug(std::string const& t, double w = 18, std::string const& n="dd"); // ��� ���������� ����������� �����

	// ����������� �����������
	Drug(Drug const& other);

	// �������� ������������ �����������
	Drug& operator=(Drug const& other);

	void setType(std::string type);
	void setWeight(double weight);
	void setName(std::string name);
	std::string getType() const;
	double getWeight() const;
	std::string getName() const;
};

#endif // STUDENT_H