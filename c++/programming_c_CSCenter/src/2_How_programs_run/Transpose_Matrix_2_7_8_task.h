#ifndef TRANSPOSE_MATRIX_2_7_8_TASK_H
#define TRANSPOSE_MATRIX_2_7_8_TASK_H
#include <iostream>

class Transpose_Matrix_2_7_8_task
{
public:
    Transpose_Matrix_2_7_8_task();

    int **transpose(const int * const * m,
                     unsigned rows,
                     unsigned cols);
    int **create_matrix(const size_t &row,
                        const size_t &col);

    void tested();
};

#endif // TRANSPOSE_MATRIX_2_7_8_TASK_H
