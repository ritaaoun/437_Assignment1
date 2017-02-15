#ifndef TAPLUS_HPP
#define TAPLUS_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAPlus : public TANumber, public TAOperation {
public:
	TAPlus(const TAInt &lhs, const TAInt &rhs);
	TAPlus(const std::string &name, TAInt &lhs, const TAInt &rhs);
	TAPlus(const TADouble &lhs, const TADouble &rhs);
	TAPlus(const std::string &name, TADouble &lhs, const TADouble &rhs);
	void list() const;
	void evaluate();
	void printState() const;
	double getValue() const;
private:
	const TANumber &m_lhs, &m_rhs;
	double m_value;
};

#endif