#include "TAPrimitive.hpp"
#include <stdexcept>
#include <iostream>

Type TAPrimitive::type() const {
	return m_type;
}

void TAPrimitive::list() const {
	std::cout << m_name;
}

TAPrimitive::TAPrimitive() : m_name() {
}

TAPrimitive::TAPrimitive(const std::string &name) : m_name(name) {
	if (m_names.count(name) > 0) {
		throw std::invalid_argument("There is already a variable called: " + name);
	}
	else {
		m_names.insert(name);
	}
}

void TAPrimitive::setType(Type t) {
	m_type = t;
}

void TAPrimitive::set(double d) {
}

std::unordered_set<std::string> TAPrimitive::m_names;