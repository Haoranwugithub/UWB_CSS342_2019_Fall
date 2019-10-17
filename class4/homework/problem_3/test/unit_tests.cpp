#include "RectangularCard.h"
#include "CircularCard.h"
#include "Bag.h"
#include "Card.h"
#include "gtest/gtest.h"

#define IntRectangularCard RectangularCard<int>
#define IntCircularCard CircularCard<int>
#define IntCardBag Bag<Card<int>>

TEST(bag_test, max_area) {
    // homework
}


TEST(area_test, rect_area) {
    IntRectangularCard rect(5, 3);
    ASSERT_EQ(rect.area(), 15);
}

TEST(area_test, circle_area) {
    int radius = 4;
    IntCircularCard cir{radius};
    ASSERT_EQ(cir.area(), int(radius
            *radius * PI));
}

TEST(bag_test, add_card) {
    IntCardBag cardBag(2);
    IntRectangularCard r1(1, 2);
    IntCircularCard c1(3);
    IntCircularCard c2(4);

    ASSERT_TRUE(cardBag.add(&r1));
    ASSERT_TRUE(cardBag.add(&c1));
    ASSERT_FALSE(cardBag.add(&c2));
    ASSERT_EQ(cardBag.getCount(), 2);
}

TEST(bag_test, contains) {
    IntRectangularCard rec(1, 2);
    IntCircularCard cir(5);

    IntCardBag shape_empty_bag(0);
    ASSERT_FALSE(shape_empty_bag.contains(&rec));

    IntCardBag cardBag(4);
    ASSERT_FALSE(cardBag.contains(&rec));
    cardBag.add(&rec);
    ASSERT_TRUE(cardBag.contains(&rec));
    cardBag.add(&cir);
    ASSERT_TRUE(cardBag.contains(&cir));
}

TEST(bag_test, is_empty) {
    IntCardBag emptyBag(0);
    ASSERT_TRUE(emptyBag.isEmpty());

    IntCardBag bag(2);
    IntCircularCard cc(1);
    bag.add(&cc);
    ASSERT_FALSE(bag.isEmpty());
}

TEST(bag_test, is_full) {
    IntCardBag emptyBag(0);
    ASSERT_TRUE(emptyBag.isFull());

    IntCardBag bag(2);
    IntCircularCard cc(1);
    bag.add(&cc);
    ASSERT_FALSE(bag.isFull());

    IntRectangularCard rc(1, 2);
    bag.add(&rc);
    ASSERT_TRUE(bag.isFull());
}

TEST(bag_test, remove_card) {
    IntRectangularCard r1(1, 2);
    IntRectangularCard r2(3, 4);
    IntCircularCard c1(5);
    IntCircularCard c2(6);

    // remove from empty Bag
    IntCardBag shape_empty_bag(0);
    ASSERT_FALSE(shape_empty_bag.remove(nullptr));
    ASSERT_FALSE(shape_empty_bag.remove(&r1));

    IntCardBag cardBag(4);
    ASSERT_FALSE(cardBag.remove(&r1));
    ASSERT_FALSE(cardBag.remove(nullptr));

    // remove from Bag with 1 Card
    cardBag.add(&r1);
    cardBag.remove(&r2);
    ASSERT_EQ(cardBag.getCount(), 1);
    ASSERT_TRUE(cardBag.remove(&r1));
    ASSERT_EQ(cardBag.getCount(), 0);

    // remove from Bag with more than 1 Card
    cardBag.add(&r1);
    cardBag.add(&r2);
    cardBag.add(&c1);
    cardBag.add(&c2);

    ASSERT_TRUE(cardBag.remove(&c1));
    ASSERT_EQ(cardBag.getCount(), 3);

    ASSERT_TRUE(cardBag.remove(&c2));
    ASSERT_EQ(cardBag.getCount(), 2);

    ASSERT_TRUE(cardBag.remove(&r2));
    ASSERT_EQ(cardBag.getCount(), 1);

    ASSERT_TRUE(cardBag.contains(&r1));
}