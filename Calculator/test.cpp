#include "CppUTest/TestHarness.h"
#include "Calc.h"

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
	//CHECK_EQUAL(5, add(2, 3));
	//CHECK_EQUAL(8, sub(4, 4));
	//CHECK_EQUAL(10, multiply(5, 2));
	CHECK_EQUAL(3, divide(10, 2));
}
