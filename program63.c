#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(int iNo)
{
   int iDigit = 0, iRev = 0;
   int iTemp = iNo;
   for(iRev=0;iNo!=0;iNo=iNo/10)
   {
      iDigit = iNo%10;
      iRev =  (iRev * 10) + iDigit;
      
   }
   if(iTemp==iRev)
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
  int iValue = 0;
  bool bRet = false;
  printf("enter number : \n");
  scanf("%d",&iValue);
  
  bRet = CheckPallindrome(iValue);
  if(bRet == true)
  {
    printf("The number is pallindrome\n");
  }
  else
  {
    printf("The number is not pallindrome\n");
  }

   return 0;
}
