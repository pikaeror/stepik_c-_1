#include "Check_Input_Stream_2_6_10_task.h"
#include <vector>

Check_Input_Stream_2_6_10_task::Check_Input_Stream_2_6_10_task()
{

}

char *Check_Input_Stream_2_6_10_task::getline(size_t start_buffer_size)
{
    char time_value;
    char *output_value = new char[start_buffer_size];
    size_t lens = start_buffer_size;
    //std::cin.get(time_value);
    size_t counter = 0;
    while (!(!std::cin.get(time_value) || time_value == '\n' || time_value == '\0')) {
        if(counter > lens - 1) {
            output_value = resize(output_value, lens, lens + start_buffer_size);
            //lens += start_buffer_size;
        }
        *(output_value + counter) = time_value;
        counter++;
        //std::cin.get(time_value);
    }
    *(output_value + counter) = '\0';
    return output_value;
}

char *Check_Input_Stream_2_6_10_task::new_init(char *str, size_t lens)
{
    char *output = new char[lens + 1];
    size_t count = 0;
    while (str) {
        *(output + count) = *str++;
        count++;
        if(*str == '\0')
            break;
    }
    str -= count;
    free(str);
//    str = 0;
    return output;
}

char* Check_Input_Stream_2_6_10_task::resize(char *str, size_t &size, size_t new_size)
{
    char *out_put_values = new char[new_size];
    std::strcpy(out_put_values, str);
    delete [] str;
    size = new_size;
    //    str = 0;
    return out_put_values;
}
