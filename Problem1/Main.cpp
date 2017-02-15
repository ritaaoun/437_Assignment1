#include "TAInt.hpp"
#include "TADouble.hpp"
#include "TACeiling.hpp"
#include "TABool.hpp"
#include "TALessThan.hpp"
#include "TAAnd.hpp"

int main() {
	//TAInt x;
	//TADouble d;
	//TACeiling y(d); // denotes y is the ceiling of d
	//TABool b;
	//TALessThan t1(x, y); // denotes x < y
	//TAAnd t2(b, t1); // denotes b and t1

	TAInt x;
	TADouble d;
	TALessThan t1(x, d); // x and d are not of the same type and
						 //thus TALessThan should not accept to perform the construction
}