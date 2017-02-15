#ifndef TAAND_HPP
#define TAAND_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TAAnd : public TABool, public TAOperation {
public:
	TAAnd(const TABool& lhs, const TABool& rhs);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TABool &m_lhs, &m_rhs;
};

#endif