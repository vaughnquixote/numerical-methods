#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include "sum.h"

int main(int argc, char *argv[]) {
   float arr4[100];
   for (int i = 0; i < 100; i++){
      arr4[i] = 0.1;
   }
   vector v4 = {arr4, 100};
   float s4 = simple_sum(&v4);
   printf("%f\n", s4);

   float s5 = kahan_sum(&v4);
   printf("%f\n", s5);
}