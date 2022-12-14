#include<stdio.h>

int main()
{
  int i=0;
  
  printf("____________________________\n");
  printf("ASCII TABLE\n");
  printf("____________________________\n");
  
  printf("Character\tDecimal\tHex\tOctal");
  for(i=0;i<=127;i++)
  { 
   printf("%c \t\t %d \t\t %x \t\t %o \n",i,i,i,i);
  }
  printf("--------------------------------------\n");

  return 0;
}
