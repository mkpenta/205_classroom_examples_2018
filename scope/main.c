

#include <stdio.h>

void useLocal( void );       /* function prototype */
void useStaticLocal( void ); /* function prototype */
void useGlobal( void );      /* function prototype */

int x = 1; /* global variable */

int main( void )
{
   int x = 5; /* local variable to main */

   printf("local x in outer scope of main is %d\n", x );

   { /* start new scope */
      int x = 7; /* local variable to new scope */

      printf( "local x in inner scope of main is %d\n", x );
   } /* end new scope */

   printf( "local x in outer scope of main is %d\n", x );

   useLocal();     /* useLocal has automatic local x */
   useStaticLocal(); /* useStaticLocal has static local x */
   useGlobal();      /* useGlobal uses global x */
   useLocal();       /* useLocal reinitializes automatic local x */
   useStaticLocal(); /* static local x retains its prior value */
   useGlobal();      /* global x also retains its value */

   printf( "\nlocal x in main is %d\n", x );

   return 0; /* indicates successful termination */

}

void useLocal( void )
{
   int x = 25; 

   printf( "\nlocal x in useLocal is %d after entering useLocal\n", x );
   x++;
   printf( "local x in useLocal is %d before exiting useLocal\n", x );
} 
void useStaticLocal( void )
{
  
   static int x = 50;  

   printf( "\nlocal static x is %d on entering useStaticLocal\n", x );
   x++;
   printf( "local static x is %d on exiting useStaticLocal\n", x );
}

/* function useGlobal modifies global variable x during each call */
void useGlobal( void )
{
   printf( "\nglobal x is %d on entering useGlobal\n", x );
   x = x * 10;
   printf( "global x is %d on exiting useGlobal\n", x );

} 
