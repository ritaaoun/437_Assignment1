#ifndef TANOT_HPP
#define TANOT_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TANot : public TABool, public TAOperation {
public:
	TANot(const TABool &b);
	TANot(const std::string &name, const TABool &b);
	void list() const;
	void evaluate();
	void printState() const;
private:
	using TABool::set;
	const TABool &m_b;
};

#endif