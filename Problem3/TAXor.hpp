#ifndef TAXOR_HPP
#define TAXOR_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TAXor : public TABool, public TAOperation {
public:
	TAXor(const TABool &lhs, const TABool &rhs);
	TAXor(const std::string &name, TABool &lhs, const TABool &rhs);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TABool &m_lhs, &m_rhs;
};

#endif