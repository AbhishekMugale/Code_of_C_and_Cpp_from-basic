#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;

UINT OffBit(UINT No,UINT Pos)
{
  UINT iMask = 0X00000001;
  UINT Result = 0;
  iMask = iMask << (Pos-1);
  
  iMask = ~iMask;
  
  Result = No & iMask;
  return Result;

}

int main()
{
   UINT Value = 0,Position =0;
   UINT iRet = 0;
   
   
   printf("Enter number : \n");
   scanf("%d",&Value);
   
   printf("Enter Position : \n");
   scanf("%d",&Position);
   
   iRet = OffBit(Value,Position);
   
   printf("Updated number is : %d\n",iRet);
   
   return 0;
}
