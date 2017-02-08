#ifndef TAMULTIPLY_HPP
#define TAMULTIPLY_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAMultiply : public TAOperation {
public:
	TAMultiply(const TAInt& lhs, const TAInt& rhs);
	TAMultiply(const TADouble& lhs, const TADouble& rhs);
private:
	const TANumber& m_lhs, m_rhs;
};

#endif