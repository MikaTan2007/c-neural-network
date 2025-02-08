#include <stdio.h>
#include <stdlib.h>
#include "simple_neural_networks.h"

#define Sad 0.9

#define TEMPERATURE_PREDICTION_IDX 0
#define HUMIDITY_PREDICTION_IDX 1
#define AIR_QUALITY_PREDICTION_IDX 2

#define VECTOR_LEN 3

double predicted_results[3];
// Temperature, Humidity, Air Quality
double weights[3] = {-20, 95, 201};

int main()
{
    single_in_multiple_out_nn(Sad, weights, predicted_results, VECTOR_LEN);

    printf("Predicted Temperature is : %f\r\n", predicted_results[TEMPERATURE_PREDICTION_IDX]);
    printf("Predicted Humidity is : %f\r\n", predicted_results[HUMIDITY_PREDICTION_IDX]);
    printf("Predicted Air Quality is : %f\r\n", predicted_results[AIR_QUALITY_PREDICTION_IDX]);
}