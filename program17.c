//Demonstration of Iteration Using for Loop
#include<stdio.h>

void Display(int iValue)
{
  register int iCnt = 0;
  
  for(iCnt=1;iCnt<=iValue;iCnt++)
  {
    printf("Jay  Ganesh....\n");
  }
   
}

int main()
{ 
  int iNo=0;
  printf("Enter the Number of Iterations :\n");
  scanf("%d",&iNo);
  

  Display(iNo);
 
  return 0;
}

