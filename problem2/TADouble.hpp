#ifndef TADOUBLE_HPP
#define TADOUBLE_HPP

#include "TANumber.hpp"

class TADouble : public TANumber {
public:
	TADouble();
	TADouble(const std::string& name);
	void set(double value);
	virtual void list() const;
	static const TADouble ZERO;
private:
	double m_value;
};

#endif