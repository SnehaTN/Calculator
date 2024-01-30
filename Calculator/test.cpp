#include "CppUTest/TestHarness.h"
#include "main.h"

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
	CHECK_EQUALS(5, add(2, 3));
	CHECK_EQUALS(8, sub(4, 4));
	CHECK_EQUALS(10, multiply(5, 2));
	CHECK_EQUALS(2, divide(10, 2));
}