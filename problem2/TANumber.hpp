#ifndef TANUMBER_HPP
#define TANUMBER_HPP

#include "TAPrimitive.hpp"

class TANumber : public TAPrimitive {
protected:
	TANumber();
	TANumber(const std::string& name);
};

#endif