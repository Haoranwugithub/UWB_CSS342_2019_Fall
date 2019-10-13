#ifndef A_SHAPE_RECTANGULAR_CARD_H
#define A_SHAPE_RECTANGULAR_CARD_H

#include "card.h"

class rectangular_card : public card {
private:
    float m_width, m_height;
public:
    rectangular_card() = delete;

    rectangular_card(float width, float height)
            : m_width{width}, m_height{height} {};

    float area() const override { return m_width * m_height; }

    bool operator<(rectangular_card const &rect);
};

#endif //A_SHAPE_RECTANGULAR_CARD_H
