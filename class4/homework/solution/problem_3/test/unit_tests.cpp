#include "RectangularCard.h"
#include "CircularCard.h"
#include "CardBag.h"
#include "Card.h"
#include "gtest/gtest.h"

#define FloatRectangularCard RectangularCard<float>
#define FloatCircularCard CircularCard<float>
#define FloatCardBag CardBag<float>

TEST(bag_test, max_area_circular_card_only) {
   CardBag<float> bag(10);

   ASSERT_EQ(bag.maxArea(), nullptr);

    FloatCircularCard c1(1);
    FloatCircularCard c2(8);
    FloatCircularCard c3(2);

    bag.add(&c1);
    bag.add(&c2);
    bag.add(&c3);

    ASSERT_EQ(bag.maxArea(), &c2);
}

TEST(bag_test, max_area_mixed_card_different_area) {
    CardBag<float> bag(10);

    FloatRectangularCard r1(4, 3);
    FloatRectangularCard r2(8, 4.5);
    FloatCircularCard c1(9);
    FloatCircularCard c2(2);

    bag.add(&r1);
    bag.add(&c1);
    bag.add(&r2);
    bag.add(&c2);

    ASSERT_EQ(bag.maxArea(), &c1);
}

TEST(bag_test, max_area_mixed_card_with_dup_area) {
    CardBag<float> bag(10);

    FloatRectangularCard r1(4, 3);
    FloatRectangularCard r2(PI, 100);
    FloatCircularCard c1(10);
    FloatCircularCard c2(1);

    bag.add(&r1);
    bag.add(&c1);
    bag.add(&c2);
    bag.add(&r2);

    ASSERT_EQ(bag.maxArea(), &c1);
}

TEST(bag_test, max_area_rectangular_card_only) {
    CardBag<float> bag(10);

    FloatRectangularCard r1(1, 2.1);
    FloatRectangularCard r2(4, 3);
    FloatRectangularCard r3(8, 4.5);

    bag.add(&r1);
    bag.add(&r2);
    bag.add(&r3);

    ASSERT_EQ(bag.maxArea(), &r3);
}

TEST(area_test, rect_area) {
    FloatRectangularCard rect(5, 3);
    ASSERT_EQ(rect.area(), 15);
}

TEST(area_test, circle_area) {
    float radius = 4;
    FloatCircularCard cir{radius};
    ASSERT_EQ(cir.area(), float(radius
            *radius * PI));
}

TEST(bag_test, add_card) {
    FloatCardBag cardBag(3);
    FloatRectangularCard r1(1, 2);
    FloatCircularCard c1(3);
    FloatCircularCard c2(4);

    ASSERT_TRUE(cardBag.add(&r1));
    ASSERT_TRUE(cardBag.add(&c1));
    ASSERT_TRUE(cardBag.add(&c2));
    ASSERT_EQ(cardBag.getCount(), 3);
}

TEST(bag_test, contains) {
    FloatRectangularCard rec(1, 2);
    FloatCircularCard cir(5);

    FloatCardBag shape_empty_bag(0);
    ASSERT_FALSE(shape_empty_bag.contains(&rec));

    FloatCardBag cardBag(4);
    ASSERT_FALSE(cardBag.contains(&rec));
    cardBag.add(&rec);
    ASSERT_TRUE(cardBag.contains(&rec));
    cardBag.add(&cir);
    ASSERT_TRUE(cardBag.contains(&cir));
}

TEST(bag_test, is_empty) {
    FloatCardBag emptyBag(0);
    ASSERT_TRUE(emptyBag.isEmpty());

    FloatCardBag bag(2);
    FloatCircularCard cc(1);
    bag.add(&cc);
    ASSERT_FALSE(bag.isEmpty());
}

TEST(bag_test, is_full) {
    FloatCardBag emptyBag(0);
    ASSERT_TRUE(emptyBag.isFull());

    FloatCardBag bag(2);
    FloatCircularCard cc(1);
    bag.add(&cc);
    ASSERT_FALSE(bag.isFull());

    FloatRectangularCard rc(1, 2);
    bag.add(&rc);
    ASSERT_TRUE(bag.isFull());
}

/*
TEST(bag_test, remove_card) {
    FloatRectangularCard r1(1, 2);
    FloatRectangularCard r2(3, 4);
    FloatCircularCard c1(5);
    FloatCircularCard c2(6);

    // remove from empty CardBag
    FloatCardBag shape_empty_bag(0);
    ASSERT_FALSE(shape_empty_bag.remove(nullptr));
    ASSERT_FALSE(shape_empty_bag.remove(&r1));

    FloatCardBag cardBag(4);
    ASSERT_FALSE(cardBag.remove(&r1));
    ASSERT_FALSE(cardBag.remove(nullptr));

    // remove from CardBag with 1 Card
    cardBag.add(&r1);
    cardBag.remove(&r2);
    ASSERT_EQ(cardBag.getCount(), 1);
    ASSERT_TRUE(cardBag.remove(&r1));
    ASSERT_EQ(cardBag.getCount(), 0);

    // remove from CardBag with more than 1 Card
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
 */

TEST(bag_test, example) {
    FloatCardBag cardBag(3);

    FloatRectangularCard r1(1, 2);
    FloatCircularCard c1(3);
    FloatCircularCard c2(4);

    Card<float> ** cards = new Card<float>*[3];
    cards[0] = &r1;
    cards[1] = &c1;
    cards[2] = &c2;

    for (int i=0; i<3; i++) {
        printf("%f\n", cards[i]->area());
    }

	delete [] cards;
}
