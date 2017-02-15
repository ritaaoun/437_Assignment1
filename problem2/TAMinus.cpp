#include "TAMinus.hpp"
#include <iostream>

TAMinus::TAMinus(const TAInt& i) : m_lhs(TAInt::ZERO), m_rhs(i) {
	setType(Type::intType);
}

TAMinus::TAMinus(const TADouble& d) : m_lhs(TADouble::ZERO), m_rhs(d) {
	setType(Type::doubleType);
}

TAMinus::TAMinus(const TAInt& lhs, const TAInt& rhs) : m_lhs(lhs), m_rhs(rhs) {
	setType(Type::intType);
}

TAMinus::TAMinus(const TADouble& lhs, const TADouble& rhs) : m_lhs(lhs), m_rhs(rhs) {
	setType(Type::doubleType);
}

void TAMinus::list() const {
	std::cout << "(- ";
	if (&m_lhs != &TAInt::ZERO && &m_lhs != &TADouble::ZERO) {
		// Print m_lhs if this object is x-y, not if it is -y only
		m_lhs.list();
		std::cout << " ";
	}
	m_rhs.list();
	std::cout << " )";
}

void TAMinus::evaluate() {
	m_value = m_rhs.getValue() - m_lhs.getValue();
}

void TAMinus::printState() const {
	if (TAOperation::getType() == Type::intType) {
		std::cout << (int)m_value;
	}
	else {
		std::cout << m_value;
	}
}