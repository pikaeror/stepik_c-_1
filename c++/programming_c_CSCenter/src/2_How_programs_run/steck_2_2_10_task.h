#ifndef STECK_2_2_10_TASK_H
#define STECK_2_2_10_TASK_H
#include <vector>
#include <iostream>


class Steck_2_2_10_task
{
public:
    Steck_2_2_10_task();

    void listen_stream();

private:
    std::vector<int> m_steck;
};

#endif // STECK_2_2_10_TASK_H
