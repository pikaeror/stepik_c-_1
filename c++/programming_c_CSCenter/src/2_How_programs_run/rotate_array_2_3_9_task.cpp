#include "rotate_array_2_3_9_task.h"

rotate_array_2_3_9_task::rotate_array_2_3_9_task()
{
    int a[] = {1, 2, 3, 4, 5};
    rotate(a, 5, 2);
}

void rotate_array_2_3_9_task::rotate(int a[], unsigned size, int shift)
{
    shift %= size;
    if(!shift)
        return;
    int first = a[0];
    for(int count = 0; count < size - 1; count++) {
        *(a + count) = *(a + count + 1);
    }
    *(a + size - 1) = first;
    rotate(a, size, shift - 1);
}
