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
            int size =0;
            fseek( in_file , 0 , SEEK_END);
            size = ftell(in_file);
            rewind(in_file);

            char* text = malloc(size);
            fread(text, size, 1, in_file);
            fclose(in_file);
            
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
                MKP file;
                file.first = 'M';
                file.second = 'P';
                file.size = size;
                file.cypherKey = 3;
                
                for(int i = 0; i < size; i++)
                {
                    text[i] += 3;
                }
                file.text = text;
                fwrite(&file.first, 1, 1, out_file);
                fwrite(&file.second, 1, 1, out_file);
                fwrite(&file.size, sizeof(int), 1, out_file);
                fwrite(&file.cypherKey, sizeof(int), 1, out_file);
                fwrite ( text, size,1, out_file);
                
                fclose(out_file);
            }
            
            
            
        }
       
   }
   
}
