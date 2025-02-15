#include "simple_neural_networks.h"
#include <math.h>

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
                     int HIDDEN_LEN,
                     double in_to_hid_weights[HIDDEN_LEN][INPUT_LEN],
                     int OUTPUT_LEN,
                     double hid_to_out_weights[OUTPUT_LEN][HIDDEN_LEN],
                     double *output_vector)
{
    matrix_vector_multiply(input_vector, INPUT_LEN, hidden_predicted_vector, HIDDEN_LEN, in_to_hid_weights);
    matrix_vector_multiply(hidden_predicted_vector, HIDDEN_LEN, output_vector, OUTPUT_LEN, hid_to_out_weights);
}

double find_error(double input, double weight, double expected_value)
{
    double predicted_value = input * weight;
    return powf((predicted_value - expected_value), 2);
}

double find_error_simple(double yhat, double y)
{
    return powf((yhat - y), 2);
}