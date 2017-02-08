#include "TAPrimitive.hpp"
#include <stdexcept>

Type TAPrimitive::type() {
	return m_type;
}

TAPrimitive::TAPrimitive() : m_name() {
}

TAPrimitive::TAPrimitive(const std::string& name) : m_name(name) {
	auto it = names.find(name);
	if (it == names.end) {
		names.insert(name);
	}
	else {
		throw std::invalid_argument("There is already a variable called: " + name);
	}
}

void TAPrimitive::setType(Type t) {
	m_type = t;
}

const std::string& TAPrimitive::getName() const {
	return m_name;
}