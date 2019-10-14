#include "circular_card.h"

bool circular_card::operator<(circular_card const &cir) {
    return area() < cir.area();
}
