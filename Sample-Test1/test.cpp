#include "pch.h"
#include "../CalcTest/Calc.cpp"

TEST(CalcTest, TestName) {
	Calc calc;
	int sum = calc.getSum(1, 2);
	EXPECT_EQ(sum, 3);
}

TEST(CalcTest, TestGetMinus) {
	Calc calc;
	int ret = calc.getMinus(2, 1);
	EXPECT_EQ(ret, 1);
}