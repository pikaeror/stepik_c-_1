#include "Functions_Templates_6_2_task.h"

Functions_Templates_6_2_task::Functions_Templates_6_2_task()
{

}

void Functions_Templates_6_2_task::test()
{
    int ints[] = {1, 2, 3, 4};
    int *iptr = ints;
    double doubles[] = {3.14};
    auto d = array_size(ints); // вернет 4
    d = array_size(doubles); // вернет 1
    //d = array_size(iptr); // тут должна произойти ошибка компиляции

    struct Dummy { };
    typedef int type;

    std::cout << SameType<int, int>::value << std::endl; // выведет 1, т. е. true
    std::cout << SameType<int, type>::value << std::endl; // 1, type == int
    std::cout << SameType<int, int&>::value << std::endl; // 0, int и ссылка на int - различные типы
}
