#ifndef TAMULTIPLY_HPP
#define TAMULTIPLY_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAMultiply : public TANumber, public TAOperation {
public:
	TAMultiply(const TAInt &lhs, const TAInt &rhs);
	TAMultiply(const std::string &name, const TAInt &lhs, const TAInt &rhs);
	TAMultiply(const TADouble &lhs, const TADouble &rhs);
	TAMultiply(const std::string &name, const TADouble &lhs, const TADouble &rhs);
	void list() const;
	void evaluate();
	void printState() const;
	double getValue() const;
private:
	const TANumber &m_lhs, &m_rhs;
	double m_value;
};

#endif