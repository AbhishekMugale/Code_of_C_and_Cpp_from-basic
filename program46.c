//Display the Number of digits you entered
// Input : 751
//output : 3

//Input : 7515
//output : 4

//Input : 75
//Output : 2

// Input : 6
// Output : 1
#include<stdio.h>

int CountDigits(int iNo)
{
  //code
  return 0;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("enter number : \n");
  scanf("%d",&iValue);
  iRet = CountDigits(iValue);
  
  printf("Number of digits are : %d \n",iRet);

   return 0;
}
