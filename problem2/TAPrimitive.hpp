#ifndef TAPRIMITIVE_HPP
#define TAPRIMITIVE_HPP

#include "Type.hpp"
#include <string>
#include <unordered_set>

class TAPrimitive {
public:
	Type type();
protected:
	TAPrimitive();
	TAPrimitive(const std::string& name);
	void setType(Type t);
	const std::string& getName() const;
private:
	Type m_type;
	std::string m_name;
	std::unordered_set<const std::string&> names;
};

#endif