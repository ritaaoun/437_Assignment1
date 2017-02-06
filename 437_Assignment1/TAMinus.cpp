#include "TAMinus.hpp"

TAMinus::TAMinus(const TAInt& i) : TANumber(), m_lhs(TAInt::ZERO), m_rhs(i) {
	setType(int_t);
}

TAMinus::TAMinus(const TADouble& d) : TANumber(), m_lhs(TADouble::ZERO), m_rhs(d) {
	setType(double_t);
}

TAMinus::TAMinus(const TAInt& lhs, const TAInt& rhs) : TANumber(), m_lhs(lhs), m_rhs(rhs) {
	setType(int_t);
}

TAMinus::TAMinus(const TADouble& lhs, const TADouble& rhs) : TANumber(), m_lhs(lhs), m_rhs(rhs) {
	setType(double_t);
}