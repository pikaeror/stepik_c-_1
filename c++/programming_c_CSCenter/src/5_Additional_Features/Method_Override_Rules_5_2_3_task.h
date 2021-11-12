#ifndef METHOD_OVERRIDE_RULES_5_2_3_TASK_H
#define METHOD_OVERRIDE_RULES_5_2_3_TASK_H
//#include <string>

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

    String(const String &other);
//    String &operator=(const String &other);

    void append(const String &other);

    struct SubString {
        SubString(String &p, size_t start_index) : parent(p),
            first_index(start_index) {}
        String& operator[](size_t j) const { return parent.get(first_index, j); }
    private:
        String& parent;
        size_t first_index;
    };

    SubString operator[](size_t i) { return SubString(*this, i); }
    String& operator[](size_t i) { return this->get(i, size); }

    String& get(size_t i, size_t j) {
        char *ptr = new char[j - i];
        size_t k = 0;
        for(; i < j; i++, k++)
            (*(ptr + k)) = (*(this->str + i));
        (*(ptr + k)) = '\0';
        delete [] this->str;
        this->str = ptr;
        this->size = k;
//        delete [] ptr;
        return *this;
    }

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
