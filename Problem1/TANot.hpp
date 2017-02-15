#ifndef TANOT_HPP
#define TANOT_HPP

#include "TABool.hpp"
#include "TAOperation.hpp"

class TANot : public TABool, public TAOperation {
public:
	TANot(const TABool& b);
private:
	const TABool& m_b;
};

#endif