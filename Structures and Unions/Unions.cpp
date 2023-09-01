/*                                           Union
   
   *--> union is almost same as structure as it also takes the different different datatypes.
   *--> It is also a user defined datatypes.
   
   syntax :
   #include<stdio.h>
   union abc{
       int a;
       char b[10];
       float c;
   };
   int main(){
       union abc u;               // all the syntax are same of that structure
       u.a=1;                                   // for accessing the memebers of union same syntax as that of structure..
       u.b="Prince";                             //   Like..firstly objectname then dot operator then member name. 
       u.c=78.5;
       printf("a=%d\nb=%s\nc=%f",u.a,u.b,u.c);    // the last value that you write that only execute on the screen..previous value would be overwritten.
       return 0;                                  // starting k variables m koi v garbage value hogi print.
   }
   


 //NOTE: The only difference is what....memory allocation...means for structure separate separate memory would be allocated for different datatypes..
    // but in Union only single memory would be allocated for all the different datatypes...and the size of that memory would be the hightest bytes of anyone datatypes...
    // here...int takes 4 bytes..float also takes 4 bytes..and char takes 1 bytes so the highest is what ...4byte so..the memory size would be 4byte.
    
    
    
    
Advantages:    
Union--> less memory uses
structure--> more memory uses.
    
Disadvantages:
union--> we cannot process all the elements at the same time. bcz it holds the last entered value.. 
Nowadays...we are not using union because it is not good to go...so thats why...we use structures.
    
    
*/ 
