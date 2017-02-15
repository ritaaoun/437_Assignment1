#include "TAMultiply.hpp"

TAMultiply::TAMultiply(const TAInt& lhs, const TAInt& rhs) : TANumber(), m_lhs(lhs), m_rhs(rhs) {
	setType(int_t);
}

TAMultiply::TAMultiply(const TADouble& lhs, const TADouble& rhs) : TANumber(), m_lhs(lhs), m_rhs(rhs) {
	setType(double_t);
}