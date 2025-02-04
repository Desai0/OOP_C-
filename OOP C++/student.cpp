#include "student.h"

Student::Student() : name("Anonim"), age(40) {}

Student::Student(std::string const& n, unsigned a) : name(n), age(a) {}

Student::Student(Student const& other) : name(other.name), age(other.age) {}

Student& Student::operator=(Student const& other) {
	age = other.age;
	name = other.name;
	return *this;
}

void Student::setName(std::string name) {
	this->name = name;
}

void Student::setAge(unsigned age) {
	this->age = age;
}

unsigned Student:: getAge() const {
	return age;
}

std::string Student::getName() const {
	return name;
}