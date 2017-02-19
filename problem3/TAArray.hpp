#ifndef TAARRAY_HPP
#define TAARRAY_HPP

#include "TAConstant.hpp"
#include <vector>

class TAArray : public TAPrimitive {
public:
	TAArray(const std::string &name, Type type, const TAConstant &size);
	int size() const;
	TAPrimitive *&accessArray(int index);
	Type getMemberType() const;
	void list() const;
private:
	std::vector<TAPrimitive*> m_arr;
	Type m_memberType;
	int m_size;
};

#endif