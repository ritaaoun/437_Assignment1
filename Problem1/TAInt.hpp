#ifndef TAINT_HPP
#define TAINT_HPP

#include "TANumber.hpp"

class TAInt : public TANumber {
public:
	TAInt();
	static const TAInt ZERO;
};

#endif