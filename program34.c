#include<stdio.h>
#include<stdbool.h>

int Sumfactors(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
     if(iNo%iCnt==0)
     {
        iSum=iSum+iCnt;
     }
   }
   return iSum;
}
// 6   28   496   8128       are the perfect numbers
bool CheckPerfect(int iData)
{
  int iAns=0;
  
  iAns = Sumfactors(iData);
  if(iAns == iData)
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
  int iValue=0;
  bool bRet=false;
  
  printf("Enter a number : \n");
  scanf("%d",&iValue);
  
  bRet = CheckPerfect(iValue);
  
  if(bRet == true)
  {
     printf("%d is a perfect number \n",iValue);
  }
  else
  {
     printf("%d is not a perfect number \n",iValue);
  }
  return 0;

}
