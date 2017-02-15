#ifndef TAEQUALS_HPP
#define TAEQUALS_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAEquals : public TABool, public TAOperation {
public:
	TAEquals(const TAInt& lhs, const TAInt& rhs);
	TAEquals(const TADouble& lhs, const TADouble& rhs);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TANumber &m_lhs, &m_rhs;
};

#endif