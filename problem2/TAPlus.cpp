#include "TAPlus.hpp"
#include <iostream>

TAPlus::TAPlus(const TAInt& lhs, const TAInt& rhs) : m_lhs(lhs), m_rhs(rhs), m_value() {
	setType(Type::intType);
}

TAPlus::TAPlus(const TADouble& lhs, const TADouble& rhs) : m_lhs(lhs), m_rhs(rhs), m_value() {
	setType(Type::doubleType);
}

void TAPlus::list() const {
	std::cout << "(+ ";
	m_lhs.list();
	std::cout << " ";
	m_rhs.list();
	std::cout << " )";
}

void TAPlus::evaluate() {
	m_value = m_rhs.getValue() + m_lhs.getValue();
}

void TAPlus::printState() const {
	if (TAOperation::getType() == Type::intType) {
		std::cout << (int)m_value;
	}
	else {
		std::cout << m_value;
	}
}