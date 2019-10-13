#include <iostream>
#include "rectangle.h"

void unit_test_1() {
    rectangle rect;
    rect.set_values(2, 3);
    printf("area is %d\n", rect.area());
}

void unit_test_2() {
    rectangle rect {5, 3};
    printf("area is %d\n", rect.area());
}
