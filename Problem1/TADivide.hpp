#ifndef TADIVIDE_HPP
#define TADIVIDE_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TADivide : public TANumber, public TAOperation {
public:
	TADivide(const TAInt& lhs, const TAInt& rhs);
	TADivide(const TADouble& lhs, const TADouble& rhs);
private:
	const TANumber& m_lhs, m_rhs;
};

#endif