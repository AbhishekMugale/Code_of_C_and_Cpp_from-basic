// *	*	*	*

#include<stdio.h>

void DisplayI()
{
   int iCnt=1;   // auto
   
   while(iCnt <= 4)
   {
       printf("*\t");
       iCnt++;
   }
}

void DisplayR()
{
   int iCnt=1;  // Uncontrolled Recursion because no static is used.
   
   if(iCnt <= 4)
   {
       printf("*\t");
       iCnt++;
       DisplayR();  // Recursive Call
   }
}

int main()
{
   DisplayR();
   
   return 0;
}
