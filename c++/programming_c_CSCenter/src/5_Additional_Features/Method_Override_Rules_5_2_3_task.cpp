#include "Method_Override_Rules_5_2_3_task.h"

#include <cstring>

//Rational operator-(int value, const Rational &in) { Rational r(value); r -= in; return r; }
//Rational operator+(int value, const Rational &in) { Rational r(value); r += in; return r; }
//Rational operator/(int value, const Rational &in) { Rational r(value); r /= in; return r; }
//Rational operator*(int value, const Rational &in) { Rational r(value); r *= in; return r; }

//bool operator==(int value, const Rational &in) { return  Rational(value) == in; }
//bool operator!=(int value, const Rational &in) { return  Rational(value) != in; }
//bool operator< (int value, const Rational &in) { return  Rational(value) < in; }
//bool operator> (int value, const Rational &in) { return  Rational(value) > in; }
//bool operator<=(int value, const Rational &in) { return  Rational(value) <= in; }
//bool operator>=(int value, const Rational &in) { return  Rational(value) >= in; }

String::String(const char *str)
{
    size = std::strlen(str);
    this->str = new char[size + 1];
    std::strcpy(this->str, str);
}

String::String(size_t n, char c) : size(n)
{
    str = new char[size + 1];
    for(size_t i = 0; i < size; i++)
        (*(str + i)) = c;
    (*(str + size + 1)) = '\0';
}

void String::append(const String &other)
{
    size_t count = size;
    size_t in = other.size - 1;
    resize(other.size);
    size_t newlen = this->size;
    while (count < newlen--) {
        *(this->str + newlen) = (*(other.str + in));
//        size--;
        in--;
    }
    (*(this->str + this->size)) = '\0';
    this->size = std::strlen(this->str);
}

void String::resize(const size_t &size)
{
    char *str = new char[size + this->size + 1];
    for(size_t i = 0; i <= this->size; i++) {
        (*(str + i)) = (*(this->str + i));
    }
    (*(str + size + this->size)) = '\0';
    delete [] this->str;
    this->str = str;
    this->size += size;
}

Method_Override_Rules_5_2_3_task::Method_Override_Rules_5_2_3_task()
{

}

void Method_Override_Rules_5_2_3_task::test()
{
    String r("12345678");
    String h = r[4][5];
    return;
//    r.
//    Rational k(5, 10);
//    double j = k;
}
