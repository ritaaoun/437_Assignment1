#ifndef TAOR_HPP
#define TAOR_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TAOr : public TABool, public TAOperation {
public:
	TAOr(const TABool& lhs, const TABool& rhs);
private:
	const TABool& m_lhs, m_rhs;
};

#endif