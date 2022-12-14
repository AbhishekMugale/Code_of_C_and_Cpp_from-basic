#include<iostream>
using namespace std;

class ArrayX
{
   public:
      int *Arr;
      int iSize;
      
      ArrayX(int i)
      {
          cout<<"Allocating the memory for resources..."<<endl;
         iSize = i;
        Arr = new int[iSize];//Arr = (int*)malloc(iSize*sizeof(int));
      }
      ~ArrayX()
      {
      
         cout<<"Deallocating the memory of resources..."<<endl;
         delete []Arr; // free(Arr);
      }
      
      void Accept()
      {
         cout<<"Enter the elements of array : "<<"\n";
        
         for(int iCnt=0;iCnt<iSize;iCnt++)
         {
           cin>>Arr[iCnt];   // scanf("%d",&Arr[iCnt]);
         }      
      }
      void Display()
      {
         cout<<"elements of array : "<<"\n";
        
         for(int iCnt=0;iCnt<iSize;iCnt++)
         {
           cout<<Arr[iCnt]<<"\t";   // printf("%d",Arr[iCnt]);
         }      
         cout<<"\n";
      }

};

int main()
{

   int iLength;
   cout<<"Enter the size of array : "<<"\n";
   cin>>iLength;
   ArrayX obj(iLength);  // Static
   
   obj.Accept();
   obj.Display();

   return 0;
}
