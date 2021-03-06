#include "TAInt.hpp"
#include <iostream>

TAInt::TAInt() : TANumber(), m_value() {
	setType(Type::intType);
}

TAInt::TAInt(const std::string& name) : TANumber(name), m_value() {
	setType(Type::intType);
}

void TAInt::set(int value) {
	m_value = value;
}

double TAInt::getValue() const {
	return m_value;
}

const TAInt TAInt::ZERO("ZERO_INT",0);

TAInt::TAInt(const std::string& name, int value) : TANumber(name), m_value(value) {
	setType(Type::intType);
}