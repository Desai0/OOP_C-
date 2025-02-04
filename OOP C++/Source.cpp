//#include <iostream>
//#include "student.h"
//
//class Student {
//private:
//	std::string name;
//	unsigned age;
//
//public: //дл€ обращение и изменени€ привата, используем setter и getter
//	//  онструктор
//	Student() {
//		name = "anonim";
//		age = 35;
//	}
//
//	//  онструктор копировани€
//	Student(Student const & other) { // об€зательно "const &"
//		name = other.name; // дл€ того чтобы плодить студентов например
//		age = other.age;
//	}
//
//	// ќператор присваивани€ копировани€
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
//	//stud.age; // нельз€
//	stud.setName("Akim");
//	stud.setAge(23);
//
//	std::cout << stud.getName() << " " << stud.getAge() << "\n";
//
//
//	//  онструктор копировани€
//	Student stud2;
//	std::cout << stud2.getName() << " " << stud2.getAge() << "\n";
//
//	// ѕрисваивание
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


	//  онструктор копировани€
	Student stud2 = stud;
	std::cout << stud2.getName() << " " << stud2.getAge() << "\n";


	return 0;
}