#include "Virtual_Methods_4_3_8_task.h"

Virtual_Methods_4_3_8_task::Virtual_Methods_4_3_8_task()
{

}

void Virtual_Methods_4_3_8_task::test()
{
    Expression * sube = new BinaryOperation(new Number(4.5), '*', new Number(5));
    // потом используем его в выражении для +
    Expression * expr = new BinaryOperation(new Number(3), '+', sube);

    // вычисляем и выводим результат: 25.5
    std::cout << expr->evaluate() << std::endl;

    // тут освобождаются *все* выделенные объекты
    // (например, sube будет правым операндом expr, поэтому его удалять не нужно)
    delete expr;
}

Number BinaryOperation::calculate() const
{
    switch (op) {
    case '+':
        return Number(left->evaluate() + right->evaluate());
    case '-':
        return Number(left->evaluate() - right->evaluate());
    case '*':
        return Number(left->evaluate() * right->evaluate());
    case '/':
        return Number(left->evaluate() / right->evaluate());
    }
}
