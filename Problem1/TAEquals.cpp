#include "TAEquals.hpp"

TAEquals::TAEquals(const TAInt& lhs, const TAInt& rhs) : TABool(), m_lhs(lhs), m_rhs(rhs) {
}

TAEquals::TAEquals(const TADouble& lhs, const TADouble& rhs) : TABool(), m_lhs(lhs), m_rhs(rhs) {
}