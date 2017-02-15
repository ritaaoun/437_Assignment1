#ifndef TABOOL_HPP
#define TABOOL_HPP

#include "TAPrimitive.hpp"

class TABool : public TAPrimitive {
public:
	TABool();
	TABool(const std::string& name);
	void set(bool value);
	bool getValue() const;
private:
	bool m_value;
};

#endif