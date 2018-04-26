/*

Reading a text file into char array
the problem is we dont know how big the array needs to be

we can malloc any amount once we can figure out how much

C provides functions to "move" around the file (like a cassette tape)

you can fseek (move towards the end of the file)
or rewind (move towards the start)

Places to seek:
 SEEK_SET	Beginning of file
 SEEK_CUR	Current position of the file pointer
 SEEK_END	End of file

we can measure the size of the file by
1. seeking to the end of the file
2. asking the file how much it has read
3. save that value
4. rewind to the beginging

some other heplful functions of

fread and fwrite. the allow for the writing of large amounts of
data at once instead of byte by byte or number by number
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
    }
    else
    {
      int size =0;
      //seek to end
      fseek( in_file , 0 , SEEK_END);
      //store how muxh was read
      size = ftell(in_file);
      //go back to the start
      rewind(in_file);

      //Create a pointer to a character
      //(not a string but could be if we add null after)
      //and allocate enough to store the text
      char* text = malloc(size);

      //now that we have the space to store it, read it into the array
      //we could use a loop and read it character by character or string
      //by string or we an read the whole binary block into memory at once
      //using fread

      fread(text, size, 1, in_file);
      //close the file now that the contents are loaded
      fclose(in_file);

      //print the array
      for(int i =0; i < size; i++)
      {
        printf("%c",text[i]);
      }

    }


}
