#include "TACeiling.hpp"
#include <iostream>

TACeiling::TACeiling(const TADouble& d) : TAInt(), m_d(d) {
}

void TACeiling::list() const {
	std::cout << "(ceiling ";
	m_d.list();
	std::cout << " )";
}