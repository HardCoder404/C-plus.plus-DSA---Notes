/*                                        Arrays

   --> Collection of same data item or Collection of homogenious data items which are stored in consecutive way.
   --> suppose in a class there are 60 students and we want to store the marks of 60 students then....rather then declaring the 60 variable we just declare the 1-D Array.(1-D means one row & multiple columns)
   * Under one variable name we can store more than one data.
   * All the data that are stored in Array should be of same data type.
   * The index of Array always started with '0' and  till 'n-1'.
   * Address of the index Array is called the 'base Address'.
   * Array name is known as " pointer variable" or " internal pointer ". bcz it store the base Address of the Array
   
//                               declaration of an Array :- 
    int rollNo[60];             [ here int takes 4 bytes and the size of Array is 60 so....4*60=240 bytes would be allocated to the memory.And are in consecutive way.]

NOTE: we can not specifie the arry like that....       int rollNo[];        It would give error. we have to mention the size.
NOTE: inside []  only...positive numbers are written....i.e.,   (5,6,2,4,0,7...) we can not write negatives numbers.   
   


//                                  Initialization of Array
    1. At compile time
    2. At run time 
    
(1.) At compile time : when you declare the Array at that time only you Initializ the Array, means what element do you want in that Array you simply Initializ them.    
 
  (i)     int a[5]={1,2,3,4,5};  or 
  (ii)    int a[]={1,2,3,4,5};   or // as we above said that if you keep [] blank then you will get error..right...but if you write this type means if you keep the [] blank & after that you Initialize the numbers in them..then it will no error.
  (iii)   int a[5]={1,2,3};      or // if you takes suppose 5 size but only three of element you put in them...so as other two space will be Initialize with 0;(by deault)
  (iv)    int a[5];              or // this time if keep some garbage value....untill we not Initialize with element.
  (v)     int a[5]{1,2,3,4,5,6,7}; or // the size is 5 but i m providing 7 element so this time it will give error.
  (vi)    int a[5];
    -->    a[0]=1;  a[1]=8; a[2]=6; a[3]=9; ..... this is also fine..you can Initialize with individual also ...
    ** but this is not the correct way...means ya its not good to go.                       
  (vii)   int a[5]={};           or // this will give error you may write at least one.
  (viii)  int a[5]={0};            // in this case...all the entire value..till the size of Array will Initialize with 0...but this is only for case 0.means if you Initialize 1 instead of 0.then only first element will Initialize with 1...nd all othere element Initialize with 0.
    -->   int a[5]={1};            // output : 1 0 0 0 0
  (ix)  char b[10]={'a','b','v','c'};    or // you can also write in char/float also in char...element should be in single quote.
    
Drawback of compile time Array : 
 * the size is get fixed you cannnot change the value at run time.
    
    

(2.)  At run time :  It means user enter the element of Array...this is called run time Initialization of Array.

    int a[5];
    printf("Enter the element of Array :");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);             // now the user entering the element.
    }


//                 When should we use Compile time Initialization & Run time Initialization:
 
  *--> if the size is so samll i.e., 5,10. then Compile time Initialization must be used(rather than it is not neccessary)
  *--> if the size of so large i.e., 100,50. then Run time Initialization must be used(rather than it is also not neccessary)
  

//                 How the Address could be calculated 
    by the formula: -->  base Address + (index*size of data type)

*/
 




    
    
    
    
    
    
    
    
    
    


