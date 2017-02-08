#ifndef TAINT_HPP
#define TAINT_HPP

#include "TANumber.hpp"

class TAInt : public TANumber {
public:
	TAInt();
	TAInt(const std::string& name);
	void set(int value);
	virtual void list() const;
	static const TAInt ZERO;
private:
	int m_value;
};

#endif