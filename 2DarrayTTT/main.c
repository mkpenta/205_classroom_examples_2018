/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/


#define ROW 3
#define COL 3
#define X 'x'
#define O 'o'
#define EMPTY ' '

#include <stdio.h>
#include <stdlib.h>

void printBoard(char array[][COL]);
int freeSpace(char array[][COL], int moveR, int moveC);
int determineWinner(char array[][COL]);

int main() {
    
    int turn = 1; //odd = player 1, even = player two 
    int winner = 0;
    
    char board [ROW][COL] = {
                            {EMPTY, EMPTY ,EMPTY}, 
                            {EMPTY, EMPTY, EMPTY}, 
                            {EMPTY, EMPTY, EMPTY}
                        };

    printBoard(board);

    int moveR = -1;
    int moveC = -1;
    while(! winner)
    {
        if(turn % 2 == 0) //player 2 turn
        {
            puts("Player 2 please enter a row and col");
            scanf("%d %d", &moveR, &moveC);
            while(!freeSpace(board, moveR, moveC))
            {
                puts("Already taken, try again");
                scanf("%d %d", &moveR, &moveC);
            }
            board[moveR][moveC] = O;
        }
        else //player 1 turn
        {
           puts("Player 1 please enter a row and col");
            scanf("%d %d", &moveR, &moveC);
            while(!freeSpace(board, moveR, moveC))
            {
                puts("Already taken, try again");
                scanf("%d %d", &moveR, &moveC);
            }
            board[moveR][moveC] = X;
        }
         printBoard(board);
       winner = determineWinner(board);
        turn++; 
    }
    if(winner ==1 )
    {
        puts("P1 wins");
    }
    else{
        puts("P2 wins");
    }

   

}

int freeSpace(char array[][COL], int moveR, int moveC)
{

    int freebie = 0;
    if(array[moveR][moveC] == EMPTY)
    {
        freebie = 1;
    }
    return freebie;
}


int determineWinner(char array[][COL])
{
 
 if(array[0][0] == array [0][1] && array[0][0] == array [0][2] && array[0][0] != EMPTY)
 {
     puts("ROW 1 wins");
    if(array[0][0] == X)
        return 1;
    else
        return 2;
 }
 if(array[1][0] == array [1][1] && array[1][0] == array [1][2]  && array[1][0] != EMPTY)
 {
          puts("ROW 2 wins");
    if(array[1][0] == X)
        return 1;
    else
        return 2;
 }
 if(array[2][0] == array [2][1] && array[2][0] == array [2][2]  && array[2][0] != EMPTY)
 {
          puts("ROW 3 wins");
    if(array[2][0] == X)
        return 1;
    else
        return 2;
 }
 
 if(array[0][0] == array [1][0] && array[0][0] == array [2][0]  && array[0][0] != EMPTY)
 {
        puts("COL 1 wins");
    if(array[0][0] == X)
        return 1;
    else
        return 2;
 }
 if(array[0][1] == array [1][1] && array[0][1] == array [2][1]  && array[0][1] != EMPTY)
 {
        puts("COL 2 wins");
    if(array[0][1] == X)
        return 1;
    else
        return 2;
 }
 if(array[0][2] == array [1][2] && array[0][2] == array [2][2]  && array[0][2] != EMPTY)
 {
     
        puts("COL 3 wins");
    if(array[0][2] == X)
        return 1;
    else
        return 2;
 }
 //diags
  if(array[0][0] == array [1][1] && array[0][0] == array [2][2]  && array[0][0] != EMPTY)
 {
             puts("Diag left wins");
    if(array[0][0] == X)
        return 1;
    else
        return 2;
 }
 
  if(array[0][2] == array [1][1] && array[0][2] == array [2][0]  && array[0][2] != EMPTY)
 {
    
             puts("Diag right wins");
    if(array[0][2] == X)
        return 1;
    else
        return 2;
 }
 
 int full = 1;
    for(int r = 0; r < ROW; r++)
    {
        for(int c = 0; c < COL; c++)
        {
            if(array[r] [c] == EMPTY)
            {
                full = 0;
            }
        }   
    }
    
    if(full)
    {
        puts("goodbye - no winner boo hoo");
        exit(0);
    } 
    return 0;
}




void printBoard(char array[][COL])
{
    for(int r = 0; r < ROW; r++)
    {
            printf(" %c | %c | %c \n", array[r][0],array[r][1],array[r][2]);
            if(r < ROW-1)
            {
                puts("___________");
            }
        
    }
    
}

