#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t Byte;


void print_hex(Byte);
void print_bits(Byte);
void print_char(Byte);

int main()
{

  Byte b1 = 0b10011000;//'a';
  Byte b2 = 0b00100011;//0x44;
  Byte b3 = 0b11111110;
  
  
  
  Byte* byte_ptr;
  byte_ptr = malloc(sizeof(Byte));
  *byte_ptr = 0x00;



  print_bits(b1);
  print_hex(b1);
 print_char(b1);

  print_bits(b2);
  b2 <<= 2;
  print_bits(b2);

  print_bits(b3);
  b3 = ~b3;
  print_bits(b3);

  print_bits(*byte_ptr);
  *byte_ptr = b3 | b2;
  print_bits(*byte_ptr);

}

void print_hex(Byte b)
{
  printf("0x%x\n", b);
}

void print_char(Byte b)
{
  printf("%c\n", b);
}

void print_bits(Byte src)
{
  Byte mask = 0b10000000;
  
    for(int i = 0; i < 8; i++)  
    {
        Byte ones = src & mask;
        if(ones)
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", 0);
        }
        src = src<<1;
    }
  puts("");
}
