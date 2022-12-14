#include<iostream>
using namespace std;

class Arithematic
{
  public:              // Access specifier
     int iValue1,iValue2;   // Characteristics
     
     Arithematic()         // Defaualt Constructor
     {
       iValue1 = 0;
       iValue2 = 0;
     }
     
     Arithematic(int A,int B)  // Parameterized Constructor
     {
       iValue1 = A;
       iValue2 = B;
     }
     int Addition()
     {
       int iAdd = 0;
       iAdd = iValue1 + iValue2;
       return iAdd;    
     }
};   
int main()
{ 
  int iRet = 0;
  Arithematic obj1;
  Arithematic obj2(10,11);
  Arithematic obj3(20,21);
  
  iRet = obj1.Addition();
  cout<<"Addition is :"<<iRet<<"\n";   //0
  
   iRet = obj2.Addition();            //21
  cout<<"Addition is :"<<iRet<<"\n"; 
  
   iRet = obj3.Addition();            // 41
  cout<<"Addition is :"<<iRet<<"\n";  
  return 0; 
}
