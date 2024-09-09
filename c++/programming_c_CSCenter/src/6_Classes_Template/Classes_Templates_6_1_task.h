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

/***
 * В предыдущей версии предполагается, что для типа T определены оператор присваивания и конструктор по умолчанию.
 * При создании шаблонных классов контейнеров (вроде Array и не только) разумно стараться минимизировать требования к типам шаблонных параметров.
 * Поэтому усложним задачу, реализуйте класс Array не полагаясь на то, что для типа T определен оператор присваивания и конструктор по умолчанию. Конструктор копирования у типа T есть.
 *
 * Hints: используйте placement new и явный вызов деструктора (смотрите урок 3.4), чтобы создавать и уничтожать объекты,
 * аллоцировать правильно выровненную память можно с помощью new char[N * sizeof(T)], где N - количество элементов массива.
***/

template <typename T>
class Array
{
public:
    // Список операций:
    //
    // explicit Array(size_t size, const T& value = T())
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Если у класса нет конструктора
    //   по умолчанию, то второй аргумент этого конструктора
    //   обязателен.
    //
    // Array()
    //   конструктор класса, который можно вызвать
    //   без параметров. Должен создавать пустой
    //   Array.
    //
    // Array(const Array &)
    //   конструктор копирования, который создает
    //   копию параметра. Для типа T оператор
    //   присваивания не определен.
    //
    // ~Array()
    //   деструктор, если он вам необходим.
    //
    // Array& operator=(...)
    //   оператор присваивания.
    //
    // size_t size() const
    //   возвращает размер массива (количество
    //                              элементов).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   две версии оператора доступа по индексу.
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
            if (m_array != nullptr) {
                for(size_t i = 0; i < m_size; ++i) {
                    ((T&)(*(m_array + (i * sizeof (T))))).~T();
                }
                delete [] m_array;
            }
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

struct ICloneable
{
    virtual ICloneable* clone() const = 0;
    virtual ~ICloneable() { }
};

template <typename T>
struct ValueHolder : ICloneable {
    explicit ValueHolder(const T &value) : data_(value) {}

    ValueHolder* clone() const { return new ValueHolder(*this); };

    T data_;
}; // дальше самостоятельно

class Classes_Templates_6_1_task
{
public:
    Classes_Templates_6_1_task();
    void test();
};

#endif // CLASSES_TEMPLATES_6_1_TASK_H
