#include<stdio.h>

int CountFreq(char *str,char ch)
{
   int iCnt = 0;
   while(*str != '\0')
   {
     if(*str == ch)
     {
       iCnt++;
     }
     str++;
   
   }
   return iCnt;
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  int iRet = 0;
  
  printf("Please enter strings\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Please Enter the character\n");
  scanf("%c",&cValue);
  
  iRet = CountFreq(Arr,cValue);
  
  printf("Frequency of letters is : %d\n",iRet);

   return 0;
}
