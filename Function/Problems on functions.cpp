#include <stdio.h>
/*   Q-1:

int jumble(int x,int y){   // (2.)  after main loop will come here,, now x will receive 5 and y will receive 2;(read and see carefully its a tricky que.bt not hard its simple)
    x=2*x+y;              // again (3.1) main loop come here,, now x will receive 12 and y will receive 2;
    return x;
}
int main()
{
int x=2,y=5;
y=jumble(y,x);      // here (y,x)...y=5,x=2  (1.)
x=jumble(y,x);      // now in place of y the value is now..12   (3.)
printf("%d\n",x);   // now in x variable the value stored is (26) and this value will print.

    return 0;
}
*/

/*  Q-2 :

int incr(int i){
    static int count=0;      // static: it means that the lifetime of this value showout the program & it will initialized only once.
    count=count+i;            // by using static means that it will hold the privious value.means you cannot reinitialized with again & again.meanwhile....pahale suru suru m ye 0 hold karega phir jaise jaise value isme change hoke storred hoti rahegi ye whi value store kark rakhega.
    return count;
}
int main(){
    int i,j;
    for(i=0;i<=4;i++){
        j=incr(i);
    }
    printf("%d\n",j);
   return 0;
}
*/


/*  Q-3 :

int r(){
    static int num=7;
    return num--;               // post decrement;(firstly original value will return then it will deacrease)
}

int main(){
    for(r();r();r()){
        printf("%d\n",r());
    }
    return 0;
}
*/  
/*  Q-4 :       (using both call by value & call by reference)

void f(int*p,int m){
    m=m+5;
    *p=*p+m;          
}

int main(){
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);
    return 0;
}
*/

/*  Q-5 :

void f(int*p,int*q){
    p=q;
    *p=2;
}
int i=0,j=1;
int main(){
    f(&i,&j);
    printf("Now\ni=%d j=%d",i,j);
    return 0;
}
*/




