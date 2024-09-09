#ifndef METHOD_OVERRIDE_RULES_5_2_3_TASK_H
#define METHOD_OVERRIDE_RULES_5_2_3_TASK_H
//#include <string>
#include <cstdio>

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    Rational& operator+=(Rational const &plus) {
        this->add(plus);
        return *this;
    }

    Rational& operator-=(Rational const &minus) {
        this->sub(minus);
        return *this;
    }

    Rational& operator/=(Rational const &devizer) {
        this->div(devizer);
        return *this;
    }

    Rational& operator*=(Rational const &devizer) {
        this->mul(devizer);
        return *this;
    }

    Rational& operator+=(int const &plus) {
        this->add(plus);
        return *this;
    }

    Rational& operator-=(int const &minus) {
        this->sub(minus);
        return *this;
    }

    Rational& operator/=(int const &devizer) {
        this->div(devizer);
        return *this;
    }

    Rational& operator*=(int const &devizer) {
        this->mul(devizer);
        return *this;
    }

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational operator-() const { Rational r(this->numerator_, this->denominator_); r.neg(); return r; }
    Rational operator+() const { Rational r(this->numerator_, this->denominator_);          return r; }

    Rational operator-(int value) const { Rational r(this->numerator_, this->denominator_); r -= value; return r; }
    Rational operator+(int value) const { Rational r(this->numerator_, this->denominator_); r += value; return r; }
    Rational operator/(int value) const { Rational r(this->numerator_, this->denominator_); r /= value; return r; }
    Rational operator*(int value) const { Rational r(this->numerator_, this->denominator_); r *= value; return r; }

    Rational operator*(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r *= in; return r; }
    Rational operator-(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r -= in; return r; }
    Rational operator+(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r += in; return r; }
    Rational operator/(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r /= in; return r; }

//    bool operator!=(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r.sub(in); return r.denominator_ && r.numerator_; }
//    bool operator==(const Rational &in) const { return !(*this != in); }
//    bool operator<(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r.sub(in); return (r.numerator_ * r.denominator_) < 0; }
//    bool operator>(const Rational &in) const { Rational r(this->numerator_, this->denominator_); r.sub(in); return (r.numerator_ * r.denominator_) > 0; }
//    bool operator<=(const Rational &in) const { return (*this < in) || (*this == in); }
//    bool operator>=(const Rational &in) const { return (*this > in) || (*this == in); }

//    bool operator==(int value) const { return *this == Rational(value); }
//    bool operator!=(int value) const { return *this != Rational(value); }
//    bool operator< (int value) const { return *this < Rational(value); }
//    bool operator> (int value) const { return *this > Rational(value); }
//    bool operator<=(int value) const { return *this <= Rational(value); }
//    bool operator>=(int value) const { return *this >= Rational(value); }

    operator double() const { return double(double((*this).numerator_) / double((*this).denominator_)); }
private:
    int numerator_;
    int denominator_;
};

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

//operator double(const Rational &in) const { return (double)in; }

//template<typename T>
struct String {
    String(const char *str = "");
    String(size_t n, char c);
//    ~String();

    String(const String &other) : size(other.size),
            str(new char[size + 1]) {
            for(size_t i = 0; i <= size; i++)
                (*(str + i)) = (*(other.str + i));
    }
//    String &operator=(const String &other);

    void append(const String &other);
    void resize(const size_t &size);

    struct SubString {
        SubString(String &p, size_t start_index) : parent(p),
            first_index(start_index) {}
        String operator[](size_t j) const { return parent.get(first_index, j); }
    private:
        String& parent;
        size_t first_index;
    };

    SubString operator[](size_t i) { return SubString(*this, i); }
   // String& operator[](size_t i) { return this->get(i, size); }

    String get(size_t i, size_t j) {
        char *ptr = new char[j - i + 1];
        size_t k = 0;
        for(; i < j; i++, k++)
            (*(ptr + k)) = (*(this->str + i));
        (*(ptr + k)) = '\0';
        return String(ptr);
        delete [] this->str;
        this->str = ptr;
        this->size = k;
//        delete [] ptr;
        return *this;
    }

    size_t size;
    char *str;
};

/***
 * В этой задаче вам требуется реализовать оператор [] для уже известного вам класса String.
 * Однако на этот раз оператор должен реализовывать нестандартное поведение: оператор нужно реализовать таким образом,
 * чтобы для объекта str класса String можно было писать str[i][j] и это выражение возвращало
 * подстроку начинающуюся в позиции i (считая с 0) и заканчивающуюся в позиции j (не включая).
 *
 * Например:
 *
 * String const hello("hello");
 * String const hell = hello[0][4]; // теперь в hell хранится подстрока "hell"
 * String const ell  = hello[1][4]; // теперь в ell хранится подстрока "ell"
 *
 *
 * Обратите внимание, что i может равняться j, в этом случае результатом должна быть пустая строка.
 * Гарантируется, что i никогда не будет больше j, и они не будут выходить за пределы длины строки.
 *
 * Требования к реализации: При выполнении задания вы можете создавать любые методы/конструкторы или даже структуры/классы, если они вам нужны.
 * Реализовывать методы, которые уже объявленны в шаблоне, не нужно  они уже реализованы.
 * При выполнении задания не вводите и не выводите что-либо. Реализовывать функцию main не нужно.
***/

struct SString {
    SString(const char *str = "");
    SString(size_t n, char c);
    ~SString();

    SString(const SString &other) : size(other.size),
        str(new char[size + 1]) {
        for(size_t i = 0; i <= size; i++)
            (*(str + i)) = (*(other.str + i));
    }

    SString &operator=(const SString &other);

    void append(const SString &other);

    struct SubSString {
        const SString *parent;
        size_t start_index;

        SubSString(const SString *parrent, size_t index) : parent(parrent), start_index(index) {}

        SString operator[](size_t index) const {
            if(index == start_index) {
                return *(new SString());
            }
            char *tmp = new char[index - start_index + 1];
            for(size_t i = start_index; i < index; i++) {
                *(tmp + i - start_index) = *(parent->str + i);
            }
            (*(tmp + index - start_index)) = '\0';
            SString output(tmp);
            delete [] tmp;
            return output;
        }
    };

    // struct SubSString {
    //     SubSString(const char *str = "", size_t index=0) : parrent(str), start_index(index) {}
    //     //~SubSString() { delete [] parrent; }

    //     const SString &operator [](size_t last) const;

    //     const char *parrent;
    //     size_t start_index;
    // };

    SubSString operator[](size_t index) const { return SubSString(this, index); }

    size_t size;
    char *str;
};

//String& operator[](size_t i) const { return this->get(i, size); }

class Method_Override_Rules_5_2_3_task
{
public:
    Method_Override_Rules_5_2_3_task();

    void test();
};

#endif // METHOD_OVERRIDE_RULES_5_2_3_TASK_H
