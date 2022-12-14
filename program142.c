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
  char Arr[10];
  int iRet = 0;
  
  printf("Please enter strings\n");
  scanf("%[^'\n']s",Arr);
  
  
  
  iRet = CountFreq(Arr,'a');
  
  printf("Frequency of letters is : %d\n",iRet);

   return 0;
}
