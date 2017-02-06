#ifndef TAPRIMITIVE_HPP
#define TAPRIMITIVE_HPP

#include "Type.hpp"

class TAPrimitive {
public:
	Type type();
protected:
	TAPrimitive();
	void setType(Type t);
private:
	Type m_type;
};

#endif