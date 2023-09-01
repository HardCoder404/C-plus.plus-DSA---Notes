/*                                            Arrays (2-D)
    --> 2-D Arrays are what... a array of several 1-D Arrays.
    --> 2-D Arrays are what... it is used to solve the problems related to Matrix.
    --> suppose we waant to store the marks of 60 students in 5 subjects under one variable name only....so that is why we use 2-D Arrays.
    
    
/*                                   Decalration of 2-D Arrays                        
    datatype  nameoftheArrays [row_size][coulumn_size];                         // general syntax



/*  Q.    suppose if I want to store marks of 3 students in 5 differents subjects.Then How to declare ?

    A.    int marks[3][5];
/*                           see how it store...
/*         1 2 3 4 5
/*         5 2 1 4 7           --> 3 rows & 5 coulumn
/*         4 7 8 3 3          NOTE: rows & coulumns always be start with 0.                 (meanwhile the rows numbers are like that...0th row,1st row,2nd row......0th coulumn,1st coulumn,2nd coulumn...5th coulumn);
/*                            NOTE: we can also say multiple dimensional Arrays "a Matrix".         ( like here are the Matrix of 3X5).
  
  
  REMEMBER: In memory it is not like that the data is store in tabular form or Matrix form...No...it is store in single line...meanwhile as like 1-D.
  
  
  
  for this :
/*                int a[3][4];
    
Q.1   how many elements would be stored?
Q.2   how many bytes are stored for this Arrays?

A.1  for elements=   no.or row * no. of coulumn  --> 3 X 4 = 12  --> means 12 elements would be stored.
A.2  for bytes = no. of elements stored * size of data type   --> 12 X 4 = 48    --> means 48 bytes would be allocated to this Arrays.  
  
  
  
  
  
  
/*                                         Initialization of 2-D Arrays
   1. At Compile Time 
   2. At Run Time
   
 REMEMBER: Initialization is done row by row....means ki pahale pahala row fill hoga then dusra row...then tisra....thennnmmmm      n.
 
 
(1.)  At Compile Time : means at the time of declaration you will give the value.

/*                  (i)      int a[2][3]= {0,0,0,1,1,1};
/*                  (ii)     int a[2][3]= {{0,0,0},{1,1,1}};
/*                  (iii)    int a[2][3]= { 
/*                                           {0,0,0}
/*                                           {1,1,1}
/*                                        };
/*                  (iv)     int a[][3]= {{0,0,0},{1,1,1}};       // In that case no you can also leave the blank of row size...it is fine     bcz..you already Initialize the value.
/*                  (v)      int a[2][3]= {0,0,1,1};              // here the row is 2 and coulumn is 3 so....in first row... the value will filled like that..  0 0 1; and in second row...value is filled like that... 1 0 0 
/*                                                                   this is bcz by default the left elements are filled with 0.
/                   (vi)     int a[2][3]={0};                    // here all the elements are filled with 0.except 1st means agar tumne 0 ki jagh 1 likha h then..1 will filled in 1 row 1 coulumn..and the left are filled with 0.



(2.)   At Run Time : at run time we generally use printf scanf function..and we also use nested loop to read the value from user.
 
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scnaf("%d",&a[i][j]);                      // this is how you will take the input an Array. at run time
        }
    }
  
 

/*                                    How you can access the data and print it also

/*                   int a[2][3] = {{1,1,2},{2,3,6}};

now suppose if i want to print the 3 element so how can i access this...simply as give the position name in Matrix. mans( 00,01,02,10,11,12...);

* so here 3 is in the place of...2nd row and 2nd coulumn...or or or you can write (2,2); 
* so now you got the element place now you have to print it..so how you can do..
* simply write Arrayname[here pass the row no.of that element][here pass the coulumn no. of that element];

    printf("%d",a[2][2]);        // now you got 3 on screen.

*/














   
   
  
    
    
    
    
    

