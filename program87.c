#include<stdio.h>
#include<stdlib.h>



int ChkOccurence(int Arr[],int iSize,int iNo)
{
   int iCnt = 0,iPos=-1;
   for(iCnt=0;iCnt<iSize;iCnt++)
   { 
     if(Arr[iCnt]==iNo)
     {
        iPos = iCnt;
     }
      
   }
   return iPos;  
}

int main()
{
   int *ptr =NULL;
   int iLength =0,i=0,iValue=0;
   int iRet = 0;
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
   printf("Enter the element to find out last occurence in the array\n");
   scanf("%d",&iValue);
   //Step4: Call the function
   iRet = ChkOccurence(ptr,iLength,iValue);
   if(iRet == -1)
   {
     printf("%d is not found at any location in array\n",iValue);   
   
   }
   else
   {
     printf("%d is found in array for last time at location %d \n",iValue,iRet);  
     
   }
   //Step6: Deallocate the memory
     free(ptr);
     return 0;
}     
     
     
