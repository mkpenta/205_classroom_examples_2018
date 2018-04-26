/*

Reading a text file

1.create a file pointer
2. open a file stream -needs a filename and mode
3. scan file like scanning the terminal
4. close file stream

opening the file stream fails if the file cannot be found

MODES:
r  - Open file for reading.
w  - Truncate to zero length or create file for writing.
a  - Append; open or create file for writing at end-of-file.
r+ - Open file for update (reading and writing).
w+ - Truncate to zero length or create file for update.
a+ - Append; open or create file for update, writing at end-of-file.

*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //create a pointer to a file
    FILE* in_file;
  //open a file stream for reading
    char* filename = "hamlet.txt";
    in_file = fopen(filename, "r");

    //if fopen fails, it returns null
    if(in_file == NULL )
    {
        puts("file read error");
        exit(1);
    }
    else
    {
        //print the file to the screen letter by letter
        // count the number of letter m
        //the format specifier and variable data type determine what is read
        //keep reading until the end of the file is reached
        //this uses fscanf, but you could use fgetc, or fgets
        
        char letter=0;
        int count = 0;
        
        while(fscanf(in_file, "%c", &letter) != EOF)
        {
            printf("%c", letter);
            if(letter == 'm' || letter == 'M')
            {
                count++;
            }
        }
        printf("\n\nthe letter M appears %d times\n", count);
      }

      fclose(in_file);
}
