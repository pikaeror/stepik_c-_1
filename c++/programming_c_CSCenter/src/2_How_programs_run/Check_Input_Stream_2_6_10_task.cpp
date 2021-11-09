#include "Check_Input_Stream_2_6_10_task.h"

Check_Input_Stream_2_6_10_task::Check_Input_Stream_2_6_10_task()
{

}

char *Check_Input_Stream_2_6_10_task::getline(size_t start_buffer_size)
{
    char time_value;
    char *output_values = new char[start_buffer_size];
    std::cin.get(time_value);
    size_t counter = 0;
    while (!(time_value == '\n' || time_value == std::cin.eof())) {
        if(counter > size_t(std::strlen(output_values)) - 2)
            output_values = resize(output_values,
                                   std::strlen (output_values),
                                   std::strlen (output_values) + start_buffer_size);
        *(output_values + counter) = time_value;
        counter++;
        std::cin.get(time_value);
    }
    *(output_values + counter) = '\0';
    return output_values;
}

char* Check_Input_Stream_2_6_10_task::resize(char *str, unsigned size, unsigned new_size)
{
    char *out_put_values = new char[new_size];
    for(size_t i = 0; i < (size < new_size ? size : new_size); i++ ) {
        *(out_put_values + i) = *(str + i);
    }
    delete [] str;
    //str = 0;
//    str = new char[new_size];
//    str = out_put_values;
//    delete []out_put_values;
    return out_put_values;
}
