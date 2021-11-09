#include "Swap_Min_2_7_9_task.h"
#include "algorithm"

Swap_Min_2_7_9_task::Swap_Min_2_7_9_task()
{

}

void Swap_Min_2_7_9_task::swap_min(int *m[],
                                   unsigned rows,
                                   unsigned cols)
{
    int min_value = *(*(m));
    unsigned row;
    int *min_row;
    for(unsigned i = 0; i < rows; i++) {
        auto min = std::min_element((*(m + i)), (*(m + i)) + cols);
        if((*(min)) < min_value) {
            min_value = (*(min));
            min_row = (*(m + i));
            row = i;
        }
    }
    (*(m + row)) = (*(m));
    (*(m)) = min_row;
}
