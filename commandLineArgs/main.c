/*
Using command line arguments:

Commmand line arguments are provided when you run the program
from the terminal

complie the program as you would normally:
> clang command_line_arguments.c -o commandline

when you run the program provide input
> ./commandline arg1 arg2 arg3

The main function input would result in the following

argc = 4
argv would be the array of strings
[0] = "./commandline"
[1] = "arg1"
[2] = "arg2"
[3] = "arg3"


*/

#include <stdio.h>
#include <stdlib.h>

/*
 main with parameters
  argc - the number of commmand line arguments
  argv - a pointer to a pointer to a character
 An easier way to think about it is that argv is an array
 of strings, and argc is the number of elements in that array
*/

int main(int argc, char** argv)
{
    //print out all the command line arguments
    //the 0th element is always the program itself
    for(int i = 0; i < argc;i++)
    {
        printf("%s\n", argv[i]);
           //or
        //printf("%s\n", *(argv+i));
    }
    
    //printf("%d", ((int)(*argv[1])-48));
}






