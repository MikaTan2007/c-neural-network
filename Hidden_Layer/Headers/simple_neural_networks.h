#ifndef _SIMPLE_NEURAL_NETWORKS_H_
#define _SIMPLE_NEURAL_NETWORKS_H_

#define NUM_OF_HIDDEN 3
double hidden_predicted_vector[NUM_OF_HIDDEN];
void hidden_layer_nn(double *input_vector,
                     int INPUT_LEN,
                     int HIDDEN_LEN,
                     double in_to_hid_weights[HIDDEN_LEN][INPUT_LEN],
                     int OUTPUT_LEN,
                     double hid_to_out_weights[OUTPUT_LEN][HIDDEN_LEN],
                     double *output_vector);
#endif // _SIMPLE_NEURAL_NETWORKS_H_