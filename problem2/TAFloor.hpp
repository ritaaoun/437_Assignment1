#ifndef TAFLOOR_HPP
#define TAFLOOR_HPP

#include "TAInt.hpp"
#include "TAOperation.hpp"
#include "TADouble.hpp"

class TAFloor : public TAInt, public TAOperation {
public:
	TAFloor(const TADouble& d);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TAInt::set;
	const TADouble &m_d;
};

#endif