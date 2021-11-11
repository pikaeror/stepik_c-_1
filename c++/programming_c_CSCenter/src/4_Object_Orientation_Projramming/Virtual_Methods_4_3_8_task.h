#ifndef VIRTUAL_METHODS_4_3_8_TASK_H
#define VIRTUAL_METHODS_4_3_8_TASK_H
#include <iostream>

struct Expression
{
    virtual double evaluate() const = 0;
    virtual ~Expression() {};
};

struct Number : Expression
{
    Number(double value)
        : value(value)
    {}

    double evaluate() const { return value; }
private:
    double value;
};

struct BinaryOperation : Expression
{
    /*
      Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
      которые вам нужно реализовать.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), right(right), op(op)
    { }

    double evaluate() const { return calculate().evaluate(); }

    ~BinaryOperation() {
        delete left;
        delete right;
    };

private:
    Number calculate() const;

    Expression const * left;
    Expression const * right;
    char op;
};

class Virtual_Methods_4_3_8_task
{
public:
    Virtual_Methods_4_3_8_task();

    void test();

    bool check_equals(Expression const *left, Expression const *right);
};

#endif // VIRTUAL_METHODS_4_3_8_TASK_H
