#include <stdio.h>
#include <stdlib.h>
#include "simple_neural_networks.h"

#define SAD_PREDICTION_IDX 0
#define SICK_PREDICTION_IDX 1
#define ACTIVE_PREDICTION_IDX 2

#define NUM_OF_OUTPUTS 3
#define NUM_OF_INPUTS 3

double predicted_results[3];
// double hidden_predicted[3];

double input_to_hidden_weights[NUM_OF_HIDDEN][NUM_OF_INPUTS] = {
    //  temp humidity airqual
    {-2, 9.5, 2.01},    // hid[0]
    {-0.8, 7.2, 6.3},   // hid[1]
    {-0.5, 0.45, 0.9}}; // hid[2]

double hidden_to_output_weights[NUM_OF_OUTPUTS][NUM_OF_HIDDEN] = {
    // hid[0] hid[1] hid[2]
    {-1.0, 1.15, 0.11},   // sad
    {-0.18, 0.15, -0.01}, // sick
    {0.25, -0.25, -0.1}}; // active

double inputs[NUM_OF_INPUTS] = {30, 87, 110}; // temp hum air_q

int main()
{
    hidden_layer_nn(inputs, NUM_OF_INPUTS, NUM_OF_HIDDEN, input_to_hidden_weights, NUM_OF_OUTPUTS, hidden_to_output_weights, predicted_results);
    printf("Sad prediction: %f\r\n", predicted_results[SAD_PREDICTION_IDX]);
    printf("Sick prediction: %f\r\n", predicted_results[SICK_PREDICTION_IDX]);
    printf("Active prediction: %f\r\n", predicted_results[ACTIVE_PREDICTION_IDX]);
}