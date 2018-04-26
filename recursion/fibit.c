
//0,1,1,2,3,5,8,13,21,34,55,89,…
//Fn = Fn-1 + Fn-2,

#include <stdio.h>


int fibit(int);

int main (void)
{
  int fib_limit = 7;
  printf("%d\n", fibit(fib_limit));
}

int fibit(int limit)
{
  int Fn_1 = 1;
  int Fn_2 = 1;
  int Fn;

  for(int i = 0; i < limit; i++)
  {
    if(i == 0 || i == 1)
    {

    }
    else
    {
        Fn = Fn_1 + Fn_2;
        Fn_1 = Fn_2;
        Fn_2 = Fn;


    }

  }
  return Fn;
}
