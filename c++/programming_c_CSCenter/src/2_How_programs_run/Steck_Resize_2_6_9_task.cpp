#include "Steck_Resize_2_6_9_task.h"

Steck_Resize_2_6_9_task::Steck_Resize_2_6_9_task()
{

}

char *Steck_Resize_2_6_9_task::resize(const char *str,
                                      unsigned size,
                                      unsigned new_size)
{
    char *out_put_values = new char[new_size];
    for(size_t i = 0; i < (size < new_size ? size : new_size); i++ ) {
        out_put_values[i] = str[i];
    }
    delete [] str;
    str = 0;
    return out_put_values;
}
