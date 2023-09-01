//                         Return a String from a function

#include <stdio.h>
char* disp();
int main()
{   char* str; 
     
     str= disp();
     str[0]='z';                    // here we are just modifying the String.
     printf("String is :%s",str);
   
    return 0;
}                              
char* disp(){                 // you are not returning jenny completely,we are just returning pointer to the first character of this string & using that pointer ..we can access the string.
   
  static char str[]="jenny";              // you can also write inplace of static --> char* str="jenny";
    return str;
}

