#include "TAPrimitive.hpp"
#include <stdexcept>
#include <iostream>

Type TAPrimitive::type() {
	return m_type;
}

TAPrimitive::TAPrimitive() : m_name() {
}

TAPrimitive::TAPrimitive(const std::string& name) : m_name(name) {
	//auto it = m_names.find(name);
	//if (it == m_names.end) {
	//	m_names.insert(name);
	//}
	//else {
	//	throw std::invalid_argument("There is already a variable called: " + name);
	//}
}

void TAPrimitive::setType(Type t) {
	m_type = t;
}

void TAPrimitive::list() const {
	std::cout << m_name;
}