#ifndef TALESSTHAN_HPP
#define TALESSTHAN_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TALessThan : public TABool, public TAOperation {
public:
	TALessThan(const TAInt &lhs, const TAInt &rhs);
	TALessThan(const std::string &name, const TAInt &lhs, const TAInt &rhs);
	TALessThan(const TADouble &lhs, const TADouble &rhs);
	TALessThan(const std::string &name, const TADouble &lhs, const TADouble &rhs);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TANumber &m_lhs, &m_rhs;
};

#endif