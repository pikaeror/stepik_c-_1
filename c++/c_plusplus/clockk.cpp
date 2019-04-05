#include "clockk.h"

clockk::clockk()
{
    this->hour = 0;
    this->minutes = 0;
    this->seconds = 0;
}

clockk::clockk(int seconds)
{
    float pre_hour = floor(float(seconds) / 3600.);
    this->hour = int(pre_hour) % 24;
    this->seconds = seconds % 60;
    this->minutes = ((seconds - this->seconds) / 60) % 60;
}

clockk::clockk(int hour, int minutes, int seconds) {
    this->hour = hour;
    this->minutes = minutes;
    this->seconds = seconds;
}

clockk clockk::operator-(clockk& rv)
{
    int seconds = this->get_full_seconds() - rv.get_full_seconds();
    clockk temp = clockk(seconds);
    return temp;
}

int clockk::get_full_seconds() {
    return this->hour * 3600 + this->minutes * 60 + this->seconds;
}

void clockk::print_in_electronick_clock() {
    std::cout<<this->hour<<':';
    std::cout<<std::setfill('0')<<std::setw(2)<<this->minutes;
    std::cout<<std::setw(1)<<':'<<std::setw(2)<<this->seconds;
}
