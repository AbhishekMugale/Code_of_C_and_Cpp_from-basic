#include<stdio.h>

void strToggleX(char *str)
{
  while(*str != '\0')
  {
    if((*str>='a')&&(*str<='z'))
    {
        *str = *str - 32;  
    }
    else if((*str>='A')&&(*str<='Z'))
    {
       *str = *str + 32;
    }
   str++;
  }

}

int main()
{
  char arr[25];
  printf("Enter the string \n");
  scanf("%[^'\n']s",arr);
  
  strToggleX(arr);  //strlwrX(100);
  
  printf("String after conversion is :%s\n",arr);

  return 0;
}
