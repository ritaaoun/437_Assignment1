#include "TAOr.hpp"
#include <iostream>

TAOr::TAOr(const TABool& lhs, const TABool& rhs) : TABool(), m_lhs(lhs), m_rhs(rhs) {
}

void TAOr::list() const {
	std::cout << "(| ";
	m_lhs.list();
	std::cout << " ";
	m_rhs.list();
	std::cout << " )";
}

void TAOr::evaluate() {
	TABool::set(m_rhs.getValue() || m_lhs.getValue());
}

void TAOr::printState() const {
	if (TABool::getValue()) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}
}