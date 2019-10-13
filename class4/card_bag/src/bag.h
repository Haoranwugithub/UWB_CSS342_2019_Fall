#ifndef A_SHAPE_BAG_H
#define A_SHAPE_BAG_H

template<class T>
class bag {
private:
    //static const int SIZE = 100;
    //T shapes[SIZE];
    T **m_shapes;
    int m_count;
    int m_capacity;
public:
    bag() = delete;

    ~bag() {
        delete[] m_shapes;
    }

    explicit bag(int capacity) : m_capacity{capacity} {
        m_count = 0;
        m_shapes = new T *[m_capacity];
    };

    int get_count() {
        return m_count;
    }

    bool is_empty() const {
        return m_count == 0;
    }

    bool is_full() const {
        return m_count == m_capacity;
    }

    //bool add(const T * new_shape) {
    bool add(T *const new_shape);

    bool remove(T *const shape_to_delete);

    bool contains(T *const a_shape);
};

#include "bag.cpp"

#endif //A_SHAPE_BAG_H
