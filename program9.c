//////////////////////////////////////////////////////////////
//// Steps to follow while programming
//////////////////////////////////////////////////////////////

// Step 1    Understand the  problem Statement
// Step 2    Write the Algorithm
// Step 3    Decide the progrramming language
// Step 4    Write the program
// Step 5    Test the program

////////////////////////////////////////////////////////////////////
// Problem Statement : Accept number from user and check whether it   is divisible by 5 or not

 // Input  : 23
 // Output : 23 is not divisible by 5
 //
 // Input  : 25
 // Output : 25 is divisible by 5
 //
 // Input  : -20
 // Output : -20 is divisible by 5
 //
 ///////////////////////////////////////////////////////////////////
 
///////////////////////////////////////////////////////////////////
// Algorithm
///////////////////////////////////////////////////////////////////

/* 
   START
        Accept number from user as No
        Divide that No by 5 and check the value of reminder  
        if the value is 0
              Then dispaly as No is divisible by 5
        Otherwise
              Display as No is not divisible by 5
   
   END                 

*/

/////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Funciton Name : DivisibleByFive
//  Description : To check whether number is divisible by 5 or not
//  Input  : Integer   
//  Output : Integer
//  Author : Abhishek Rahul Mugale
//  Date   : 12/10/2022 
//
/////////////////////////////////////////////////////////////////////

int DivisibleByFive(int iValue)
{ 
  int iAns =0;
  iAns = iValue % 5;
  
  if(iAns != 0)
  {
     return 1;
  }
  else
  {
     return 0;
  }

}
////////////////////////////////////////////////////////////
// Entry point of the application
/////////////////////////////////////////////////////////
int main()
{
  int iNo1=0;
  printf("Enter the number :\n");
  scanf("%d",&iNo1);
  
  int iOut=0;
  iOut=DivisibleByFive(iNo1);
  
  if(iOut!=1)
  {
     printf("%d is Divisible by 5 \n",iNo1);
  }
  else
  {
     printf("%d is Not Divisible by 5 \n",iNo1);
  }
 
return 0;
}
