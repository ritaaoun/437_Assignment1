#ifndef TAOPERATION_HPP
#define TAOPERATION_HPP

#include "Type.hpp"

class TAOperation {
public:
	//virtual void evaluate() = 0;
	//virtual void printState() = 0;
	void setType(Type type);
	Type getType() const;
private:
	Type m_type;
};

#endif