#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool ChkOccurence(int Arr[],int iSize,int iNo)
{
   int iCnt = 0,iFrequency=0;
   for(iCnt=0;iCnt<iSize;iCnt++)
   { 
     if(Arr[iCnt]==iNo)
     {
        iFrequency++;
        
     }
      
   }
   if(iFrequency!=0)
   { 
    return true;
   }
   else
   {
     return false;
   }  
   
}

int main()
{
   int *ptr =NULL;
   int iLength =0,i=0,iValue=0;
   bool bRet = false;
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
   printf("Enter the element to find out the array\n");
   scanf("%d",&iValue);
   //Step4: Call the function
   bRet = ChkOccurence(ptr,iLength,iValue);
   if(bRet==true)
   {
     printf("%d is found in array \n",iValue);
   }
   else
   {
      printf("%d not found in array\n",iValue);
   }
   //Step6: Deallocate the memory
     free(ptr);
     return 0;
}     
     
     
