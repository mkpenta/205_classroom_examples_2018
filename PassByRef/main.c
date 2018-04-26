#include <stdio.h>
void calculator(float a, float b, float c, float* avg, float* sum);

int main()
{

float avg;
float sum;
calculator(3, 5, 7, &avg, &sum);
/*
  //alternate way to setup and call
  float* avg_ptr, sum_ptr;
  avg_ptr = &avg;
  sum_ptr = &sum;
  calculator(3, 5, 7, avg_ptr, sum_ptr);
*/

 printf( "avg = %f, sum = %f", avg, sum);
}


void calculator(float a, float b, float c, float* avg, float* sum)
{

  *sum = a + b + c;
  *avg = (*sum)/3.0;

}
