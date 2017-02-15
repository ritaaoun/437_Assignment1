# 437_Assignment1

## Problem 2
In this part, I realized that I couldn't make the operations +,-,* and / inherit from TANumber because that would still not fix the issue I wanted it to fix. I wanted to be able to do:
    TAInt x("x");
    TAInt y("y");
    TAPlus p(x,y);
    TAPlus p2(p,x);
However, this would make me accept TANumber as the input of the constructor while we were asked for this to give a compile error. I couldn't think of a straight-forward solution. And so I made these operations separate, only inheriting from TAOperation.

The schema became:
Primitive
  * Num
    * Int
	  * Floor
	  * Ceiling
    * Double
  * Bool
    * LessThan
    * MoreThan
    * Equals
    * Not
    * And
    * Or
    * Xor

As in Problem 1, all operations inherit from TAOperation.
The set method is only public to Int, Double and Bool. It is private in inherited classes.

Note: In the proposed main, I added y.evaluate() whenever d changed so t1 would have the correct value.
	
## Problem 1
I only included header and source files, as requested. Go into the folder 437_Assignment1 and use the Main.cpp file to test.
Otherwise, the header files (x.hpp) will tell you what you need to know about class x. Implementation would be in x.cpp.

Some of my design decisions (indentation is a parent/child relationship):
1. Primitive
  * Num
    * Int
	  * Floor
	  * Ceiling
    * Double
    * Plus
    * Minus
    * Multiply
    * Divide
  * Bool
    * LessThan
    * MoreThan
    * Equals
    * Not
    * And
    * Or
    * Xor
2. All operations implement the interface TAOperation (now empty).
3. TAInt and TADouble have the static constant element ZERO (I used it to allow MINUS to be a one-element operation by making it ZERO-number).

Please email me if anything is unclear.
