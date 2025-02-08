#include <stdio.h>
#include <stdlib.h>
#include "simple_neural_networks.h"

#define SAD_PREDICTION_IDX 0
#define SICK_PREDICTION_IDX 1
#define ACTIVE_PREDICTION_IDX 2

#define NUM_OF_HIDDEN 3
#define NUM_OF_OUTPUTS 3
#define NUM_OF_INPUTS 3

double predicted_results[3];
double hidden_predicted[3];

input_to_hidden_weights[NUM_OF_INPUTS][NUM_OF_HIDDEN] = {
    //  temp humidity airqual
    {0.2, 0.1, 0.5},  // hid[0]
    {0.3, 0.5, 0.6},  // hid[1]
    {0.0, 0.8, 0.7}}; // hid[2]

hidden_to_output_weights[NUM_OF_HIDDEN][NUM_OF_OUTPUTS] = {
    // hid[0] hid[1] hid[2]
    {0.4, 0.2, 0.3},  // sad
    {0.5, 0.2, 0.1},  // sick
    {0.2, 0.4, 0.8}}; // active

int main()
{
}