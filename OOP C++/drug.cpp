#include "drug.h"
#include <stdexcept>

Drug::Drug() : type("ѕсиходелик"), weight(0.5), name("MDMA") {}

Drug::Drug(std::string const& t, double w, std::string const& n) : type(t), weight(w), name(n) {}

Drug::Drug(Drug const& other) : type(other.type), weight(other.weight), name(other.name) {}

Drug& Drug::operator=(Drug const& other) {
	type = other.type;
	weight = other.weight;
	name = other.name;
	return *this;
}


void Drug::setType(std::string type) {
	this->type = type;
}

void Drug::setName(std::string name) {
	this->name = name;
}

void Drug::setWeight(double weight) {
	this->weight = weight;
}

std::string Drug::getType() const {
	return type;
}

double Drug::getWeight() const {
	return weight;
}

std::string Drug::getName() const {
	return name;
}

