#include "TAPair.hpp"

TAPair::TAPair(const TAPrimitive &lhs, const TAPrimitive &rhs) : TAPrimitive(), m_lhs(lhs), m_rhs(rhs) {
	TAPrimitive::setType(Type::pairType);
}


TAPair::TAPair(const std::string &name, const TAPrimitive &lhs, const TAPrimitive &rhs) : TAPrimitive(name), m_lhs(lhs), m_rhs(rhs) {
	TAPrimitive::setType(Type::pairType);
}

TAPrimitive& TAPair::first() {
	return m_lhs;
}

TAPrimitive& TAPair::next() {
	return m_rhs;
}