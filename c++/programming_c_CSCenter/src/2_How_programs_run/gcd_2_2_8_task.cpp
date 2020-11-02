#include "gcd_2_2_8_task.h"

GCD_2_2_8_task::GCD_2_2_8_task()
{

}

unsigned GCD_2_2_8_task::GCD(unsigned a, unsigned b)
{
    if(a == 0 || b == 0)
        return a + b;
    a > b ? GCD(a % b, b) : GCD(a, b % a);
}
