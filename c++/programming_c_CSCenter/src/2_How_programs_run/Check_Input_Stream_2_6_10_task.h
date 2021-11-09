#ifndef CHECK_INPUT_STREAM_2_6_10_TASK_H
#define CHECK_INPUT_STREAM_2_6_10_TASK_H
#include <iostream>

class Check_Input_Stream_2_6_10_task
{
public:
    Check_Input_Stream_2_6_10_task();

    char *getline(size_t start_buffer_size = 8);

    char *new_init(char *str, size_t lens);
    char* resize(char *str,
                 size_t &size,
                 size_t new_size);
};

#endif // CHECK_INPUT_STREAM_2_6_10_TASK_H
