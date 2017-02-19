#ifndef TAPAIR_HPP
#define TAPAIR_HPP

#include "TAPrimitive.hpp"

class TAPair : public TAPrimitive {
public:
	TAPair(const TAPrimitive &lhs, const TAPrimitive &rhs);
	TAPair(const std::string &name, const TAPrimitive &lhs, const TAPrimitive &rhs);
	TAPrimitive& first();
	TAPrimitive& next();
	void list() const;
private:
	TAPrimitive m_lhs, m_rhs;
};

#endif