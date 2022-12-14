#include<stdio.h>

void DisplayTable(int iValue)
{ 
  int iCnt=0;
  printf("_____________________________\n");
  printf("Table of %d is \n",iValue);
  printf("_____________________________\n");
  
 
  for(iCnt=1;iCnt<=10;iCnt++)
  {
    printf("%d\n",(iValue*iCnt));   
  }
  printf("_____________________________\n");

}
int main()
{
  int iNo=0;
  printf("Enter the number :\n");
  scanf("%d",&iNo);
  
  DisplayTable(iNo);
  return 0;
}
