#ifndef TAINT_HPP
#define TAINT_HPP

#include "TANumber.hpp"

class TAInt : public TANumber {
public:
	TAInt(const std::string &name);
	void set(int value);
	double getValue() const;
	static const TAInt ZERO;
protected:
	TAInt();
private:
	TAInt(const std::string &name, int value);
	int m_value;
};

#endif