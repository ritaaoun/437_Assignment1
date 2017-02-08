#ifndef TAOPERATION_HPP
#define TAOPERATION_HPP

class TAOperation {
public:
	virtual void evaluate() = 0;
	virtual void printState() = 0;
};

#endif