#include "gtest/gtest.h"
#include "../gn_version.h"

TEST(Version, get)
{
    EXPECT_EQ(VERSION_MAJOR ,3);
    EXPECT_EQ(VERSION_MINOR , 0);
    EXPECT_EQ(VERSION_PATCH , 40);
}
