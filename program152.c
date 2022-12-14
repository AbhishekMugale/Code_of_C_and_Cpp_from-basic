#include<stdio.h>

void strUpprX(char *str)
{
  while(*str != '\0')
  {
    if((*str>='a')&&(*str<='z'))
    {
        *str = *str - 32;  
    }
   str++;
  }

}

int main()
{
  char arr[25];
  printf("Enter the string \n");
  scanf("%[^'\n']s",arr);
  
  strUpprX(arr);  //strlwrX(100);
  
  printf("String after conversion is :%s\n",arr);

  return 0;
}
