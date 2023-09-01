//                                     Passing String as an argument to a function
#include <stdio.h>
void modify(char[],char[]);

int main()
{  char str1[]="Jenny";
   char str2[]="khatri";
   modify(str1,str2);              // here we are simply passing the String as an argument
   
    return 0;
}
void modify(char str1[],char str2[]){
    int length=0;
    for(int i=0;str1[i]!='\0';i++){       // read this line carefully and try to understand
        length=length+1;
    }
        printf("length of String 1 is : %d\n",length);
        str2[1]='K';                  // now here..we are modifying the string 2
        printf("%s %s ",str1,str2);        //  and here we are simply printing both the string after modifying
}

