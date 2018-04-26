#include <stdio.h>  //printf(), scanf()

void count(int);

int main (void)
{
  count(5);
}

void count(int limit)
{
  if(limit > 0 )
  {
    count(limit-1);
    printf("%d\n", limit);
    
  }
  else
  {
    printf("%d\n",limit); 
  }

}
