#include "TADouble.hpp"
#include <iostream>

TADouble::TADouble() : TANumber(), m_value() {
	setType(Type::double_t);
}

TADouble::TADouble(const std::string& name) : TANumber(name), m_value() {
	setType(Type::double_t);
}

void TADouble::set(double value) {
	m_value = value;
}

void TADouble::list() const {
	std::cout << getName();
}

const TADouble TADouble::ZERO("ZERO_DOUBLE");