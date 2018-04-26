

#include <stdio.h>
#include <stdlib.h> //random
#include <time.h> //time to seed random
#include <math.h> //lots of math


int testFloats(float, float, float);

int main() 
{
    float x = 3.00000000000001;
    float y = 6.0/2.0;
    
    
    if(testFloats(x, y, .00000000001) == 1)
    {
        puts("EQUAL");
    }
    else
    {
        puts("NOT");
    }
    
    
}

int testFloats(float a, float b, float tolerance)
{
    int answ = 0;
    if(fabs(a - b) > tolerance )
    {
       answ = 0;
    }
    else
    {
        answ = 1;
    }
    
    return answ;
}


