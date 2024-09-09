#include "Method_Override_Rules_5_2_3_task.h"

#include <cstring>
#include <utility>

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
    SString r("12345");
    SString h("6789");
    SString k("");
    // SString const cut = r[2][5];
    k = r;
    r.append(h);

    SString const hello("hello");
    SString const hell = hello[0][4]; // теперь в hell хранится подстрока "hell"
    SString const ell  = hello[1][3]; // теперь в ell хранится подстрока "ell"

    // SString h = r[4];
    return;
//    r.
//    Rational k(5, 10);
//    double j = k;
}

SString::SString(const char *str)
{
    size = std::strlen(str);
    this->str = new char[size + 1];
    for(size_t i = 0; i < size; i++) {
        (*(this->str + i)) = str[i];
    }
    (*(this->str + size + 1)) = '\0';
}

SString::SString(size_t n, char c) : size(n)
{
    this->str = new char[size + 1];
    for(size_t i = 0; i < size; i++) {
        (*(this->str + i)) = c;
    }
    (*(str + size + 1)) = '\0';
}

SString::~SString()
{
    delete [] str;
}

SString &SString::operator=(const SString &other)
{
    SString *tmp = new SString(other);
    std::swap(this->str, tmp->str);
    size = tmp->size;
    tmp->~SString();
    return *this;
}

void SString::append(const SString &other)
{
    size_t new_size = size + other.size;
    char *new_tmp = new char[new_size + 1];
    for(size_t i = 0; i < size; i++) {
        (*(new_tmp + i)) = (*(str + i));
    }
    for(size_t i = 0; i < other.size; i++) {
        (*(new_tmp + size + i)) = (*(other.str + i));
    }
    *(new_tmp + new_size + 1) = '\0';
    std::swap(new_tmp, this->str);
    size = new_size;
    delete [] new_tmp;
}

// const SString &SString::SubSString::operator [](size_t last) const
// {
//     SString *output = new SString();
//     // SString tmp;
//     for(size_t i = 0; i < last - start_index; i++) {
//         SString *tmp = new SString(1, (char)(*(parrent + i)));
//         output->append(*tmp);
//         tmp->~SString();
//     }
//     return *output;
// //     char *tmp_str = new char[last - start_index + 1];
// //     for(size_t i = 0; i < last - start_index; i++) {
// //         *(tmp_str + i) = (*(parrent + i));
// //     }
// //     (*(tmp_str + last - start_index + 1)) = '\0';
// //     SString *output = new SString(tmp_str);
// //     delete [] tmp_str;
// //     return *output;
// }
