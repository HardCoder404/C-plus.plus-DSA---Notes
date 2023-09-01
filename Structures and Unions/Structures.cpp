//                                            Structure

/*  *--> Structure is a collection of one or more variables of different different datatypes that are grouped together under a single name.
    *--> It is a user defined datatype.
    *--> It means under single datatype we can store different different datatypes(like...int,float,char)
    
    
//                                        Declaration of Structure   
    
    struct(keyword)  Student(variablesnameforStructure/Structuretag) {         // NOTE: here 'struct Student' is the complete datatypes not only struct..many strudent do that mistake.so read carefully...struct Student is the datatypes.
        int roll no;                                             // These are called members of Structure
        char name[30];                                          NOTE: we cannot initialize here...means in Structure.
        float marks;                                            NOTE: In Structure we cannot take two variables of same name. (like int rollno. and float rollno.)..this is wrong.
    };                                                        //NOTE: don't forgot to write semicolon here.

    
    
    
//                                     Declaring variables/Objets of Structure

    struct Student(datatypes)  s(variablename/objectname);                 // here you can take one or more variablename also...means like s,s1....so es se kya hoga ki in sab varible k lie alag alag memory allocate hogi...      // this must be write in main command.   [ for this 28 bytes must be allocated in the memory. ]

    
    
    
    
    
//                                    Initializing and Accessing of Structure Members   
/*    
   1. At compile time
   2. At run time
    
(1.) At compile time : 

   example :-
  #include<stdio.h>                                                
    struct Student{
        int rollno;
        char name[10];
        float marks;
    };// struct Student s={1,"prince",78.5};     // agar tum int main me ni initialize kr re to yaha kar sakte ho...this is valid.
    int main(){
        struct Student s1={1,"prince",78.5};    // this is compile time Initialization.   //NOTE: the order should be same..means in which order you have take the datatypes, same order you have to follow at Initialization time.  jaise yaha tumne pahale int lia phr char then float to usi hisab se....value initialize karna..maeans pahle 1,phir naam ,then marks ki value.
      //struct Student s1={1};                                                           //NOTE: this is called partial Initialization...means the compiler will automatically put the null value in the left two datatypes value.
        struct Student s2={2,"jhalak",55};           // if you take one more variables then you do that.
      s1=s2;                       // these are of same type that is why..this copy is allowed..if is of different type then it is not allowed.    // it means you make the copy of s2 in s1...now if you write s1.rollno...then it will print 2.
//                OR       
    //   s1.rollno=1;                 // you can also initialize like this..means individually.
    //   s1.name="prince";
    //   s1.marks=78.5;
      
      printf("%d",s1.rollno);                         // this is how you can access and print the rollno.(members of Structure)...simply write down...[ s1(objectname).(dotoperator)rollno(variablesnameforStructure) ]
     return 0;                                                            
    }
    NOTE: you cannot compare the objectname but you can compare the members o Structure.

    
(2.)  At run time : 

    example :-
    #include<stdio.h>
    struct Student{
        int rollno;
        char name[10];
        float marks;
    };
    int main(){
        struct Student s1;
        printf("Enter the information for s1 :\n");
        scanf("%d %s %f",&s1.rollno,s1.name,&s1.marks);
        printf("%d\n%s\n%f",s1.rollno,s1.name,s1.marks);
        return 0;
    }
    
    
    
    
    
//                                           To Compare the members    
    
#include<stdio.h>
    struct Student{
        int rollno;
        char name[10];
        float marks;
    };
    int main(){
        struct Student s1;
        printf("Enter the information for s1 :\n");
        scanf("%d %s %f",&s1.rollno,s1.name,&s1.marks);
        printf("%d\n%s\n%f",s1.rollno,s1.name,s1.marks);
        
        if(s1.rollno>s2.rollno){
            // body of if                                            // this is how you can Compare the members of Structure.
        }
        return 0;
    }    
    
    
    
    
    
/*                                            Array of Structure

    *--> when I want to store the information of 60 student so...in this case... we haave to use this.
    *--> If we want to store the information in large number..so in that case we use array of Structure.
    
    struct Student{
        int rollno;
        char name[10];
        float marks;
    };
    int main(){
        struct Student s[60];                          // that set...just write down the array name..then size of array you want....this is how array Declaring.in Structure.
        return 0;                                      // NOTE: It is array of 60 variables..or...It also means we have arry of 60 Structure object.
    }
    
    
    
Q. how the memory would be stored this?
A. this each arry element is a Structure object and each Structure object having information of these three information..rollno also,name also,marks also.


/*                                         How to access this array Structure 
   s[0].rollno;
   s[0].name;                       // this is the information of Student 1 of that 60 Students...so this how u can access it.
   s[0].marks;
    
    s[1].rollno,s[1].name,s[1].marks.....this is of 2nd Student.
    
    

// NOTE: to Enter the information in an array we have to use loops...obiously..

#include<stdio.h>
struct Student{
        int rollno;
        char name[10];
        float marks;
};
int main(){
    struct Student s[3];                               // here i m just taking information of 3 students.
    printf("Enter the information of 3 students :\n");
    for(int i=0;i<3;i++){
        scanf("%d\n%s\n%f",&s[i].rollno,s[i].name,&s[i].marks);                        // as we know string would take no address..means it is not neccessary...so that is why we not use & operator in string.
    }
    printf("Information of 3 students are :\n\n");
    for(int i=0;i<3;i++){
        printf("RollNo : %d\nName : %s\nMarks : %.2f",s[i].rollno,s[i].name,s[i].marks);
    }
    return 0;
}
*/




