#ifndef TACEILING_HPP
#define TACEILING_HPP

#include "TAInt.hpp"
#include "TAOperation.hpp"
#include "TADouble.hpp"

class TACeiling : public TAInt, public TAOperation {
public:
	TACeiling(const TADouble& d);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TAInt::set;
	const TADouble& m_d;
};

#endif