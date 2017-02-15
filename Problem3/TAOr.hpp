#ifndef TAOR_HPP
#define TAOR_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TAOr : public TABool, public TAOperation {
public:
	TAOr(const TABool &lhs, const TABool &rhs);
	TAOr(const std::string &name, TABool &lhs, const TABool &rhs);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TABool &m_lhs, &m_rhs;
};

#endif