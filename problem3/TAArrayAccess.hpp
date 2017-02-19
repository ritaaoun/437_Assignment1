#ifndef TAARRAYACCESS_HPP
#define TAARRAYACCESS_HPP

#include "TAPrimitive.hpp"
#include "TAArray.hpp"
#include "TAInt.hpp"

class TAArrayAccess : public TAPrimitive {
public:
	TAArrayAccess(TAArray &arr, const TANumber &index);
	void set(TAPrimitive &val);
	void set(double val);
private:
	TAArray &m_arr;
	const TANumber &m_arrIndex;
	static int m_numberOfNewlyCreatedPrimitiveObjects;
};

#endif