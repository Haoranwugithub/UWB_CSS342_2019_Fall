#include "rectangle.h"
#include "gtest/gtest.h"

TEST(example, area)
{
    rectangle rect(5, 3);

	// rect area should be equal to 15
    ASSERT_EQ(rect.area(), 15);
}

TEST(example, compare_lessthan)
{
    rectangle rect(5, 3);
    rectangle larger_rec(2, 10);
    rectangle smaller_rec(2, 1);

	// rect<larger_rec should be true
    ASSERT_TRUE(rect<larger_rec);

	// rect<smaller_rec should e false
    ASSERT_TRUE(rect<larger_rec);
    ASSERT_FALSE(rect<smaller_rec);
}
