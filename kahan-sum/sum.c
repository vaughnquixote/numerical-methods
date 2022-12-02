#include <stdio.h>
#include "sum.h"

float simple_sum(vector* v) {
    float sum = 0;
    for (int i = 0; i < v->length; i++) {
        sum += v->vector[i];
    }
    return sum;
}

float kahan_sum(vector* v) {
    float sum = 0;
    float compensation = 0;
    for (int i = 0; i < v->length; i++) {
        float current = v->vector[i] + compensation;
        float next_sum = sum + current;
        compensation = current - (next_sum - sum);
        sum = next_sum;
    }
    return sum;
}
