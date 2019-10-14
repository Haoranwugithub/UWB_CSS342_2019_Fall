
#include "bag.h"

template<class T>
bool bag<T>::add(T *const new_shape) {
    bool can_add = !is_full();
    if (can_add) {
        m_shapes[m_count++] = new_shape;
    }
    return can_add;
};

template<class T>
bool bag<T>::remove(T *const shape_to_delete) {
    bool is_deleted = false;
    for (int i = 0; i < m_count; i++) {
        if (m_shapes[i] == shape_to_delete) {
            //m_shapes[i] = m_shapes[m_count--];
            m_shapes[i] = m_shapes[m_count - 1];
            m_count--;
            is_deleted = true;
        }
    }

    return is_deleted;
}

template<class T>
bool bag<T>::contains(T *const a_shape) {
    for (int i = 0; i < m_count; i++) {
        if (m_shapes[i] == a_shape) {
            return true;
        }
    }
    return false;
}

