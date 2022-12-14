#include<stdio.h>

int main()
{
  int iNo1 = 0, iNo2 = 0;
  
  printf("Enter first number : \n");
  scanf("%d",&iNo1);
  printf("Enter Second Number : \n");
  scanf("%d",&iNo2);
  
  printf("First Number is :%d \n",iNo1);
  printf("First Number is :%d \n",iNo2);
  
  int iMult=0;
  iMult = iNo1 * iNo2;
  printf("The Multiplication of two numbers is : %d \n",iMult);

  return 0;
}
