#include<stdio.h>

int CountCaptialR(char *str)
{
   static int iCnt = 0 ;
   
   if(*str != '\0')
   {
      if(*str>='A' && *str <= 'Z')
      {
       iCnt++;
      } 
      str++;
      CountCaptialR(str);
   }
   
   return iCnt;
}

int main()
{
  char Arr[20];
  int iRet = 0;
  
  printf("Enter String : \n");
  scanf("%[^'\n']s",Arr);
  
  iRet = CountCaptialR(Arr);
  printf("Capital letters in String  is : %d\n",iRet);
 
   return 0;
}
