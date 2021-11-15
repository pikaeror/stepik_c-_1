#ifndef CLASSES_TEMPLATES_6_1_TASK_H
#define CLASSES_TEMPLATES_6_1_TASK_H

#include <cstddef>
#include <algorithm>

struct Exp {
    Exp(int i = 9) : val(i) {}
    Exp(const Exp& input) {
        val = input.val;
    }

    int val;
};


template <typename T>
class Array
{
public:
    explicit Array(size_t size, const T& value = T()) : m_size(size),
            m_array(new char[m_size * sizeof (T)]) {
            for(size_t i = 0; i < m_size; ++i) {
                new (m_array + (i * sizeof (T)))T(value);
    //            (*(m_array + (i * sizeof (T)))) = value;
            }
        }

        Array() : m_size(),
            m_array() {}

        Array(const Array &input) : m_size(input.size()),
            m_array(new char[m_size * sizeof (T)]) {
            for(size_t i = 0; i < m_size; ++i) {
                new (m_array + (i * sizeof (T)))T(input[i]);
    //            (*(m_array + (i * sizeof (T)))) = input[i];
            }
        }
        ~Array() {
            if (m_array != nullptr)
                delete [] m_array;
        }

        Array& operator=(const Array& input) {
            if(&input == this)
                return *this;
            this->~Array();
            new (this)Array(input);
            return *this;
        }
        size_t size() const { return m_size; }
        T& operator[](size_t i) { return (T&)(*(m_array + (i * sizeof (T)))); }
        const T& operator[](size_t i) const { return (T&)(*(m_array + (i * sizeof (T)))); }
private:
    size_t m_size;
    char *m_array;
};

class Classes_Templates_6_1_task
{
public:
    Classes_Templates_6_1_task();
    void test();
};

#endif // CLASSES_TEMPLATES_6_1_TASK_H
