#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class money
{
public:
    money();
    money(std::uint64_t rubli, std::uint64_t copeiki);

    std::uint64_t Get_full_copeiki();
private:
    std::uint64_t rubli;
    std::uint64_t copeiki;
};

#endif // MONEY_H
