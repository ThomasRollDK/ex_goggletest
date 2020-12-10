#include "gtest/gtest.h"

#include "../Formula.h"



TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (formular_bla(0),  0);
    EXPECT_EQ (formular_bla(10), 20);
    EXPECT_EQ (formular_bla(50), 100);
}
