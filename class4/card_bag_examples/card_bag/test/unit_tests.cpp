#include "rectangular_card.h"
#include "circular_card.h"
#include "bag.h"
#include "card.h"
#include "gtest/gtest.h"

TEST(shape_test, rect_area) {
    rectangular_card rect{5, 3};
    ASSERT_EQ(rect.area(), 15);
}

TEST(shape_test, rect_compare_lessthan) {
    rectangular_card rect{5, 3};
    rectangular_card larger_rec{2, 10};
    rectangular_card smaller_rec{2, 1};
    ASSERT_TRUE(rect < larger_rec);
    ASSERT_FALSE(rect < smaller_rec);
}

TEST(shape_test, circle_area) {
    circular_card cir{4};
    ASSERT_EQ(cir.area(), 16);
}

TEST(shape_test, cirt_compare_lessthan) {
    circular_card cir{5};
    circular_card larger_cir{10};
    circular_card smaller_cir{2};
    ASSERT_TRUE(cir < larger_cir);
    ASSERT_FALSE(cir < smaller_cir);
}


TEST(bag_test, add_shape) {
    bag<card> shape_bag(2);
    rectangular_card rec(1, 2);
    circular_card c1(3);
    circular_card c2(4);

    ASSERT_TRUE(shape_bag.add(&rec));
    ASSERT_TRUE(shape_bag.add(&c1));
    ASSERT_FALSE(shape_bag.add(&c2));
    ASSERT_EQ(shape_bag.get_count(), 2);
}

TEST(bag_test, remove_contains) {
    rectangular_card rec(1, 2);
    circular_card cir(5);

    bag<card> shape_empty_bag(0);
    ASSERT_FALSE(shape_empty_bag.contains(&rec));

    bag<card> shape_bag(4);
    ASSERT_FALSE(shape_bag.contains(&rec));
    shape_bag.add(&rec);
    ASSERT_TRUE(shape_bag.contains(&rec));
    shape_bag.add(&cir);
    ASSERT_TRUE(shape_bag.contains(&cir));
}

TEST(bag_test, remove_shape) {
    rectangular_card r1(1, 2);
    rectangular_card r2(3, 4);
    circular_card c1(5);
    circular_card c2(6);

    // remove from empty bag
    bag<card> shape_empty_bag(0);
    ASSERT_FALSE(shape_empty_bag.remove(nullptr));
    ASSERT_FALSE(shape_empty_bag.remove(&r1));

    bag<card> shape_bag(4);
    ASSERT_FALSE(shape_bag.remove(&r1));
    ASSERT_FALSE(shape_bag.remove(nullptr));

    // remove from bag with 1 card
    shape_bag.add(&r1);
    shape_bag.remove(&r2);
    ASSERT_EQ(shape_bag.get_count(), 1);
    ASSERT_TRUE(shape_bag.remove(&r1));
    ASSERT_EQ(shape_bag.get_count(), 0);

    // remove from bag with more than 1 card
    shape_bag.add(&r1);
    shape_bag.add(&r2);
    shape_bag.add(&c1);
    shape_bag.add(&c2);

    ASSERT_TRUE(shape_bag.remove(&c1));
    ASSERT_EQ(shape_bag.get_count(), 3);

    ASSERT_TRUE(shape_bag.remove(&c2));
    ASSERT_EQ(shape_bag.get_count(), 2);

    ASSERT_TRUE(shape_bag.remove(&r2));
    ASSERT_EQ(shape_bag.get_count(), 1);

    ASSERT_TRUE(shape_bag.contains(&r1));
}
