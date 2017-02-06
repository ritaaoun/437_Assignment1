# 437_Assignment1

# Problem 1
I only included header and source files, as requested. Go into the folder 437_Assignment1 and use the Main.cpp file to test.
Otherwise, the header files (x.hpp) will tell you what you need to know about class x. Implementation would be in x.cpp.

Some of my design decisions (-> is a parent/child relationship):
* Primitive ->  Num   ->  Int       -> Floor
                                    -> Ceiling
                      ->  Double
                      ->  Plus
                      ->  Minus
                      ->  Multiply
                      ->  Divide
            ->  Bool  ->  LessThan
                      ->  MoreThan
                      ->  Equals
                      ->  Not
                      ->  And
                      ->  Or
                      ->  Xor
* All operations implement the interface TAOperation (now empty).
* TAInt and TADouble have the static constant element ZERO (I used it to allow MINUS to be a one-element operation by making it ZERO-number).
Please email me if anything is unclear.
