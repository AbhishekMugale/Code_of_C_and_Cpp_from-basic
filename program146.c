#include<stdio.h>
#include<stdbool.h>
bool Check(char *str,char ch)
{
   
   while(*str != '\0')
   {
     if(*str == ch)
     {
       
       break;
     }
     str++;
   }
   if(*str=='\0')
   {
     return false;
   }
   else
   {
     return true;
   }
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  bool bRet = false;
  
  printf("Please enter strings\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Please Enter the character\n");
  scanf(" %c",&cValue);
  
  bRet = Check(Arr,cValue);
  if(bRet==true)
  {
    printf("The letter is Present\n");
  }
  else
  {
    printf("The letter is not present\n");
  }
  
  
   return 0;
}
