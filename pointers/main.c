#include <stdio.h>

int main()
{

    float m = 2.1;
    int x = 3;
    
    float* float_ptr;
    int* int_ptr;
    
    float_ptr = &m;
    int_ptr = &x;
    
    printf("m val = %f\nx val = %d\nm addr = %p\nx addr = %p\n", m, x, &m, &x);
    printf("float ptr pointing to %p with value of %f", float_ptr, *float_ptr);
    printf("int ptr pointing to %p with value of %d", int_ptr, *int_ptr);
}
