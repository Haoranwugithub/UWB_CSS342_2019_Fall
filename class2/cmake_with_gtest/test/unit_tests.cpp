#include "rectangle.h"
#include "gtest/gtest.h"

TEST(example, area)
{
    rectangle rect {5, 3};
    ASSERT_EQ(rect.area(), 15);
}

TEST(example, compare_lessthan)
{
    rectangle rect {5, 3};
    rectangle larger_rec {2, 10} ;
    rectangle smaller_rec {2, 1} ;
    ASSERT_TRUE(rect<larger_rec);
    ASSERT_FALSE(rect<smaller_rec);
}
