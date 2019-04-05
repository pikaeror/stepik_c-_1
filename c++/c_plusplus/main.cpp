#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "clockk.h"

int sum(int value, int sum_v=0) {
    if(std::abs(value) < 1) {
        return sum_v;
    }
    return sum(int(value/10), sum_v + value%10);
}

int next_even_value(int value) {
    if(value % 2 == 0) {
        return value + 2;
    }
    return ++value;
}

int count_of_desk(int person) {
    return ceil(float(person) / 2);
}

std::uint64_t Cost_by_cake(std::uint64_t rub, std::uint64_t kop, std::uint64_t count) {
    std::uint64_t hundrid = 100;
    std::uint64_t k = (rub * count * hundrid);
    std::uint64_t d = (kop * count);
    return k + d;
}

void Print_coast(std::uint64_t coast) {
    std::uint64_t f = coast / 100;
    std::uint64_t rub = floor(f);
    std::cout<<rub<<' '<<coast % 100;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int h, m, s;
    std::cin>>h;
    std::cin>>m;
    std::cin>>s;
    clockk cl_1 = clockk(h, m, s);
    std::cin>>h;
    std::cin>>m;
    std::cin>>s;
    clockk cl_2 = clockk(h, m, s);
    clockk cl_3;
    cl_3 = cl_2 - cl_1;
    std::cout<<cl_3.get_full_seconds();
    return a.exec();
}
