#ifndef TAFLOOR_HPP
#define TAFLOOR_HPP

#include "TAInt.hpp"
#include "TAOperation.hpp"
#include "TADouble.hpp"

class TAFloor : public TAInt, public TAOperation {
public:
	TAFloor(const TADouble& d);
private:
	const TADouble& m_d;
};

#endif