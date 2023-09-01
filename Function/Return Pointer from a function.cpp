//                             Returning Pointer from function

#include <stdio.h>                             // Returning a Pointer means Returning a address;
int* ReturningPointer(int []);
int main()                                     
{
   int *p;
   int a[]={1,2,3,4,5};              // we can  not change the value of array but you can change the value of Pointer.
   p=ReturningPointer(a);
   printf("%d",*p);
    return 0;
}
int* ReturningPointer(int a[]){
    a=a+2; 
    return a;
    
}

