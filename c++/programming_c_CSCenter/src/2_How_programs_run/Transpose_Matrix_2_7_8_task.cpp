#include "Transpose_Matrix_2_7_8_task.h"

Transpose_Matrix_2_7_8_task::Transpose_Matrix_2_7_8_task()
{

}

int **Transpose_Matrix_2_7_8_task::transpose(const int * const *m,
                                             unsigned rows,
                                             unsigned cols)
{
    int **output_matrix = create_matrix(cols, rows);
    for(size_t i = 0; i < rows; i++) {
        for(size_t j = 0; j < cols; j++) {
            (*(*(output_matrix + j) + i)) = (*(*(m + i) + j));
        }
    }
    return output_matrix;
}

int **Transpose_Matrix_2_7_8_task::create_matrix(const size_t &row,
                                                 const size_t &col)
{
    int **output_matrix = new int * [row];
    *output_matrix = new int[row * col];
    for(size_t i = 1; i < row; i++) {
        output_matrix[i] = output_matrix[i - 1] + col;
    }
    return output_matrix;
}

void Transpose_Matrix_2_7_8_task::tested()
{
    int **k = create_matrix(4, 3);
    for(size_t i = 0; i < 4 * 3; i++) {
        (*(*(k) + (int)i)) = (int)i;
        std::cout << (*(*(k) + i));
    }
    int **transpos = transpose(k, 4, 3);
    std::cout << '\n';
    for(size_t i = 0; i < 4 * 3; i++) {
        std::cout << (*(*(transpos) + i));
    }
}
