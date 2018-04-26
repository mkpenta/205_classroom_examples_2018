/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>

int main() 
{

    int num = 0;
    
    puts("Enter a 3 digit integer");
    
    scanf(" %d", &num);
    
    int ones = 0, tens=0, huns=0;
    printf("%d, %d, %d\n", ones, tens, huns);
    
    /*
        %  - mod
        /  - int div
    */
    
    ones = num % 10 / 1;
    tens = num % 100 / 10;
    huns = num % 1000 / 100;

    printf("%d, %d, %d \n", huns , tens,ones);

}
