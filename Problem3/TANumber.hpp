#ifndef TANUMBER_HPP
#define TANUMBER_HPP

#include "TAPrimitive.hpp"

class TANumber : public TAPrimitive {
public:
	virtual double getValue() const = 0;
protected:
	TANumber();
	TANumber(const std::string &name);
};

#endif