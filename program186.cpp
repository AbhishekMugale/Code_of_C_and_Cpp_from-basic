#include<iostream>
using namespace std;

int main()
{
  int iNo1 = 0,iNo2 = 0,iAns = 0;
  
  cout<<"Enter the first number : \n";  // printf("Enter first number : \n");
  cin>>iNo1;                           //scanf("%d",&iNo1);
  
  cout<<"Enter the Second number : \n";  // printf("Enter Second number : \n");
  cin>>iNo2;                           //scanf("%d",&iNo2);
                                      
  iAns = iNo1 + iNo2; 
  
  cout<<"Addition is : "<<iAns<<"\n"; // printf("Additon is %d",iAns);
  return 0; 
}
