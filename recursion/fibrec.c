
//0,1,1,2,3,5,8,13,21,34,55,89,…
//Fn = Fn-1 + Fn-2,

#include <stdio.h> 


int fib(int);

int main (void)
{
  int fib_limit = 7;
  printf("%d\n", fib(fib_limit));
}

int fib(int n)
{
  int res;
  if( n <=1 )
  {
    res = n;
    //printf("%d",res);
  }
  else
  {
    res = fib(n-1) + fib(n-2);
    //printf("%d",res);
  }

  return res;
}







