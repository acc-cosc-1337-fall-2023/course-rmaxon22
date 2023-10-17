//add include statements

// 04_repetition_tests.cpp
#include "repetition.h"
#include <cassert>

//add function(s) code here

int main() {
    //Test cases for the factorial function
    assert(factorial(3) == 6);
    assert(factorial(5) == 120);
    assert(factorial(6) == 720);

    //Test cases for the gcd function
    assert(gcd(5, 15) == 5);
    assert(gcd(21, 28) == 7);
    assert(gcd(25, 100) == 25);

    return 0;
}