#ifndef ACCESS_MODIFIERS_3_5_7_TASK_H
#define ACCESS_MODIFIERS_3_5_7_TASK_H
#include <stdio.h>

struct Cls {
    Cls(char c, double d, int i) : c(c),
        d(d),
        i(i) {};
private:
    char c;
    double d;
    int i;
};

class Access_Modifiers_3_5_7_task
{
public:
    Access_Modifiers_3_5_7_task();

    void test();
private:
    char &get_c(Cls &cls);
    double &get_d(Cls &cls);
    int &get_i(Cls &cls);
};

#endif // ACCESS_MODIFIERS_3_5_7_TASK_H
