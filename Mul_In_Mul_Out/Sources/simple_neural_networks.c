#include "simple_neural_networks.h"

void matrix_vector_multiply(double *input_vector,
                            int INPUT_LEN,
                            double *output_vector,
                            int OUTPUT_LEN,
                            double weight_matrix[OUTPUT_LEN][INPUT_LEN])
{
    for (int k = 0; k < OUTPUT_LEN; k++)
    {
        for (int i = 0; i < INPUT_LEN; i++)
        {
            output_vector[k] += input_vector[i] * weight_matrix[k][i];
        }
    }
}

void hidden_layer_nn(double *input_vector,
                     int INPUT_LEN,
                     double *output_vector,
                     int OUTPUT_LEN,
                     double weight_matrix[OUTPUT_LEN][INPUT_LEN])
{
    matrix_vector_multiply()
}