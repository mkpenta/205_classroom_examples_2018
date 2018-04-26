/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>
int* findit(int* ar, int target);

int main() {
    int nums [] = {2, 3, 4, 5, 6, 7, 2, 3, 4, 5 ,2, 3, 9, -1};
    int* loc = findit(nums, 5);
    printf("%d\n",*loc);
    printf("%p %p \n", &nums[3], loc);
    
    loc = findit(loc, 5);
    printf("%d\n",*loc);
    printf("%p %p \n", &nums[9], loc);
    
}

int* findit(int* ar, int target)
{
    while(*ar != -1 && *ar != target)
    {
       ar++;
    }
    return (ar);
    
}