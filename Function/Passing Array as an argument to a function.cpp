/*                                 Passing arrays as an argument to a function
why to use this ;
Ans: suppose..In my class I have 60 st.and I want to create a function to calculate the average of marks of 60 st. of same data,
    so I've to pass only marks of that 60 st. instead of making variable individually for each st.
*/
#include <stdio.h>     

int avg(int[],int);    // we take one more int for the size of arry...       (This is only for when we know the size of arry)

int main()   
{   int average,size;
    int marks[5]={10,15,20,30,45};
    size=sizeof(marks)/sizeof(marks[0]);        // this we take when we don't know the size of arry. otherwise if you know the size of arry then simply just pass it.
    average=avg(marks,size);                // When you pass a arry,it is going to pass the base address of an arry.  // we have to pass only the name of the arry and size;(only name i.e., marks) & here 5 is the size of arry
    printf("average is : %d",average);
    return 0;
}
int avg(int marks[],int size){  // here "int marks[]" this act as a pointer.(compiler interpret this line like that:- int *marks            // here we have to pass ( data type(int),name of the arry with symbol of arry( [] )  ,,,here you do not need to write the size of arry 
    int average=0,sum=0;
    for(int i=0;i<size;i++){
        sum=sum+marks[i];
    }
    average=sum/size;                 // You can take any other variable also instead of taking average;
    return average;
    
}         // NOTE: arry would always be passed by "call by reference".  

