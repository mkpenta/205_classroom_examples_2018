/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

    srand(time(NULL));
    
    int quantity = 6;
    int shift = 1;
    int r = rand() % quantity + shift;
    int guess;
    char choice = 'a';
  
    while(choice != 'q')
    {
        r = rand() % quantity + shift;
        do
        {
            puts("Enter a number between 1 and 6");
            scanf(" %d", &guess);
            
        }while(guess < 1 || guess > 6);
        
        //user input is ok
        if(guess == r)
        {
            puts("Good guess");
        }
        else
        {
            puts("bad guess");
        }
      puts("Enter a q to quit, any other character to play again");
      scanf(" %c", &choice);
    }
    puts("goodbye");
}
