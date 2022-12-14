#include<stdio.h>
int Multiplication(int iValue1,int iValue2)
{
  int ioutput=0;
  ioutput=iValue1*iValue2;
  return ioutput;  
}
int main()
{
  int iNo1 = 0, iNo2 = 0;
  
  printf("Enter first number : \n");
  scanf("%d",&iNo1);
  printf("Enter Second Number : \n");
  scanf("%d",&iNo2);
  

  
  int iMult=0;
  iMult = Multiplication(iNo1,iNo2);
  printf("The Multiplication of two numbers is : %d \n",iMult);

  return 0;
}
