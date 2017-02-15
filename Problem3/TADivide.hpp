#ifndef TADIVIDE_HPP
#define TADIVIDE_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TADivide : public TANumber, public TAOperation {
public:
	TADivide(const TAInt &lhs, const TAInt &rhs);
	TADivide(const std::string &name, const TAInt &lhs, const TAInt &rhs);
	TADivide(const TADouble &lhs, const TADouble &rhs);
	TADivide(const std::string &name, const TADouble &lhs, const TADouble &rhs);
	void list() const;
	void evaluate();
	void printState() const;
	double getValue() const;
private:
	const TANumber &m_lhs, &m_rhs;
	double m_value;
};

#endif