#include "TAMultiply.hpp"
#include <iostream>

TAMultiply::TAMultiply(const TAInt& lhs, const TAInt& rhs) : m_lhs(lhs), m_rhs(rhs) {
	setType(Type::intType);
}

TAMultiply::TAMultiply(const TADouble& lhs, const TADouble& rhs) : m_lhs(lhs), m_rhs(rhs) {
	setType(Type::doubleType);
}

void TAMultiply::list() const {
	std::cout << "(* ";
	m_lhs.list();
	std::cout << " ";
	m_rhs.list();
	std::cout << " )";
}

void TAMultiply::evaluate() {
	m_value = m_rhs.getValue() * m_lhs.getValue();
}

void TAMultiply::printState() const {
	if (TAOperation::getType() == Type::intType) {
		std::cout << (int)m_value;
	}
	else {
		std::cout << m_value;
	}
}