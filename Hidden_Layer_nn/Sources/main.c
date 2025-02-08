#include <stdio.h>
#include <stdlib.h>
#include "simple_neural_networks.h"

#define SAD_PREDICTION_IDX 0
#define SICK_PREDICTION_IDX 1
#define ACTIVE_PREDICTION_IDX 2

#define IN_LEN 3
#define OUT_LEN 3

double predicted_results[3];
// temp hum airqual
double weights[OUT_LEN][IN_LEN] = {{-2, 9.5, 2.01},    // sad
                                   {-0.8, 7.2, 6.3},   // sick
                                   {-0.5, 0.45, 0.9}}; // active
                                                       // temp hum airqual
double inputs[IN_LEN] = {30, 87, 110};

int main()
{
    multiple_input_multiple_output_nn(inputs, IN_LEN, predicted_results, OUT_LEN, weights);
    printf("Sad Prediction: %f\r\n", predicted_results[SAD_PREDICTION_IDX]);
    printf("Sick Prediction: %f\r\n", predicted_results[SICK_PREDICTION_IDX]);
    printf("Active Prediction: %f\r\n", predicted_results[ACTIVE_PREDICTION_IDX]);
}