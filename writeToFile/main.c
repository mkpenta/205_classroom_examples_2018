/*

Writing a text file

1. create a file pointer
2. open a file stream -needs a filename and mode
3. print to the file like printing to the terminal
4. close file stream

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
    FILE* out_file;
  //open a file stream for reading
    char* filename = "userdata12.txt";
    out_file = fopen(filename, "w");

    //if fopen fails, it returns null
    if(out_file == NULL )
    {
        puts("file error");
        exit(1);
    }
    else
    {
        //ask the user for input and write to a file
        //this uses fprintf, but you could use fputc, or fputs
        float input;
        puts("enter a positive number, enter a negative number to quit");
        scanf(" %f", &input);

        while(input >=0)
        {
          //print to file
          fprintf(out_file, "%.2f\n", input);

          puts("enter a positive number, enter a negative number to quit");
          scanf(" %f", &input);
        }

    }

 fclose(out_file);
}
