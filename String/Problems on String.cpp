#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//                                     Program to Read & print a string
/*
int main()
{
   char name[30];       // rather than you can also..initialize here.
   printf("Enter the name:\n");
// scanf("%5s",name);         // here it means it will read only 5 charchater and print that 5 charchater.
// printf("%s",name);          // but as we talk ago...it only print the single string meanss after space it will not print anything
   gets(name);                // but it is risky dont use it 
   printf("%s\n",name);
   printf("%.5s\n",name);           // here is also same thing happeining...it would print only 5 charchater.
   printf("%10.5s\n",name);         // see as we talk ago...it would print only 5 charchater after the 5spaces.
   printf("%s\n",&name[2]);           // it means it will print the string from the index 2.,,..lets seee.
   puts(name);
   puts(name);             // as you seen that the after 1st puts prince raj is printed in next line...so it is clear that puts print the next line after the ending of string.

    return 0;
}
*/



//                                   Program to Find the length of a string using predefined function(strlen);
/*
Two methods are there :
1. using predefined function (strlen)
2. using our own logic (means loop)

#include<string.h>   
int main(){
    int count=0,i=0;
    char name[30];
    printf("Enter the name : \n");
    gets(name);                                       // reading the string
    puts(name);                                       // writing the string
   // count=strlen(name);                                // strlen will count the length of string excluding null character..means it will not count the null character.
//         OR:
    while(name[i]!='\0'){
        count++;
        i++;
    }
    
    printf("Length of string is : %d",count);
    return 0;
}
*/





/*                                  Program to Concatenate two string

Two methods are there :
1. using predefined function (strcat)
2. using our own logic (means loop)

Concatenation : It means combining the two string. 
NOTE: suppose you have two string s1 and s2 and you want to combine both...means in s1 you want to join...s2 so....
    the most important thing to keep in mind is ....the size of that string where the another string is being stored..must be greater enough to store it.
    ex... s1--> have 4 character...s2--> have 6 character...& you want to join s1 and s2..so the size of s1 should be more than 10.
    
NOTE: fist string always be..."destination"  and 2nd string always be.."source".


#include<string.h>
int main(){
    char s1[30]="Prince ",s2[10]="Raj";
    int len1,len2;
  //  strcat(s1,s2);                                // here it means we append s2 at the end of s1. so it will print Prince Raj.
 // strcat(s2,s1);                                // now it means we append s1 at the end of s2.  so it will print RajPrince.
   
   
//         OR
    len1=strlen(s1);
    len2=strlen(s2);
    for(int i=0;i<=len2;i++){                     // we take i<=len2 bcz we transverse the s2..not the s1.that's why. and we transverse the s2 till null character that's why we take = sign also.
        s1[len1+i]=s2[i];                        // understand the logic...it means whatever we change in s2 we will going to store it into s1...so in s2 we pass 'i' means it transverse the string...and in s1 we do..len1+i bcz, we want to store the string2 at the end of s1 so...len1+i karne se kya hoga...ki hume ek ek next place milta jaiga..s1 m s2 ko store kanre k lie..it is the logic.
    }
    printf("%s",s1);
    return 0;
}

    
NOTE: There is another function "strncat()"...in this function we can also print the character up to which we want to print.means suppose i want to print Ra...only instead of Raj..at the end of s1. so we use this. function.
    Syntax: 
    strncat(s1,s2,(no.of character up to which you want to print));
    example: strncat(s1,s2,2);               // means it will print only Ra.  // see here it is not started with 0th index it normally started with 1th place.
    
    





/*                                           Program to Compare two string

Two methods are there :
1. using predefined function (strcmp)
2. using our own logic (means loop)

example: suppose we write two string--> s1="computer",s2="computer"..so in this case Program should return both are equal...but if s1="computer",s2="Computer",,now in this case both are not equal bcz 'c' is in lower case and 'C' is in upper case.

* It is compare charchater by charchater in string.

    strcmp(s1,s2)--> this will return three types of value:
    0   = when both the string are same.
   +ve  = when the fist charchater that does not match is greater(means its ASCII value) in string1
   -ve  = when the fist charchater that does not match is less(means its ASCII value) in string1

NOTE: ASCII value of :
    a=97.....z=122
    A=65.....Z=90         The difference between the 'a' and 'A' is of '32'.  (i.e,. 65(A)+32=97(a));
    
*/    
//example:
/*
#include<string.h>
  int main(){
    char s1[]="hello",s2[]="hi";
    int v;
    v=strcmp(s1,s2);
    if(v==0){
        printf("same");
    }
    else{
        printf("not same");
    }
    printf("\n%d",v);                              // if you print that value of compare function then it is not fixxed exact what value it will return..but it is fixed if it is positive..then it will return any positive no. but if it is negative then it will return any negative no...and if are same then 0.
      return 0;
  }  
  
//    OR
  
   int main(){
    char s1[]="hello",s2[]="hi";
    int flag=0;
  for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++){                   // here we take logical or operator bcz we want any of these either true then condition becomes true.
      if(s1[i]!=s2[i]){                                        // we want if this happen...then just put the value 1 in flag variable..and simply break throught the for loop.
          flag=1;
          break;
      }
  }
  if(flag==1){                                                // here we check is flag==1? if yes then run the printf part.othrwise run the else part. 
      printf("not same");
  }
  else{
      printf("same");
  }
  
  return 0;
}
*/  
  
  
  
  
  
  
//                                       Program to Reverse a String
/*
Two methods are there :
1. using predefined function (strrev)
2. using our own logic (means loop)
  
  
#include<string.h>
int main(){
    char s1[]="hello",ch;
// strrev(s1);

//     OR
    int l;
    l=strlen(s1);
    for(int i=0;i<=l/2;i++){                              // we divide here the length of string by 2 bcz we want to swapp.
      ch=s1[i];                                           // here in this loop we doing swapping. 
      s1[i]=s1[l-1-i];                                  logic is that...->  s[0]=s[4]   s[1]=s[3]    
      s1[l-1-i]=ch;
    }
    
    
    printf("%s",s1);
    return 0;
}
*/  
  
  
  
  
  
  
/*                                      Program to convert a String from Upper Case to Lower Case

Two methods are there :
1. using predefined function (strlwr and strupr)
2. using our own logic (means loop)


// the que.is that ...suppose i write PRINCE so the output must be comes up prince..also..if i write something like this..PrInCe..so obiously..output will be the same prince..meanwhile...it gets converted into lowercase.,that's our aim. 
/*
#include<string.h>
int main(){
    char s[10]="PRiNcE*";
 // strlwr(s1);
 
//      OR 
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    
    //    OR
      transform(s.begin(),s.end(),s.begin(),::toupper);             // basicall it is use in c++
    
    printf("%s",s);
    return 0;
}
*/


//                                        finding maximum occurance in an string
/*
char getMaxOccStr(string s){
    
    int arr[26]={0};
    
    // finding an array of count
    for(int i=0;i<s.length();i++){
        char ch=s[i];
       int number=0; 
       number=ch-'a';
        arr[number]++;
    }
    // finding max occurance
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return ans+'a';
}

int main(){
    
    string s;
    cin>>s;
    cout<<getMaxOccStr(s);
    
    return 0;
}
*/












