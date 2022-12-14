#include<iostream>
using namespace std;

// Problems on Numbers

class Numbers
{
   public:
      int iNo;
    Numbers(int i)
    {
      iNo = i;
    }
    
    int Factorial() // Here u want to place the function with business logic
    {
        int iCnt = 0;
        int iFact = 1;
        for(iCnt = 1;iCnt<=iNo;iCnt++)
        {
           iFact = iFact * iCnt; 
        }
        return iFact;
    }
};

int main()
{
  int iValue;
  int iRet = 0;
  cout<<"Enter number : \n";
  cin>>iValue;
  
  Numbers obj(iValue);

  iRet = obj.Factorial();
  
  cout<<"Factorial is : "<<iRet<<"\n";
  
  return 0;
}
