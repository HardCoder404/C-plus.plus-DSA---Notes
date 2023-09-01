/*                                               String
    --> In simply,String is an array of character. or It is an character array which ends with null character.(\0)
    --> means it store only character term.
    NOTE: In String datatype must always be "char"
    
    
/*                                 Declaration
    char Stringname[size];
    Ex.-  char name[10];
    
    
/*                               Initialization

    char name[10]="jenny";                          // NOTE: whatever we write in a double inverted commas...it is considered as string.
    char name[]={'j','e','n','n','y','\0'};       // NOTE: whatever we write in a single inverted commas...it is considered as character.
/*                                                          also It is not medetory to write the size of string,if you Initialize it at Declaration time.

NOTE: In C string is not considered as datatype like int,float,char,...these are datatype..array is also derived datatype in C
    but string is not a datatype in C but yaa...we can represent string as an character array in C 
    Here...format specifier for string is --> %s
    
    
    
    
    
/*                              Read a string using scanf and gets function 

 we can read or Initialize a string using some standard function(scanf/gets).
 
1.  Read the string using scanf : 
   char name[10];
   scanf("%s",name);       // see here we dont use the & operator...bcz it store the base address of the character array.
   printf("%s",name);      // NOTE: format specifier is designed in such a way that we dont need to put scanf in for loop or to use address operator.
   
/*  Drawback of scanf function : 

  suppose you enter the name: Prince raj...so it would print only Prince  if you using scanf..bcz scanf will not considered white space in string.  
  when the compiler sees that after prince there is an space..so it will think it is the end of the string..so it automatically put \0 after Prince. means end of the string. that is why...only prince would be printed.
  But if you write like this ...princeraj then it would print this why because..there is no white space.
  
  
2.  Read the  string using gets :
    --> to overcome the Drawback of scanf function gets function is used..means it read the whole line including white space until & unless you enter a new line/press enter.
    char name[10];
    gets(nameofstring);/ie. gets(name);
    print("%s",name);
    
/*  Drawback of both scanf & gets function  :
    
    Buffer overflow: suppose we pass the size 5 but we enter the lenghty name so...compiler will what to do..it will read/store the entire string although space is allocated only 5 character, so here it will store the entire string and itt willl print the entire string.
/*                   so this is what..it is overflow it is not going to check the Buffer,the Buffer size(5) so it is going to store beyound the memory..so whatever is there in that memory it is going to overwrite that thing.so that is very risky.

NOTE: we use fgets rather than using scanf or gets.





//      syntax of fgets :                                      // it is use to read the sstring.

   fgets(string_name,sizofstring,stdin);
ex : fgets(name,sizeof(name),stdin);            // this is how you can read the string.
    printf("%s",name);                          // and print the string
  
  
  
  
  
/*                                           printf & puts function
    printf();
    
--> basically both are used to print a string.

--> I think we all are aware about printf function. 
--> here we just talk little bit more about printf...

-->  printf("%.5s",name);           // suppose i write like this type..so what would print...it will print only the five character of the name what you have entered..(ex, suppose you entered..jayanti...so by using this..it will print only..jayan);
-->  printf("%10.5s",name);         //  again what it meant..it means..after 5 letter spaces it would print only 5 character of your name(bcz..5+5=10) that you might entered.
-->  printf("%s",&name[2]);            // it means you provided the 2nd index..means the string will print from 2nd index till the null character.   (ex..you entered jayanti...so its 2nd index is 'y'..so the name will print from the 'y'..ie., yanti).


    puts();

--> puts(name of the string);
    ex.. puts(name);


NOTE: the only difference between printf and puts is that...... in printf after the ending of string..it will not print a new line..but..in puts after the ending of string it will print a new line..
*/







