#include "gtest/gtest.h"
#include "../test1.h"

TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (bla4(0),  0);
    EXPECT_EQ (bla4(10), 20);
    EXPECT_EQ (bla4(50), 100);
}
