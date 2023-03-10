#include<stdio.h>
#include<stdbool.h>
bool CheckPerfectR(int No)
{
  static int iCnt = 1;
  static int iSum = 0;
  if(iCnt <= (No/2))
  {
    if(No%iCnt==0)
    {
      iSum = iSum + iCnt;
      
    }
    iCnt++;
    
    CheckPerfectR(No);   
  }
  if(No == iSum)
  {
     return true;     
  }
  else
  {
     return false;
  }
  
}

int main()
{
   int Value=0;
   bool bRet = false;
   printf("Enter the number\n");
   scanf("%d",&Value);
   bRet = CheckPerfectR(Value);  
   if(bRet == true)
   {
     printf("%d Number is Perfect \n",Value);
   }
   else
   {
      printf("%d Number is not Perfect\n",Value);
   }
   return 0;
}
