#include<stdio.h>
#include<stdlib.h>



int CalculateFrequency(int Arr[],int iSize,int iNo)
{
   int iCnt = 0,iFrequency=0;
   for(iCnt=0;iCnt<iSize;iCnt++)
   { 
     if(Arr[iCnt]==iNo)
     {
        iFrequency++;
     }
      
   }
   return iFrequency;  
   
}

int main()
{
   int *ptr =NULL;
   int iLength =0,i=0,iRet=0,iValue=0;
   
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
   printf("Enter the element to find out the frequency\n");
   scanf("%d",&iValue);
   //Step4: Call the function
   iRet = CalculateFrequency(ptr,iLength,iValue);
   
   printf("Frequency of %d is %d \n",iValue,iRet);
   
   //Step6: Deallocate the memory
     free(ptr);
     return 0;
}     
     
     
