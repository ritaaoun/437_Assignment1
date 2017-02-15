#ifndef TAMINUS_HPP
#define TAMINUS_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAMinus : public TANumber, public TAOperation {
public:
	TAMinus(const TAInt &i);
	TAMinus(const std::string &name, const TAInt &i);
	TAMinus(const TADouble &d);
	TAMinus(const std::string &name, const TADouble &d);
	TAMinus(const TAInt &lhs, const TAInt &rhs);
	TAMinus(const std::string &name, const TAInt &lhs, const TAInt &rhs);
	TAMinus(const TADouble &lhs, const TADouble &rhs);
	TAMinus(const std::string &name, const TADouble &lhs, const TADouble &rhs);
	void list() const;
	void evaluate();
	void printState() const;
	double getValue() const;
private:
	const TANumber &m_lhs, &m_rhs;
	double m_value;
};

#endif