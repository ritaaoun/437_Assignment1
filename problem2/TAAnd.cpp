#include "TAAnd.hpp"
#include <iostream>

TAAnd::TAAnd(const TABool& lhs, const TABool& rhs) : TABool(), m_lhs(lhs), m_rhs(rhs) {
}

void TAAnd::list() const {
	std::cout << "(& ";
	m_lhs.list();
	std::cout << " ";
	m_rhs.list();
	std::cout << " )";
}