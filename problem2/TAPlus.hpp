#ifndef TAPLUS_HPP
#define TAPLUS_HPP

#include "TAOperation.hpp"
#include "TANumber.hpp"
#include "TAInt.hpp"
#include "TADouble.hpp"

class TAPlus : public TAOperation {
public:
	TAPlus(const TAInt& lhs, const TAInt& rhs);
	TAPlus(const TADouble& lhs, const TADouble& rhs);
private:
	const TANumber& m_lhs, m_rhs;
};

#endif