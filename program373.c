#include<stdio.h>

void DisplayR(int Arr[],int iSize)
{     
   int iCnt = 0;
   while(iCnt<iSize)
   {
      printf("%d\n",Arr[iCnt]);
      iCnt++;
   }
}

int main()
{
  int Brr[5]= {10,20,30,40,50};
  
  DisplayR(Brr,5);
  
   return 0;
}
