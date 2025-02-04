//#include <iostream>
//#include "student.h"
//
//class Student {
//private:
//	std::string name;
//	unsigned age;
//
//public: //��� ��������� � ��������� �������, ���������� setter � getter
//	// �����������
//	Student() {
//		name = "anonim";
//		age = 35;
//	}
//
//	// ����������� �����������
//	Student(Student const & other) { // ����������� "const &"
//		name = other.name; // ��� ���� ����� ������� ��������� ��������
//		age = other.age;
//	}
//
//	// �������� ������������ �����������
//	Student& operator=(Student const& other) {
//		age = other.age;
//		name = other.name;
//		return *this;
//	}
//
//	void setName(std::string name) {
//		this->name = name;
//	}
//
//	void setAge(unsigned age) {
//		this->age = age;
//	}
//
//	unsigned getAge() const {
//		return age;
//	}
//
//	std::string getName() {
//		return name;
//	}
//};
//
//int main() {
//	Student stud;
//	//stud.age; // ������
//	stud.setName("Akim");
//	stud.setAge(23);
//
//	std::cout << stud.getName() << " " << stud.getAge() << "\n";
//
//
//	// ����������� �����������
//	Student stud2;
//	std::cout << stud2.getName() << " " << stud2.getAge() << "\n";
//
//	// ������������
//	stud2 = stud;
//	std::cout << stud.getName() << " " << stud.getAge() << "\n";
//	
//
//	return 0;
//}




#include <iostream>
#include "student.h"

int main() {
	Student stud("Akimchik", 1488);

	std::cout << stud.getName() << " " << stud.getAge() << "\n";


	// ����������� �����������
	Student stud2 = stud;
	std::cout << stud2.getName() << " " << stud2.getAge() << "\n";


	return 0;
}