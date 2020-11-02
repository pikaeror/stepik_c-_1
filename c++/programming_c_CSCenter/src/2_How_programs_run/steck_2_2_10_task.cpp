#include "steck_2_2_10_task.h"

Steck_2_2_10_task::Steck_2_2_10_task()
{

}

void Steck_2_2_10_task::listen_stream()
{
    int a;
    std::cin >> a;
    if ( !a )
        return;
    listen_stream();
    std::cout << a << " ";
}
