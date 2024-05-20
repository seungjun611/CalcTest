#include "pch.h"
#include "../CalcTest/Calc.cpp"

TEST(CalcTest, TestName) {
	Calc calc;
	int sum = calc.getSum(1, 2);
	EXPECT_EQ(sum, 3);
}

TEST(CalcTest, GetZegop) {
	Calc calc;
	int ret = calc.getZegop(3);
	EXPECT_EQ(ret, 9);
}