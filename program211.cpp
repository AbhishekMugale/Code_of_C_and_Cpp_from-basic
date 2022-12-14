#include<iostream>
using namespace std;

struct node
{
   int data;
   struct node *next;
};
typedef struct node NODE;
typedef struct * node PNODE;
typedef struct ** node PPNODE;

class SinglyLL
{
    public : 
    
      //Characteristics 
        PNODE First;
      
      // Behaviours
        SinglyLL();
        
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no,int ipos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);
        
        void Display();
        int Count();

};
int main()
{
   

   return 0;
}
