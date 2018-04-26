

#include <stdio.h>

void printArray(int arr[], int size);
void printCharArray(char arr[], int size);
int findSmallestValue(int arr[], int z);
int findIndexOfSmallest(int arr[], int z);
void replaceSmallest(int arr[], int z, int toReplace);


int main() 
{

    int numbers[] = {1, 2, 3, 4};    
    int otherNumbers[10] = {-5, 1, -7, 4};  
    char garbage[10];
    
    int x = sizeof(otherNumbers);
    int y = sizeof(garbage);
    int z = sizeof(otherNumbers)/sizeof(int);
    
    
    printArray(otherNumbers, 10);
    
    int val = findSmallestValue(otherNumbers, z);
    
    printf("smallest val = %d\n",val);
    
    printArray(otherNumbers, 10);
    
    replaceSmallest(otherNumbers, z, 42);
    
    printArray(otherNumbers, 10);
    
    //printf("x = %d, y = %d, z = %d\n", x, y, z);
    
    //printArray(numbers, 4);
  
    //printCharArray(garbage, 10);
    
}

int findIndexOfSmallest(int arr[], int size)
{
    int indexOfSmallest = 0;
    for(int i = 1; i < size; i++)
    {
        if(arr[indexOfSmallest] > arr[i])
        {
            indexOfSmallest = i;
        }
    }
    return indexOfSmallest;
}

void replaceSmallest(int arr[], int z, int toReplace)
{
    int indexOfSmallest = findIndexOfSmallest(arr,z);
    
    arr[indexOfSmallest] = toReplace;
}

int findSmallestValue(int arr[], int size)
{
    int smallest  = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

void printCharArray(char arr[], int size)
{
    printf("%c",'[');
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            printf("%c", arr[i]);
        }
        else
        {
             printf("  %c", arr[i]);
        }
    }
    puts("]");
}
void printArray(int arr[], int size)
{
    printf("%c",'[');
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            printf("%d", arr[i]);
        }
        else
        {
             printf(", %d", arr[i]);
        }
    }
    puts("]");
}
