/*                                                 Pointers
   
    *--> Pointers are special variable which contains the address o another variable.
    *--> These are derived datatypes.
    

NOTE : IN c programming...there is an keyword which is act as an modulus...mtlb modulus kya krta h har negative value ko positve banta h thatset...same isi tarh c lang. m v ek key word h jo koi v do value agar - karne pe - ki aari ho to use positve ka bna dega...
   i.e,.   'abs'    --> absolute      
How to use : 
   suppose i do like this...a=5,b=6;
    and i do a-b; so it will give -1 but if we use..abs as a suffix then it will return 1.positive ka ..
    
    abs(a-b);           // ase use hota h iska; 

And for this....the header file is......"#include <stdlib.h>"    
  
    
    
    
    
/*                                 Decalration of Pointers

   (datatypes) *(Pointername)
    example: int *ptr;                                 // you may also write these like...int* ptr;  int * ptr;
    Above line means--> here ptr is containing the address of another variable whose datatype are integer.


/*                                Initialization of Pointers
  
    (Pointername) = &(for those variable whose address to be store);
    example:  ptr=&a;                                                // NOTE: here you can only store the address of that variable only whose datatype would be the same of that Pointer.
    
    
suppose: we have-
    int a=10;
    float b=4.5;
    char c='$';
    
if at the line no.10 we declare a pointer so...if i write in Initialization: ptr=&a;  so that is fine...bcz y jo pointer address contain kar ra h wo...same datatype ka hai.interger.
 but if I Initialize ;;; like this....ptr=&b so that is wrong...bcz we Decalre the pointer of interger datatype means it only contain the address of those variable whosse datatype is interger...but here it contain the address of b whose datatype is float ...so wannna goes wrrong.
 
 
 
  *--> YOu can also Initialize & decalre the pointer at same time...lets see: 
    int a=10;
    int *p=&a;     /     int a=10,*p=&a;  

  
  
  
  
  
  
/*                                            &(address of/Reference of) and *(Indirection/Deference) operator

    & --> address of return only address of any variable
    * --> Indirection operator/aestric return the value of that variable.

   example : 
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d",a);                // this will print simply 10..because we directly print the value of a;
NOw:
   printf("%d",*p);               // now,,this will print 10...at this time we use pointer so that's how..we use pointer to print the value.
now;
   printf("address of a is : %x",&a);                  // this is for printing the address of any variable.
 OR 
  printf("address of a is : %x",p);                    // by this also..you can print the address of variable means a;
  
Now;
 printf("address of p is : %x",&p);                     // if you want to print the address of pointer..so that is how you can print.
 
 
NOTE: you can also use %u in place of %x bs fark itta hoga ki...%x hexadecimal m dega address...or %u unsigned int... me.


 
 
 
/*                                        Pointer Assignment 

    *--? How to assign the value of a Pointer to another Pointer.
 
 example : 
    int a=10,b=20;
    int *p,*q;
    p=&a; 
    q=p;                                          // that is how we can use Assignment Pointer. 
    printf("%d %d %d",a,*p,*q);                   // this all gives the same value i.e, 10;
 
 
 
 
/*                                     Pointer to Pointer(double Pointer)

   *--? a pointer to pointer means a special variable or a special pointer which is going to store the address of another pointer.
   
   int **p;                         // this is how we can declare.
   printf("%d",**p);                // this is how we can access it.
   
    example : 
    int a=10;
    int *p=&a;              // pointer declaration
    int **q=&p              // double pointer declaration ... see here you can not directly write 'a' because  it will not access the variable directly...we access it..through single pointer.
    printf("%d %d %d",a,*p,**q);               // this all gives the same value...i.e, 10;
 
 
 
 
 
 
 
/*                                            Pointer Arithmetic (Addition) 

    * we can add any interger value to the Pointer.. like p(a Pointer) +5,p+7....etc. 
    * we generally do Arithmetic addition in Pointer when we deal with array.
    
    example :
    int main(){
    int a[5]={0,1,3,4,2};
    int *p=&a[0];
    printf("%d\n",*p);                          // this will print the value at 0th index.
    
Now;
   p=p+2;                                   // this means now this Pointer is pointing to 2nd index i.e,. 3.
   printf("%d",*p);                         // now at this time it will print 3.
    
   return 0;
}






/*                                            Pointer Arithmetic (Subtraction) 


NOTE: we can subtract two Pointer variable or any integer value from a Pointer.. but we can not add two Pointer variable.
NOTE: when we add/sub any interger value from Pointer then it will return address type result.
    but..if we sub two variable then it will return interger type result.

    example :
    int main(){
    int d;
    int a[5]={0,1,3,4,2};
    int *p=&a[0]; 
    int *q=&a[3];
    d=q-p;                     // this you can do.              this will give the difference of betweeen these two indexs. ie,3.
    q=q-2;                     // this will also you can do. ( it means move two position backward)
    p=p+2;                                                   ( it means move two position forward )

return 0;
}
  
  
  
  



/*                                           Pointer Arithmetic (Increment/Decrement) 
    
    p++  :   post Increment 
    p--  :   post Decrement
    
    ++p  :   pre Increment
    --p  :   pre Decrement
    
    int a[5]={0,1,3,4,2};
    int *p=&a[0];
    p++;                      // this means you are just Increment the current position of Pointer to the next one...mean now it will point to the 1st index.     here you can also write p=p+1;...both are same.
    printf("%d",*p);              // this will give you 1 as outuput.
now;
//   printf("%d",*p++);             // if you write this...then it will give u 0 as output. because post Increment means fistly it will return the value then increase.
and;
//   printf("%d",*++p);            // but if you write this..then it will gives you 1 as output ...because pre Increment means firslty it will return the will Increase the value then return.
    
But;
   printf("%d %d",*p++,*p++);              // then at this time...second wala would be printed first...then preivious wala...means...1 and 0 would be printed.  this is due to the associativity rule.  so execution should be from right to left.
   
    
now;;;;
  printf("%d",*p--);                   // this is also same..means..it would firslty print the original value and then Decrease.
    
but;
    printf("%d",*--p);                      // then this time it will return any garbage value..because..it will firslty return the updated value...means deacreased value...but as it deacreased it will go out of the range of array.so that is why..it wil print any garbage value.
    
If;
   printf("%d %d %d",*--p,*--p,*--p);                      // here also associativity rule applied..
    
 






/*              Types of Pointer 
   1. Void Pointer
   2. NULL Pointer
   3. Dangling Pointer
   4. Wild  Pointer
   
   
   


/*                                             Void Pointer 
    *-->  It has no any datatype...so you can convert it into any other datatype. means you can typecast. 
    *--> If in a program if you have multiple type of datatypes so rather than Initializing separate Pointer for each...just use the void Pointer..so due to this...time will saves...


Decalration of Void Pointer :
    void *vp;

NOTE: you can not directly access the void Pointer...like
    suppose int a=5,float b=2.5,char c='0';
    void *vp=&a;
    printf("%d",*vp);     // that thing you cant do because void Pointer doesnot allow you to Dereference...firstly you have to typecast this void Pointer.
 
so we have to typecast this void Pointer :
    printf("%d",*(int*)vp);          // this is how....typecasting will done.    // now it is typecasted n gonna to print 5. 
or :
   void *vp=&c;
   printf("%c",*(char *)vp);               // again typecasting is done...and it will print 0.


 example :
   int a=5;
   float b=2.5;
   char c='0';
   void *vp=&a;
   printf("%d",*(int*)vp);              --> 5
   
   void *vp=&b;
   printf("%f",*(float *)vp);           --> 2.5
   
   void *vp=&c;
   printf("%c",*(char *)vp);            --> 0






/*                                       NULL Pointer

   *--> It does not refer to any valid address.
   
Initializing :
  int main(){
   int *ptr=NULL;
   printf("%d",ptr);              // this will give 0...here in this compiler it not give output..bcz of issue..but in vs code it will give 0.
  
 return 0;
}
  




/*                                      Dangling Pointer

  *--> Dangling Pointer points to a freed memory location.
  *--> suppose..you have phone no. of your friend..but he has changed his no...but you still have his old phone no..so that phone no.is like Dangling Pointer...bcz now if you call your friend on that no..so he would not receive..bcz that phone no is now not exist.
    
   int *ptr=(int *)malloc(size of (int));             // this is called dynamically memory allocation using malloc.
   *ptr=10;
   printf("%d",*ptr);       --> 10
   
  free(ptr);                                       // Dangling Pointer
  ptr=NULL;                 --> now it would hold 0.






/*                                       Wild Pointer
    
    *--> If a pointer is uninitialized then it is act as a wild pointer.
    
    int *ptr;              // it is uninitialized pointer because we do not assign it anything.
NOTE: but is is not better to uninitialized a pointer..because it will show sometime unusual behaviour.    

How to overcame this wild pointer ?
 1. either by decaring ptr=NULL
 2. or by declaring it using dynamically memory allocation
 
 
 
 
 

//            Example : 


/*
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}

void update(int *p){
    *p=*p+1;
    cout<<*p<<endl;
    
}
int main(){
   int a=5;
   int *p=&a;
   cout<<"before "<<*p<<endl;
   update(p);
   cout<<"after "<<*p<<endl;
    return 0;
}
*/




