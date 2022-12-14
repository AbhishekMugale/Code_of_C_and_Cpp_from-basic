#include<stdio.h>
#include<stdlib.h>

int LargestNum(int Arr[],int iSize)   //5
{
     int iCnt=0;
    int iLargest = Arr[0];
   for(iCnt=0;iCnt<iSize;iCnt++)  //N
   {
     if(Arr[iCnt]>iLargest)
     {
       iLargest = Arr[iCnt];
     }
   }
   return iLargest;
}

int main()
{
  int *ptr = NULL;
  int iLength=0,i=0,iRet=0;
  
  printf("Enter how many elements you want\n");  //1
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));    //2
  
  printf("Enter the elements into the array\n");   //3
  for(i=0;i<iLength;i++)
  {
    scanf("%d",&ptr[i]);
  }
  
  iRet = LargestNum(ptr,iLength);    //4
  
  printf("Largest Number in the array is %d \n",iRet);
  
  free(ptr);   //6
  
  return 0;

}
