#include "TALessThan.hpp"

TALessThan::TALessThan(const TAInt& lhs, const TAInt& rhs) : TABool(), m_lhs(lhs), m_rhs(rhs) {
}

TALessThan::TALessThan(const TADouble& lhs, const TADouble& rhs) : TABool(), m_lhs(lhs), m_rhs(rhs) {
}