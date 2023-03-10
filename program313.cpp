#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[],int iSize)
{
   int iCnt=0;
   T Max = Arr[0];   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      if(Arr[iCnt]>Max)
      {
         Max = Arr[iCnt];
      }
   }
   return Max;

}

int main()
{
   int Data[] = {110,120,320,40};
   int iRet = 0;
   iRet = Maximum(Data,4);
   cout<<"Maximum is integer is "<<iRet<<"\n";
   
   float Dataf[] = {1.1f,23.2f,3.3f};
   float fRet = 0.0;
   fRet = Maximum(Dataf,4);
   cout<<"Maximum of float is "<<fRet<<"\n";
   
   return 0;
}
