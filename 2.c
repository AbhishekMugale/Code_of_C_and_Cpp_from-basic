#include<stdio.h>
int AdditionOfNumbers(int iNo1,int iNo2)
{
  int iAns;
  iAns=iNo1+iNo2;
  return iAns;
}
int main()
{
  int iValue1=0,iValue2=0;
  int iRet=0;
  printf("Enter the first number : \n");
  scanf("%d",&iValue1);
  printf("Enter the second number : \n");
  scanf("%d",&iValue2);
  iRet=AdditionOfNumbers(iValue1,iValue2);
  printf("addition of two digits is : %d \n",iRet);
  return 0;
}

