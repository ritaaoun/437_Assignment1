#ifndef TADOUBLE_HPP
#define TADOUBLE_HPP

#include "TANumber.hpp"

class TADouble : public TANumber {
public:
	TADouble();
	TADouble(const std::string& name);
	void set(double value);
	double getValue() const;
	static const TADouble ZERO;
private:
	TADouble(const std::string& name, double value);
	double m_value;
};

#endif