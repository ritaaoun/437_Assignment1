#ifndef TALESSTHAN_HPP
#define TALESSTHAN_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TALessThan : public TABool, public TAOperation {
public:
	TALessThan(const TAInt& lhs, const TAInt& rhs);
	TALessThan(const TADouble& lhs, const TADouble& rhs);
private:
	const TANumber& m_lhs, m_rhs;
};

#endif