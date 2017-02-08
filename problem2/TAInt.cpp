#include "TAInt.hpp"
#include <iostream>

TAInt::TAInt() : TANumber(), m_value() {
	setType(Type::int_t);
}

TAInt::TAInt(const std::string& name) : TANumber(name), m_value() {
	setType(Type::int_t);
}

void TAInt::set(int value) {
	m_value = value;
}

void TAInt::list() const {
	std::cout << getName();
}

const TAInt TAInt::ZERO("ZERO_INT");