//                                      Callback Function

#include <stdio.h>//                                    :- It is nothing just we are passing Function to a Function 
//                                         ex; void sum(int a,int b)--> here we passing to datatype of argument so sameas here ...we can also pass the Function as an argument.

void sum(int a,int b){
    printf("sum is : %d\n",a+b);
}
void sub(int a,int b){
    printf("sub is : %d\n",a-b);
}                               //    here... sum & sub are the Callback Function for this disp Function
void disp(void (*fptr)(int,int)){         // here...we are declaring a Function pointer...
    (*fptr)(5,1);                           // NOTE: as we know.we have only one Function pointer so u must have to takecare of that ki...upper k dono Function k prototpye same hone chyie..(meanwhile..ki unka returntyp,no.of datatype passes)
}
int main()
{
   disp(sum);                              // here it means we are passing Function to a Function meanwhile we are just calling a Function and that Function call the another both the Function.
   disp(sub);                                 
    return 0;
}


