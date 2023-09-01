//                                               Recursion
//                                                        :- When a function call itself by direct or indirect then it is called Recursion.
#include <stdio.h>

//                 find the factorial of number
/*
void disp(int n){                        // here the disp function is called "direct recursive" because it call itself directly
    if(n<1) return;                      // and this process is known as Direct Recursion (line no.7-14)
    else{
        printf("%d ",n);
        disp(n-1);                     // see here the function is calling in the same function
        printf("%d ",n);
    }
}
int main()
{  int n=3;
    disp(n);

    return 0;
}
*/

//             Printing the sum of n natural number
/*
int sum(int x){
    int s=0;
    if(x==1)                        // see here i dont write any curlybraces...if you not write this then by default only one statement will be return after if..would be considered of this if block.
    return x;                       
    s=x+sum(x-1);
    return s;
}
int main(){
    int a;
    a=sum(5);
    printf("%d",a);
    return 0;
}
*/


/*                                                   Types of Recursion
//                              1. Direct Recursion
//                              2. Indirect Recursion
//                              3. Tail Recursion
//                              4. Non Tail Recursion

    1.  Direct Recursion : means a function is calling itself direclty (above both are the example Direct Recursion)
    2.  Indirect Recursion : when a function call in circular motion or circular fashion then,it is called Indirect Recursion
//                                                             OR
//                            suppose in  func1 we are calling func2 but in func2 we are again calling func1 so ultimetly in func1 we are calling func1 but through func2 Indirect.   (and this func1 & func2 are known as "Indirect recursive")


//                    factorial of a number through Indirect Recursion                                                                                                                                                           */
/*
int func1(int);
int func2(int);
int main(){
    printf("factorial of given number is : %d",func1(5));
    return 0;
}
int func1(int n){
    if(n<=1)
    return 1;            //  return means return the value from actually where it is calling 
    else 
    
    return n*func2(n-1);
}
int func2(int n){
    if(n<=1)
    return 1;
    else 
    return n*func1(n-1);
}
*/

//   3. Tail Recursion :  Recursion would be the last thing in that function means there will be no task after the recursive call..that is called tail recursion.
//   4. Non Tail Recursion  : if there is some task after the calling of recursive function..then it is called Non Tail Recursion.
/*       
//                         example of Tail Recursion;
void print(int a){
    if(a<1)
    return;
    else 
    printf("%d ",a);
    print(a/2);   //  after this line..if you add new statement i.e,. print("%d",a); then it will be the example of non Tail Recursion.        // here you can clearly see that after this recursive call there is no task is performed. that is why it is called Tail Recursion
}                           // NOTE: but still firstly analysis that ki..ye tail h ki ni..ye ni ki dekha bas ki last m call hora h or uske bad kuch v ni h to tail hogya..nahi ...firstly dekho..kav kav last m kuch ni likhne k bad v wo tail ni hota.
int main(){                 // NOTE: tail Recursion takes more space that is why it is less use...but time complexity for this is same as loops.
    print(10);
    return 0;
}
*/
//                         example of non tail Recursion;
/*
int print(int a){
    if(a<1)
    return 0;
    else 
    return 1+print(a/2);
}
int main(){
    int x;
    x=print(10);
    printf("%d",x);
    return 0;
}
*/





//                                  problem on Recursion with all types covers;


void count(int n){
    static int d=1;               // we use static so that it holds d's privious value.
    printf("%d ",n);
    printf("%d ",d);
    d++;                            // means after this d value is get increased by one.
    if(n>1) count(n-1);             // this is not tail,this is non tail....bcz after recursive call one task is still performed.
    printf("%d ",d);             
}                                  // when the compiler see this so it return back the the call where it is being call that is why last 4 4 4 would be print.
int main(){
    count(3);
    return 0;
}














