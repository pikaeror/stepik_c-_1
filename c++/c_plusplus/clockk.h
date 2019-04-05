#ifndef CLOCKK_H
#define CLOCKK_H

#include <iostream>
#include <iomanip>
#include <cmath>

class clockk
{
public:
    clockk();
    clockk(int seconds);
    clockk(int hour, int minutes, int seconds);

    clockk operator-(clockk& rv);

    void print_in_electronick_clock();

    int get_full_seconds();
private:
    int hour;
    int minutes;
    int seconds;
};

#endif // CLOCKK_H
