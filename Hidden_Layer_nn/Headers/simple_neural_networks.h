#ifndef _SIMPLE_NEURAL_NETWORKS_H_
#define _SIMPLE_NEURAL_NETWORKS_H_

void multiple_input_multiple_output_nn(double *input_vector,
                                       int INPUT_LEN,
                                       double *output_vector,
                                       int OUTPUT_LEN,
                                       double weight_matrix[OUTPUT_LEN][INPUT_LEN]);
#endif // _SIMPLE_NEURAL_NETWORKS_H_