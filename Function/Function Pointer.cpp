//                                  Function Pointer
//                                                  :- It is also a variable which contains which contains address of Function.
#include <stdio.h>//                       How to declare a Function Pointer :-     "returntype (*Pointername)(datatype of argument); " & if u have no any argument just leave it blank.
int sum(int,int);                                        //   int (*ptr)(int,int)=&sum;      --> the line here is means that *ptr is a Function Pointer which accept two argument and return integer value.
int main()                                               //   int *ptr(int,int)  --> it means that Pointer is a Function which takes two argument and return a Pointer to integer...that is why we use above line.
{   int s=0;
    int (*ptr)(int,int)=&sum;   // " Initialization of Function Pointer"      // if we are not write "&" then it will also fine..u can simplly write the name of the Function..name of the Function also means the base address of that Function.
    s=(*ptr)(2,2);        // if u r not write " * " here that is also fine.               // firstly we are going to deference this Function(sum) then we will pass 2,2          //  now we will not call this Function(sum) using Function name(sum),,we will call it by Pointer name[ (*ptr)(_,_) ] because Pointer is now containing the address of this Function.
    printf("sum is : %d",s);
    return 0;
}
int sum(int a,int b){
    return a+b;
}                                     // NOTE: Pointer Function contains address of code and other Pointer like integer that was containing the address of a variable
//                                       NOTE: declaration of Function Pointer basically depends on prototype of the Function means(its returntype,its datatype) should be the same

