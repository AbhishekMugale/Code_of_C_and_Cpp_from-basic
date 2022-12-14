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
    
    void Function() // Here u want to place the function with business logic
    {
        
    }
};

int main()
{
  int iValue;
  
  cout<<"Enter number : \n";
  cin>>iValue;
  
  Numbers obj(iValue);

  obj.Function();
  
  return 0;
}
