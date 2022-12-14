#include<stdio.h>
void Display(int iValue)
{
   int iCnt=0;
   for(iCnt=1;iCnt<=iValue;iCnt++)
   {
     printf("Marvellous : %d\n",iCnt);
    
   }


}
int main()
{  
  int iNo;
  printf("Enter till what u want to dispaly the numbers\n");
  scanf("%d",&iNo);
  Display(iNo);

  return 0;
}
