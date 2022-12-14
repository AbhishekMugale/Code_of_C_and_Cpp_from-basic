#include<stdio.h>

// O(N/2)
int SumFactors(int iNo)
{
   int iCnt=0;
   int iSum=0;
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if(iNo%iCnt==0)
      {
        iSum=iSum+iCnt;
      }
      
   }
   return iSum;
}
int main()
{
  int iValue=0;
  int iRet=0;
  printf("Enter the number \n");
  scanf("%d",&iValue);
  
  iRet=SumFactors(iValue);
  printf("Addition of factors of %d is : %d \n",iValue,iRet);
  return 0;
}
