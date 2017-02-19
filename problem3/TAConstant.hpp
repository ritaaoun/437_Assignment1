#ifndef TACONSTANT_HPP
#define TACONSTANT_HPP

#include "TAInt.hpp"

class TAConstant : public TAInt {
public:
	TAConstant(int value);
private:
	using TAInt::set;
};

#endif