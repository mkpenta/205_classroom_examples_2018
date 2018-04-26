/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct mkpfile MKP;

struct mkpfile
{
    char first;
    char second;
    int size;
    int cypherKey;
    char* text;
};

int main(int argc, char** argv)
{
    
   FILE* in_file;
   
   if(argc < 3)
   {
       puts("No file name");
       exit(1);
   }
   else
   {
       
        FILE* in_file;
        in_file = fopen(argv[1], "r");

        if(in_file == NULL )
        {
            puts("file read error");
            exit(1);
        }
        else
        {
            MKP file;
            fread(&file.first, 1, 1, in_file);
            fread(&file.second, 1, 1, in_file);
            fread(&file.size, sizeof(int), 1, in_file);
            fread(&file.cypherKey, sizeof(int), 1, in_file);
            
            if(file.first != 'M' || file.second != 'P')
            {
                puts("Not an MKP file");
                exit(1);
            }
            else
            {
                file.text = malloc(file.size);
                fread(file.text, file.size, 1, in_file);
            }
            ///we should have full struct

                for(int i = 0; i < file.size; i++)
                {
                    file.text[i] -= file.cypherKey;
                }
            
            fclose(in_file);
            //now we should have a proper text array

          
            //ready to output
            FILE* out_file;  
            out_file = fopen(argv[2], "w");

            //if fopen fails, it returns null
            if(out_file == NULL )
            {
                puts("file error");
                exit(1);
            }
            else
            {
                fwrite ( file.text, file.size,1, out_file);
                fclose(out_file);
            }

        }
       
   }
   
}
