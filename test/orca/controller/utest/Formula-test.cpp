#include "gtest/gtest.h"

#include "../Formula.h"
#include "../../domain/mock/test1_mock.h"

using ::testing::Return;
c_test1_mock test1_mock;
c_test1 test1;

int calc(int arg1)
{
	//c_test1_mock* test1_mock = c_test1_mock::getInstance();
	int out = test1_mock._calc(arg1);
	//delete test1_mock;
	return out;
}

TEST(blaTest, test1) 
{
	int in = 1;
	EXPECT_CALL(test1_mock, _calc(in)).Times(1).WillOnce(Return(in * 4));
    EXPECT_EQ (formular_bla(in), in * 8);
	in = 10;
	EXPECT_CALL(test1_mock, _calc(in)).Times(1).WillOnce(Return(in * 4));
	EXPECT_EQ(formular_bla(in), in * 8);
	in = 40;
	EXPECT_CALL(test1_mock, _calc(in)).Times(1).WillOnce(Return(in * 4));
	EXPECT_EQ(formular_bla(in), in * 8);
}
