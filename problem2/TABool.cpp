#include "TABool.hpp"
#include <iostream>

TABool::TABool() : TAPrimitive() {
	setType(Type::bool_t);
}

TABool::TABool(const std::string& name) : TAPrimitive(name), m_value() {
	setType(Type::bool_t);
}

void TABool::set(bool value) {
	m_value = value;
}

void TABool::list() const {
	std::cout << getName();
}
