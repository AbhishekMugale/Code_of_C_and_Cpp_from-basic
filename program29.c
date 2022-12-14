#include<stdio.h>

int Summation(int iNo)
{
 
  int iSum=0;
  int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    iSum=iSum+iCnt;
  }
  
  
  return iSum;


}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter the value :\n");
  scanf("%d",&iValue);
  
  iRet=Summation(iValue);
  
  printf("Sum of all numbers is %d\n",iRet);
  
  return 0;
}
