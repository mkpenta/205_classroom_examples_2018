

#include <stdio.h>

//prototype
int findGreatest(int, int);

int main() 
{
    int userin1;
    int userin2;
    
    int m = 3;
    int n = 4;
    
    puts("Enter 2 numbers");
    scanf(" %d %d", &userin1, &userin2);
    
    
    printf("%d\n", findGreatest(25, 53));
    
    int userGreatest = findGreatest(userin1, userin2);
    printf("%d\n", userGreatest);
    
    int greatest = findGreatest(m, n);
    printf("%d\n", greatest);
    
}


//definition!!!!!!!!!!
int findGreatest(int a, int b)
{
    int greatest = a;
    if(b > a)
    {
        greatest = b;
    }
    return greatest;
}
