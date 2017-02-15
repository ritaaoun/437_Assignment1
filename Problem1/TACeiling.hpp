#ifndef TACEILING_HPP
#define TACEILING_HPP

#include "TAInt.hpp"
#include "TAOperation.hpp"
#include "TADouble.hpp"

class TACeiling : public TAInt, public TAOperation {
public:
	TACeiling(const TADouble& d);
private:
	const TADouble& m_d;
};

#endif