typedef struct vector {
    float* vector;
    int length;
} vector; 

float simple_sum(vector*);
float kahan_sum(vector*);