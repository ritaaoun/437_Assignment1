#ifndef TAMINUS_HPP
#define TAMINUS_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAMinus :public TAOperation {
public:
	TAMinus(const TAInt& i);
	TAMinus(const TADouble& d);
	TAMinus(const TAInt& lhs, const TAInt& rhs);
	TAMinus(const TADouble& lhs, const TADouble& rhs);
private:
	const TANumber& m_lhs, m_rhs;
};

#endif