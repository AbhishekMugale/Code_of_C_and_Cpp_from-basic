#include<stdio.h>

void strcpyToggleX(char *src,char *dest)
{
    while(*src != '\0')
    { 
       if((*src>='A')&&(*src<='Z'))
       {
          *dest = *src + 32;
       }
       else if((*src>='a')&&(*src<='z'))
       { 
         *dest = *src - 32; 
       }
       else
       {
         *dest = *src;
       }
      src++;
      dest++;
    }
    *dest = '\0';

}

int main()
{
  char Arr[20];
  char Brr[20];
 
  printf("Please Enter strings\n");
  scanf("%[^'\n']s",Arr);
 
  strcpyToggleX(Arr,Brr);   //strcpyX(100,200);
 
  printf("Copied String based on toggle case is %s \n",Brr);
  printf("Original string is : %s\n",Arr);
 
   return 0;
}
