#include "CppUTest/TestHarness.h"

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
	CHECK_EQUALS(5, add(2, 3));
	CHECK_EQUALS(8, sub(4, 4));
	CHECK_EQUALS(10, multi(5, 2));
	CHECK_EQUALS(2, division(10, 2));

}