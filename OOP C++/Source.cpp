#include <iostream>
#include "student.h"
#include "strwrp.h"
#include "drug.h"

int main() {
	setlocale(0, "");
	Student stud("Akimchik", 1488);

	std::cout << stud.getName() << " " << stud.getAge() << "\n";


	// Конструктор копирования
	Student stud2 = stud;
	std::cout << stud2.getName() << " " << stud2.getAge() << "\n";

	StringWrapper str("Sfsefoirskjeisfawd");

	// substr(1, 10);
	std::string subs = str[1][10];
	std::cout << subs << "\n\n";



	Drug nark("Синтетический", 0.69, "Альфа");

	std::cout << nark.getType() << " " << nark.getWeight() << " " << nark.getName() << "\n";

	Drug nark2 = nark;
	std::cout << nark2.getType() << " " << nark2.getWeight() << " " << nark2.getName() << "\n";

	return 0;
}



//#include <iostream> //
//
//class Student {
//private:
//	std::string name;
//	unsigned age;
//
//public: //для обращение и изменения привата, используем setter и getter
//	// Конструктор
//	Student() {
//		name = "anonim";
//		age = 35;
//	}
//
//	// Конструктор копирования
//	Student(Student const & other) { // обязательно "const &"
//		name = other.name; // для того чтобы плодить студентов например
//		age = other.age;
//	}
//
//	// Оператор присваивания копирования
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
//	//stud.age; // нельзя
//	stud.setName("Akim");
//	stud.setAge(23);
//
//	std::cout << stud.getName() << " " << stud.getAge() << "\n";
//
//
//	// Конструктор копирования
//	Student stud2;
//	std::cout << stud2.getName() << " " << stud2.getAge() << "\n";
//
//	// Присваивание
//	stud2 = stud;
//	std::cout << stud.getName() << " " << stud.getAge() << "\n";
//	
//
//	return 0;
//}