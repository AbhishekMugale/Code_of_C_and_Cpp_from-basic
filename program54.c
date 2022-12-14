#include<stdio.h>

int SumofDigits(int iNo)
{
  
  int iSum = 0;
  if(iNo < 0)         //Updator
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
     iSum = iSum + (iNo % 10);
     iNo/=10;
  }
  return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("enter number : \n");
  scanf("%d",&iValue);
  iRet = SumofDigits(iValue);
  
  printf("Summation of digits is : %d \n",iRet);

   return 0;
}
