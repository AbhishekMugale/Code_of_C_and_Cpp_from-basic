#include<stdio.h>
int SumNonFactors(int iNo)
{
  int iCnt=0,iSum=0;
  for(iCnt=2;iCnt<iNo;iCnt++)
  {
    if(iNo%iCnt!=0)
    {
      iSum = iSum + iCnt; 
    }
  }
  return iSum;

}
int main()
{
  int iValue=0,iRet=0;
  printf("Enter the number \n");
  scanf("%d",&iValue);
  
  iRet = SumNonFactors(iValue);
  printf("Sum of Non Factors is : %d\n",iRet);
  
  return 0;

}
