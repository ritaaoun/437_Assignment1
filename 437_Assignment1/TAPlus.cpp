#include "TAPlus.hpp"

TAPlus::TAPlus(const TAInt& lhs, const TAInt& rhs) : TANumber(), m_lhs(lhs), m_rhs(rhs) {
	setType(int_t);
}

TAPlus::TAPlus(const TADouble& lhs, const TADouble& rhs) : TANumber(), m_lhs(lhs), m_rhs(rhs) {
	setType(double_t);
}