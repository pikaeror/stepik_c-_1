#ifndef FUNCTIONS_TEMPLATES_6_2_TASK_H
#define FUNCTIONS_TEMPLATES_6_2_TASK_H
#include <iostream>
#include <vector>
#include <cstddef>

template<typename T, typename U, typename SizeType>
void copy_n(T *output, U *input, SizeType count) {
    while (--count >= 0) {
        (*(output + count)) = (T)(*(input + count));
    }
}

template <typename T>
class Array
{
public:
    explicit Array(size_t size = 0, const T& value = T());
    Array(const Array& other);
    ~Array();
    Array& operator=(Array other);
    void swap(Array &other);
    size_t size() const;
    T& operator[](size_t idx);
    const T& operator[](size_t idx) const;

private:
    size_t size_;
    T *data_;
};

// put your code here
template<typename T, class Comp>
T minimum(Array<T> &p, Comp less) {
    size_t count = p.size() - 1;
    T output = (T)p[count];
    while(--count >= 0) {
        if(less(output, p[count]))
            output = (T)p[count];
    }
    return output;
}

template <typename T>
void flatten(const Array<Array<T>>& array, std::ostream& out) {
    for(size_t i = 0; i < array.size(); i++)
        flatten(array[i], out);
}
template <typename T>
void flatten(const Array<T>& array, std::ostream& out) {
    for(size_t i = 0; i < array.size(); i++)
        out << ' ' << array[i] << ' ';
}

template <typename T, size_t k>
size_t array_size(T (&array)[k]) {
    return sizeof (array) / sizeof (T);
}



class Functions_Templates_6_2_task
{
public:
    Functions_Templates_6_2_task();

    void test();
};

#endif // FUNCTIONS_TEMPLATES_6_2_TASK_H
