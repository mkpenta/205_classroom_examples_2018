/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>

int main() {
	int n = 0;
   
    
    do
    {
        puts("Enter a number between 2 and 4");
        scanf("%d",&n);
        
    }while(n < 2 || n >4 );
    
}
