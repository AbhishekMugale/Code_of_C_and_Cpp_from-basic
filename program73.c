
#include<stdio.h>
#include<stdlib.h>

//Step5: perform the operation of array
____  _____(int Arr[],int iSize)
{
  //Logic
}

int main()
{
   int *ptr =NULL;
   int iLength =0,i=0,iRet=0;
   
   //Step1: Accept size of Array
   printf("Enter Number of elements\n");
   scanf("%d",&iLength);
   
   //Step2 : Allocate memory for array
   ptr = (int *)malloc(iLength*sizeof(int));
   
   //Step3 : Accept the elements of array
   printf(Enter the elements : \n);
   
   for(i=0;i<iLength;i++)
   {
     scanf("%d",&ptr[i]);
   }
   
   //Step4: Call the function
   ____ = ______(ptr,iLength);
   
   //Step6: Deallocate the memory
     free(ptr);
   
   return 0;
}
