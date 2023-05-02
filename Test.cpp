#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test 1: Throws exception when denominator = 0") 
{
    CHECK_THROWS(Fraction(1, 0));   //throw exception "invalid_argument"
    CHECK_THROWS(Fraction(-1, 0));  // throw exception "invalid_argument"
    CHECK_NOTHROW(Fraction(1, -1)); // ( 1/-1 ) = -1
    CHECK_NOTHROW(Fraction(-1, -1)); // (-1/-1) = 1
}


TEST_CASE("Test 2: Return 0 when the numerator = 0")
{
    Fraction f1(0, 8765); // (0/8765) = 0
    Fraction f2(0, -8765); // (0/-8765) = 0
    CHECK(f1 == 0);
    CHECK(f2 == 0);
}

TEST_CASE("Test 3: Check - get & set")
{
    Fraction f1(1,2);
    CHECK(f1.getNumerator() == 1);
    CHECK(f1.getDenominator() == 2);
    
    f1.setDenominator(4);
    CHECK(f1.getDenominator() == 4);
    
    f1.setNumerator(2);
    CHECK(f1.getNumerator() == 2);
}

TEST_CASE("Test 4 : Check the operator: + ")
{
    Fraction f1(1,2);
    Fraction f2(3,4);
    Fraction f3 = f1+f2;
    CHECK(f3.getNumerator() == 5);    
    CHECK(f3.getDenominator() == 4);    
}

TEST_CASE("Test 5 : Check the operator: - ")
{
    Fraction f1(1,2);
    Fraction f2(3,4);
    Fraction f3 = f1-f2;
    CHECK(f3.getNumerator() == -1);    
    CHECK(f3.getDenominator() == 4);
}

TEST_CASE("Test 6 : Check the operator: / ")
{
    Fraction f1(7, 8);
    Fraction f2(3, 1);
    Fraction f3 = f1/f2;
    CHECK(f3 == 0.666);
}

TEST_CASE("Test 7 : Check the operator: * ")
{
    Fraction f1(1,2);
    Fraction f2(3,4);
    Fraction f3 = f1/f2;
    CHECK(f3 == 0.375);
}

TEST_CASE("Test 8: Comparison between operators ")
{
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction f3(1, 2);

    CHECK((f1 > f2));
    CHECK((f1 < f2));
    CHECK((f1 >= f2));
    CHECK((f1 <= f2));
    CHECK((f1 == f3));
    CHECK((f3 != f2));
}

