#include<stdio.h>
#include<stdbool.h>
int Reverse(int iNo)
{
   int iDigit = 0, iRev = 0;
   
   if(iNo < 0)
   {
     iNo = -iNo;
   }
   while(iNo!=0)
   {
      iDigit = iNo%10;
      iRev =  (iRev * 10) + iDigit;
      iNo = iNo / 10;
   }
   return iRev;
}
bool CheckPallindrome(int iData)
{
   int iReverse = 0;
   iReverse = Reverse(iData);
   return (iReverse==iData);
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
