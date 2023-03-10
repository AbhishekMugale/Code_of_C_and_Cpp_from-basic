#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[],int iSize)
{
   int iCnt=0;
   T Sum=0;   
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      Sum = Sum+Arr[iCnt];
   }
   return Sum;

}

int main()
{
   int Data[] = {10,20,30,40};
   int iRet = 0;
   iRet = Addition(Data,4);
   cout<<"Additon is integer is "<<iRet<<"\n";
   
   float Dataf[] = {1.1f,2.2f,3.3f};
   float fRet = 0.0;
   fRet = Addition(Dataf,4);
   cout<<"Additon of float is "<<fRet<<"\n";
   
   return 0;
}
