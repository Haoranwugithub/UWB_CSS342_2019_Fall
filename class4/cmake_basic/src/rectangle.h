#ifndef A_SHAPE_RECTANGLE_H
#define A_SHAPE_RECTANGLE_H

class rectangle {
    int m_width, m_height;
public:
    rectangle ();
    rectangle(int width, int height)
            : m_width{width}, m_height{height} {};
    void set_values (int,int);
    int area() {return m_width*m_height;}
};

#endif //A_SHAPE_RECTANGLE_H
