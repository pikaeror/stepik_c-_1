#ifndef CHECK_INPUT_STREAM_2_6_10_TASK_H
#define CHECK_INPUT_STREAM_2_6_10_TASK_H
#include <iostream>

class Check_Input_Stream_2_6_10_task
{
public:
    Check_Input_Stream_2_6_10_task();

    char *getline(size_t start_buffer_size = 32);

    char *resize(char *str,
                 unsigned size,
                 unsigned new_size);
};

#endif // CHECK_INPUT_STREAM_2_6_10_TASK_H
