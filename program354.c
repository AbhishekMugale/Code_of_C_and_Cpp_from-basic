#include<stdio.h>
// 4
// 4 * 3 * 2 * 1 = 24	

int Factorial(int No)
{
   static int Sum = 1;
   static int iCnt = 1;
   
   if(iCnt<=No)
   {
     Sum = Sum * iCnt;
     iCnt++;
     Factorial(No);
   }
   
   return Sum;
}

int main()
{
   int Value=0;
   int iRet = 0;
   printf("Enter the number\n");
   scanf("%d",&Value);
   iRet = Factorial(Value);  
   printf("Factorial is : %d\n",iRet);
   
   return 0;
}
