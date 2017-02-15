#ifndef TAMORETHAN_HPP
#define TAMORETHAN_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAMoreThan : public TABool, public TAOperation {
public:
	TAMoreThan(const TAInt& lhs, const TAInt& rhs);
	TAMoreThan(const TADouble& lhs, const TADouble& rhs);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TANumber &m_lhs, &m_rhs;
};

#endif