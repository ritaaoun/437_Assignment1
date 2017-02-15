#ifndef TAXOR_HPP
#define TAXOR_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TAXor : public TABool, public TAOperation {
public:
	TAXor(const TABool& lhs, const TABool& rhs);
private:
	const TABool& m_lhs, m_rhs;
};

#endif