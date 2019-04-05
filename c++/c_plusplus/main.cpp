#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <cmath>

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

class clockk{
public:
    int hour;
    int minutes;
    int seconds;
    clockk() {
    }
    clockk(int hour, int minutes, int seconds) {
        this->hour = hour;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    int operator-(clockk& rv) {
        return this->get_seconds() - rv.get_seconds();
    }
    int get_seconds() {
        return hour * 3600 + minutes * 60 + seconds;
    }
    void culculate(int sec) {
        float pre_hour = floor(float(sec) / 3600.);
        hour = int(pre_hour) % 24;
        seconds = sec % 60;
        minutes = ((sec - seconds) / 60) % 60;
    }
    void print() {
        std::cout<<hour<<':';
        std::cout<<std::setfill('0')<<std::setw(2)<<minutes;
        std::cout<<std::setw(1)<<':'<<std::setw(2)<<seconds;
    }
};

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
    clockk* cl_1 = new clockk(h, m, s);
    std::cin>>h;
    std::cin>>m;
    std::cin>>s;
    clockk* cl_2 = new clockk(h, m, s);
    std::cout<<cl_2->operator-(*cl_1);
    return a.exec();
}
