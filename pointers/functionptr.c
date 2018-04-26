#include <stdio.h>
#include <stdlib.h>

void for_all(int arr[],int size, void (*func)(int*));
void printer(int* a);
void doubled(int* a);
void addTwo(int* a);

int main()
{

  int nums[]={1,3,5,6,7};
    
  for_all(nums,5, printer);
    
  printf("%c ",'\n');
  
    for_all(nums,5, doubled);
  
    for_all(nums,5, printer);
  printf("%c ",'\n');
  for_all(nums,5, addTwo);
  for_all(nums,5, printer);
  printf("%c ",'\n');

}


void printer(int *a)
{
  printf("%d ",*a);
}

void doubled(int *a)
{
  *a *= 2;
}

void addTwo(int *a)
{
  *a += 2;
}
void for_all(int arr[],int size, void (*func)(int*))
{
  int i;
  for(i=0;i<size;i++)
  {
    func(&arr[i]);
  }
}
