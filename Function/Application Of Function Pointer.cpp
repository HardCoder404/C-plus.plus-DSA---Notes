//                                     Application Of Function Pointer
#include <stdio.h>//                                                     programme for calculator;
void sum(int a,int b){printf("%d+%d = %d",a,b,a+b);}
void sub(int a,int b){printf("%d-%d = %d",a,b,a-b);}
void multiplication(int a,int b){printf("%d*%d = %d",a,b,a*b);}
void division(int a,int b){printf("%d/%d = %d",a,b,a/b);}
int main()
{
    int choice,a,b;
    printf("Instruction :\nPress 0 for sum\nPress 1 for substraction\nPress 2 for multiplication\nPress 3 for division\n\n");
    
    void (*fptr[])(int,int)={sum,sub,multiplication,division};              // This is called array of Funtion Pointer
    printf("Enter the choice : ");
    scanf("%d",&choice);
    printf("Enter the value : ");
    scanf("%d %d",&a,&b);
    (*fptr[choice])(a,b);                      // here we are calling the Funtion
/*   switch (choice){                             // by switch case you can also do that;
       case 0: sum(a,b);break;
       case 1: sub(a,b);break;
       case 2: multiplication(a,b);break;
       case 3: division(a,b);break;
       default : printf("enter a valid number");
   }*/
    return 0;
}



