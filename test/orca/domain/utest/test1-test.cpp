#include "gtest/gtest.h"
#include "../test1.h"

TEST(blaTest, test1) {
    EXPECT_EQ (bla4(0),  0);
    EXPECT_EQ (bla4(10), 20);
    EXPECT_EQ (bla4(50), 100);
}

TEST(blaTest, test2) {
    EXPECT_EQ (calc(2),  8);
}
