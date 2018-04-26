#include <stdio.h>

void midpoint(float x1, float y1, float x2, float y2, float* xm, float* ym);


int main()
{
    float x1 = 2, y1 = 2, x2=6, y2=6, xm , ym;
    
    midpoint(x1, y1, x2, y2, &xm, &ym);
    
    printf("%f, %f", xm, ym);
}


void midpoint(float x1, float y1, float x2, float y2, float* xm, float* ym)
{
  *xm = (x2 + x1)/2;
  *ym = (y2 + y1)/2;
}
    