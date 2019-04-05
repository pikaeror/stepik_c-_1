#include "money.h"

money::money()
{
    this->rubli = 0;
    this->copeiki = 0;
}

money::money(std::uint64_t rubli, std::uint64_t copeiki)
{
    this->rubli = rubli;
    this->copeiki = copeiki;
}

std::uint64_t money::Get_full_copeiki()
{
    std::uint64_t hundrid = 100;
    return this->rubli * hundrid + this->copeiki;
}
