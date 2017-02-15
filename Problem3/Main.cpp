#include "TAInt.hpp"
#include "TADouble.hpp"
#include "TACeiling.hpp"
#include "TABool.hpp"
#include "TALessThan.hpp"
#include "TAAnd.hpp"
#include <iostream>

int main() {
	TAInt x("x");
	TADouble d("d");
	TACeiling y(d); // denotes y is the ceiling of d
	TABool b("b");
	TALessThan t1(x, y); // denotes x < y
	TAAnd t2(b, t1); // denotes b and t1
	t2.list();// should print: ( &b (< x (ceiling d ) ) )
	std::cout << std::endl;
	x.set(5);
	d.set(2.3);
	b.set(true);
	y.evaluate();
	t1.evaluate();
	t1.printState();// should print: false
	std::cout << std::endl;
	d.set(5.3);
	y.evaluate();
	t1.evaluate();
	t1.printState();// should print: true
	std::cout << std::endl;
	// Problem 1:
	//TAInt x;
	//TADouble d;
	//TACeiling y(d); // denotes y is the ceiling of d
	//TABool b;
	//TALessThan t1(x, y); // denotes x < y
	//TAAnd t2(b, t1); // denotes b and t1

	//TAInt x;
	//TADouble d;
	//TALessThan t1(x, d); // x and d are not of the same type and
	//					 //thus TALessThan should not accept to perform the construction
}