#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{

  int iDigit = 0;
  int iEvenCnt = 0;
  int iOddCnt = 0;
  if(iNo == 0)   // filter
  {
     iEvenCnt++;
  }
  if(iNo < 0)         //Updator
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
     iDigit = iNo % 10;
     if(iDigit%2==0)
     {
        iEvenCnt++;
        
     }
     else
     {
       iOddCnt++;
     }
     iNo = iNo/10;
     
  }
  printf("Number of even digits are : %d \n",iEvenCnt);
  printf("Number of Odd digits are : %d \n",iOddCnt);
   
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("enter number : \n");
  scanf("%d",&iValue);
  DisplayEvenOddDigits(iValue); 

   return 0;
}
