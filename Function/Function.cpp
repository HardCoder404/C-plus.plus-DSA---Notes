#include <stdio.h>//                            functions        -->  It is a piece of code that takes some inputs do some work & gives you output.
// why we use functions?                    ans: (i) because of reusablity...means we are using the code(which is written in function defination) again & again without writing it again & again
//                                               (ii) debugging is also becomes easy due to shortest code.
/*                                               (iii) It reduces the complexity of the program                   ()--> this is called function
void sum(){                                            // function defination;  [ you can write void in (),there will be no issue..we just write it because after writing this,,we cannot pass any argument in main function];
    int a,b,sum=0;
    printf("Enter the number :\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is : %d",sum);
}
int main()              // NOTE: main is a " user defined function ";
{                       // NOTE: when the loop once go out of the function the memory will be vanished.
   sum();                                              // function calling;     [ suppose you write (void) in function defination and then if you try to pass the argument in main then it will show error,,,but if you are not writing (void) then if you pass any argument in main,it will not show any error and output will comes up correct ];

    return 0;
}
*/







/*                                                      If you are not passing any argument then it is better to write void in () inside this. In function declartion. 
void sum();                                            // function declartion or function prototype  ()tum yaha int int v kahli llikh sakte ho...no need to declare variable name,,but ha....jaha tumne defination likhi hai wha jaroori hai. variable ka naam.

int main(){
    sum();                                             // function calling;  ()isme jo likhte h wo argument hota hai..mtlb ki manlo hum user se input na leke khud hi value declare kar re hai...so whi yaha likha jata hai..i.e, (5,7).
    // there is  no need to write the type of returntype in calling function..only u just have to write function name and argument(if have);
    return 0;
}
void sum(){                                            // function defination;  () phir yaha declare karna padega ki kon sa type ka tumne argument lia h with variable name;  i.e,, (int a,int b);
    int a,b,sum=0;
    printf("Enter the number :\n");                  // if you declare argument above(in calling) then no need to write line no.36 and 37 also line no.35 except int sum=0;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is : %d",sum);
}//no need to use semicolon                NOTE: if you are not decclare the returntype in function declartion then by default compiler assumed that the returntype is int.
*/                                      // NOTE: agar function ko main k niche define kar re hai to use upper decclare karna hi padega  (but this is not necessary,mtlb ki...agar tum upper decclare ni v karoge to program to chal jyga..but warning k sath chalega...so for the sake of this..it is better to declare function declaration)
//                                         NOTE: it is not necessary to write the same variable name in function declartion and function defination,,you can use different variable name;






//                                        *Call By value & Call by Reference*

//  (1).Call by value :-
/*
void func(int,int);
int main(){
   int  x=5,y=7;
    func(x,y);                          // in function calling whatever we passed in () these,,is known as "argument" or "actual parameters";
    printf("x=%d y=%d",x,y);
    return 0;
}
void func(int x,int y){                  //  in function declaration or function defination whatever we passed in () these is known as "parameters" or "formal parameters";
    x=4,y=5;
    printf("x=%d y=%d\n",x,y);
    
}
//                                     lets see what actually done behind the memory

firstly the control will go to the main function and some memory would be allocated to this main function...
now in main we have two variable x and y...& in x we store 5 and in y we store 3
now the the loop again go further line and see a function is calling so..the loop now go to the defination part..now some memory would be allocated to this function.
and there it see we receiving two values in x and y...means x will receive 5 and y will receive 7
now..when the loop go forward..it sees that..in x we store 4 and in y we store 5 so...it will  change the value from 5,7 to 4,5. and it then print 4,5.
now..when the loop go back to the main function it sees x and y are printed...so it just simply print x and y( i.e., 5,7); 
it will not print 4,5 because whatever the change we do in defination part it will not refelect in main part that is why it is called call by value.

*/


//   (2).Call by Reference :-                 (means, calling the function by passing the address)
/*
void func(int*,int*);                       // see here we are taking * bcz we if we passing address then definatly to receive that adderss's value there would be a *.
int main(){
    int x=7,y=5;
    func(&x,&y);                               // In call by Reference whatever the change we do in function defination it will refelect in main function or further change it also.
    printf("x= %d y= %d",x,y);                 // the same thing happens here..we just change the value of x & y then...it will also change the actual value of x and y and print the changed value;
    return 0;
}
void func(int *x,int *y){                     // we can take any other variable instead of taking *x & *y (ex. *ptr1,*ptr2);
    *x=5;                                       
    *y=7;
    printf("x= %d y= %d\n",*x,*y);
}
*/



/*                                   *Classification of Funtion*
1. No argument No returntype
2. No argument With returntype
3. With argument No returntype
4. With argument With returntype
*/


//   (1). No argument No returntype :-
/*
void sum(void);
int main(){
    sum();
    return 0;
}
void sum(void){
    int a=2,b=3,sum=0;
    sum=a+b;
    printf("sum is : %d",sum);
}
*/

//   (2). No argument With returntype :-
/*
int sum(void);
int main(){
   int c;
   c=sum();                                 // If it is not returntype,then you can simply print the sum in Funtion defination as we do above.
   printf("sum is : %d",c);                 // here we can not directly use the "sum",because it is in another field.& we cannot directly access it.
    return 0;                                // NOTE: if it is a returntype....then we have to stored it in any other variable as we do in line 123.we store it in another variable i.e,. c.
}
int sum(void){
    int a=2,b=3,sum=0;
    sum=a+b;
    return sum;   // [ suppose here you write- return sum,a; then it will return the value of "a",because after comma value of that variable is executed.]     // In returntype we have to be stored it in another variable;( as we have do in line no.122 );
}                                            // If you write anything after the return, it will not be execute.
*/

//   (3). With argument No returntype :-
/*
void sum(int,int);
int main(){
    sum(5,7);                              // instead of taking fixed value,you can also take it form the user; by defining printf scanf...    
    return 0;
}
void sum(int x,int y){                      // If you are passing parameters here it means that you receiving the value of argument that is write in main function i.e., here you receive 5 and 7 from main.
    int s;
    s=x+y;
    printf("sum is : %d",s);
}
*/

//    (4). With argument With returntype :-
/*
int sum(int,int);
int main(){
    int a,b,c;
    printf("Enter the number :\n");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("sum is : %d",c);
    return 0;
}
int sum(int x,int y){
    return x+y;                      // we can directly do that also...instead of taking int c; then assign it with x+y bla..bla...bla...
}
*/






