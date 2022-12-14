#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
  int data;
  struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First,int No)
{
   
}

void Display(PNODE First)
{
  

}
int main()
{
   PNODE Head = NULL;
   
   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,11);
   return 0;
}


/*
  
  void InsertFirst(PPNODE First,int No)
  void InsertLast(PPNODE First,int No)
  void InsertAtPos(PPNODE First,int No,int Pos)
  
  
  void DeleteFirst(PPNODE First)
  void DeleteLast(PPNODE First)
  void DeleteAtPos(PPNODE First,int Pos)
  
  
  void Display(PNODE First)
  int Count(PNODE First)

*/

/////////////////////////////////////////

/*
    InsertFirst(&Head,11)
    InsertLast(&Head,11)
    InsertAtPos(&Head,11,5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPos(&Head,5)
    
    Display(Head)
    Count(Head)

*/

/*
	
	Topics to read from C programming for Data Structures
	
	Primitive data types
	size of all data types
	loops(while & for)
	Dynamic memory (malloc & calloc)
	pointer and its types
	pointer to pointer
	call by value and call by address
	Structure declaration
	self referential structure
	Memory allocation of Structure
	Direct and indirect accesing of Structure
	typedef and its use
	
*/	
