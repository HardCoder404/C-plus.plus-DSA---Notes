/*                                     Local Variable:
  * A Variable that is declare inside the function or a block is called Local Variable.
  * It can be used within the block or a function where it is defined. we cannot access it outside the function.
  * NOTE: We should declare it in the starting time in the function..where it is to be defined.
  
  
  
/*                                     Global Variable:
  * A Variable that is declare outside the function or a block is called Global Variable.
  * Any function can access this Global Variable...meanwhile we can access it from anywhere.
  * NOTE: It must be dedeclare before the block starts..meanwhile after the header file it should begins.
  
  
  
/*                                     Static Variable:
  * A Variable which initialize with a "static" keyword is called Static Variable.
  * It holds its previous value.
  
  
  
  
/*                  Examples of Each one;
 Local Variable:

    main(){
        int a=9,b=4;
        printf("%d %d",a,b);              // here a & b are Local Variable...bcz it is used inside the function.
    }
    printf("%d %d",a,b);                 // if we try to write this and want to print this then it is show some error bcz it is not local to above function.


 Global Variable:
 
    int a=5,b=4;                         //  here a & b are Global Variable...bcz it is used outside the function. 
    main(){
        printf("%d %d",a,b);             // here we can access a & b bcz it is Global or any other function can access it.
    }
 
 
 Static Variable:
  
   func(){
    int a=10;
    static int b=20;     // here firstly b has 20 but after the function call when again it printed then it show b value get 22
    a++;b++;             // due to this... there is an increment of one in each...then it is printed.
    printf("%d %d",a,b);
  }
  void main(){
    func();              // here first time 11 & 21 would be printed..
    func();              // but as we call it again so a value will remains the same..bcz it is local to that function..
//                          but due to static it hold its previous value...
//                          so it printed 22 (bcz as its previous value is 21 so after increment by one it get 22).
 }
*/
 
 
 
 
 
 
  
  
  
