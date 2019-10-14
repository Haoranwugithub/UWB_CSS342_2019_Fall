#include "rectangular_card.h"

bool rectangular_card::operator<(rectangular_card const &rect) {
    return area() < rect.area();
}

