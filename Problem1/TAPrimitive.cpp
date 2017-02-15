#include "TAPrimitive.hpp"

Type TAPrimitive::type() {
	return m_type;
}

TAPrimitive::TAPrimitive() {
}

void TAPrimitive::setType(Type t) {
	m_type = t;
}