#include "Classes_Templates_6_1_task.h"

Classes_Templates_6_1_task::Classes_Templates_6_1_task()
{

}

void Classes_Templates_6_1_task::test()
{
    Exp j, t(5);
    t = j;

    Array<int> k, kk(2, 56), kkk(kk);
    Array<Exp> d(6, 4.);
    bool g = (&k == &kk);
    k = kk;
    kk = kk;
    kk[0] += + 3;
    auto l = d[3];
}
