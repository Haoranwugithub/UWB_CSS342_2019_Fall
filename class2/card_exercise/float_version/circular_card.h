#pragma once

#include "card.h"

#define PI 3.14159

class circular_card : public card {
private:
    float m_radius;
public:

    circular_card() = delete;

    explicit circular_card(float radius) : m_radius(radius) {};

    float area() const override { 
        return PI * m_radius * m_radius; 
    }

    bool operator<(circular_card const &);
};
