#include<stdio.h>
 
 //Input : 5
 //Output : 5 4 3 2 1  
void DisplayReverse(int iValue)
{
   int iCnt=0;
   printf("________________________________________________\n");
   printf("Reverse order of %d is : \n",iValue);
   printf("______________________________________________\n");
   iCnt=iValue;
   while(iCnt>=1)
   {
      printf("%d\t",iCnt);
      iCnt--;
   }
   printf("\n____________________________________________\n");
}
int main()
{
  int iNo=0;
  printf("Enter the number : \n");
  scanf("%d",&iNo);
  
  DisplayReverse(iNo);

  return 0;
}
