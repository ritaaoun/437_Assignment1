#ifndef TABOOL_HPP
#define TABOOL_HPP

#include "TAPrimitive.hpp"

class TABool : public TAPrimitive {
public:
	TABool(const std::string &name);
	void set(double value) override;
	bool getValue() const;
protected:
	TABool();
private:
	bool m_value;
};

#endif