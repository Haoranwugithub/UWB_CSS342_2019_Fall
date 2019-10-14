#pragma once

#include "Card.h"

template<class T>
class RectangularCard : public Card<T> {
private:
    float m_width, m_height;
public:
    RectangularCard() = delete;

    RectangularCard(float width, float height)
            : m_width{width}, m_height{height} {};

    T area() const override {
        return m_width * m_height;
    };
};
