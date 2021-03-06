#ifndef TAMORETHAN_HPP
#define TAMORETHAN_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAMoreThan : public TABool, public TAOperation {
public:
	// TAPlus constructors take and save two references to numbers: either two TAInt or two TADouble objects
	// Names are optional
	TAMoreThan(const TAInt &lhs, const TAInt &rhs);
	TAMoreThan(const std::string &name, const TAInt &lhs, const TAInt &rhs);
	TAMoreThan(const TADouble &lhs, const TADouble &rhs);
	TAMoreThan(const std::string &name, const TADouble &lhs, const TADouble &rhs);

	// This function prints information about the operation and the two operands
	void list() const;

	// This function compares the two numbers declared in the constructor, and saves the result/state
	void evaluate();

	// This function prints the current state of the object
	// evaluate() should be called first
	void printState() const;

private:
	// The function set() cannot be used on TAMoreThan objects
	using TABool::set;

	// References to the two TANumber objects given in constructor
	const TANumber &m_lhs, &m_rhs;
};

#endif