/*                                         Pointer to Structure/Structure Pointer

    *--> Structure Pointer is what...its a Pointer which points to the address of the memory block that stores the Structure.
 
#include<stdio.h>
struct Student{
        int rollno;
        char name[10];
        float marks;
};
int main(){
    struct Student s={1,"Prince",25};                              // using compile time Initialization
    struct Student *ptr=&s;                                        // for Declaring pointers datatypes must be same as that of Structure.
    printf("rollno = %d\nName = %s\nMarks = %.2f",ptr->rollno,ptr->name,ptr->marks);                 //  -> this is called arrow operator (this operator)
    return 0;                                                                                        //NOTE: ptr->rollno == (*ptr).rollno  means we can write any of these output will be the same.
}
*/





/*                                              typedef Structure

   typedef --> It is a keyword..which is used to make synomyms...means to create nickname..
    It also means that how to create your own datatypes.
    
    
//          How to Write :
    typedef(keyword) int(olddataype) integer(newdatatype) 
    
    

    
#include<stdio.h>
    typedef struct Student{                  // firstly Write the typedef keyword then Structure and then...niche new name desakte ho...
        int rollno;
        char name[10];
        float marks;
}student;                     means I have created my own of that struct student that is student.                      // yaha...new name de sakte ho
int main(){
     
  student s1;                     // so rather than writing struct student you can simply now write student. and then object name.
  printf("%d\n%s\n%f",s1.rollno,s1.name,s1.marks);  
  
  return 0;
}

//NOTE: If you are not using typedef then you can not write its sirname or by sirname you cannot access the members of Structure.
//NOTE: The scope of this typedef is only within that function.
//NOTE: You can also use this typedef locally or globally...mens if you Initializing it within function then it is local..but if you initialize it after the header file..then it is globally.
    





/*                                        Padding Structure
why we need : 
 *-->  just to increase the speed/performance or to reduce the wastage of no.of cpu cycle.
 *--> And in it...for each datatype 4bytes would be reserved...and...must takecare...that the datatype should be of increasing value of bytes.
 *--> If someone ask...how much bytes..would this Structure going to store the memore...so you firstly ask...by how?By Structure pading or Without Structure Padding.?
 *--> just see ...jo sa v sabse jyda bytes lega uske according ...extra bytes allocate hongi...
 bas yhi h Structure Padding.
*/



