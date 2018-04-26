
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum menu {NORTH=1 , SOUTH, EAST=6 , WEST, LOOK, QUIT};

int main(void)
{

enum menu user_choice;
  //or
  //int user_choice;

  printf("\n\n******************************\n\t%s\n","Welcome to the game.");
  printf("%s\n","*****************************");


  do
  {

    printf("%s","What would you like to do?.\n");

    printf("%2d. Go North\n", NORTH);
    printf("%2d. Go South\n", SOUTH);
    printf("%2d. Go East\n", EAST);
    printf("%2d. Go West\n", WEST);
    printf("%2d. Look Around\n", LOOK);
    printf("%2d. Quit\n", QUIT);

    scanf(" %d", &user_choice);

    switch(user_choice)
    {
      case NORTH:
        printf("%s\n","You went north.");
        break;
      case SOUTH:
        printf("%s\n","You went south.");
        break;
      case EAST:
        printf("%s\n","You went east, ");
        break;
      case WEST:
        printf("%s\n","You went west");
        break;
      case LOOK:
        printf("%s\n","It is nice here");
        break;
      case QUIT:
        printf("%s\n","Good Bye");
        break;
      default:
        printf("%s\n","You are standing still");
        break;
      }
  }
  while(user_choice != QUIT);
}
