#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int Arr[],int iSize)
{
   int iCnt = 0,iEven=0;
   for(iCnt=0;iCnt<iSize;iCnt++)
   { 
      if(Arr[iCnt]%2==0)
      {
        iEven++;   
      }
      
   }
   printf("Even numbers are %d \n",iEven);
   printf("Odd numbers are %d \n",iSize-iEven);
}

int main()
{
   int *ptr =NULL;
   int iLength =0,i=0;
   
   //Step1: Accept size of Array
   printf("Enter Number of elements\n");
   scanf("%d",&iLength);
   
   //Step2 : Allocate memory for array
   ptr = (int *)malloc(iLength*sizeof(int));
   
   //Step3 : Accept the elements of array
   printf("Enter the elements : \n");
   
   for(i=0;i<iLength;i++)
   {
     scanf("%d",&ptr[i]);
   }
   
   //Step4: Call the function
   DisplayEvenOddCount(ptr,iLength);
   
   
   
   //Step6: Deallocate the memory
     free(ptr);
     return 0;
}     
     
     
