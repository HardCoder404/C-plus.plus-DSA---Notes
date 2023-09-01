#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//   Q.1                               Program to Print 2-D array(matrix) and calculate its sum
/*
int main()
{   int a[2][3],sum=0;
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           scanf("%d ",&a[i][j]);
       }
   }
   for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }
   for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           sum=sum+a[i][j];
       }
   }
   printf("sum is : %d",sum);

    return 0;
}
*/




//   Q.2                                Program to print Transpose of a matrix (3 X 3)
/*
int main(){
    int a[3][3]={{1,1,1},{1,4,1},{1,0,1}};
    printf("Before Transpose : \n");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("%d ",a[i][j]);
       }
       printf("\n");
   } printf("After Transpose : \n");
    for(int i=0;i<3;i++){
        int s=0;
        for(int j=0;j<3;j++){
            s=a[j][i];
    printf("%d ",s);
        }
        printf("\n");
    }
    return 0;
}
*/




//   Q.2.1                                Program to print Transpose of a matrix (2 X 3)
/*
int main(){
   int a[2][3]={{1,1,1},{1,0,1}};
    printf("Before Transpose : \n");
    for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           printf("%d ",a[i][j]);
       }
       printf("\n");
   } printf("After Transpose : \n");
    for(int i=0;i<3;i++){                         // here see the logic...after Transpose the Matrix will formed of order 3 X 2 ,means now this time outer loop will run till 3 and inner loop run till 2.
        int s=0;
        for(int j=0;j<2;j++){
            s=a[j][i];
    printf("%d ",s);
        }
        printf("\n");
    }
    return 0;
}
*/





//   Q.3                                 Program to print Sum of individual Rows and Columns of a Matrix
/*
int main(){
    int a[3][3]={{1,1,1},{1,4,1},{1,0,1}};
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("%d ",a[i][j]);
       }
       printf("\t");
       int sum_row=0,sum_column=0;
        for(int j=0;j<3;j++){
            sum_row=sum_row+a[i][j];
            sum_column=sum_column+a[j][i];
            }
    printf("rowsum= %d columnsum= %d",sum_row,sum_column);
        printf("\n");
    } 
    return 0;
}
*/





//   Q.4                                Program to Add two Matrix

// NOTE: for the addition of two Matrix no.of rows and column should be the same of both the Matrixs.
/*
int main(){
    int m1[3][3]={{1,1,1},{1,4,1},{1,0,1}},m2[3][3]={{1,1,1},{1,4,1},{1,0,1}};
    printf("Matrix A :\tMatrix B :\tMatrix(A+B) :\n");
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
           printf("%d ",m1[i][j]);
        }
        printf("\t   +\t");
        for(int j=0;j<3;j++){
           printf("%d ",m2[i][j]);
        }
        printf("\t   =\t");
        for(int j=0;j<3;j++){
        sum=m1[i][j]+m2[i][j];
           printf("%d ",sum);
        }
        printf("\n");
    } 
    return 0;
}
*/






//   Q.5                                Program for the Multiplication two Matrix

// NOTE: for the Multiplication of two Matrixs-->  'coulumn of first Matrixs should be equal to the row of second Matrixs'.
// REMEMBER: the new Matrixs formed will be the order of-->  'row of first Matrixs and column of second Matrixs'.
/*
int main(){
    int m1[2][3]={{1,1,1},{1,4,1}},m2[3][2]={{1,1},{2,0},{1,1}},m3[2][2];
    printf("Matrixs A :\n");
     for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           printf("%d ",m1[i][j]);
       }
       printf("\n");
   }printf("\nMatrixs B :\n");
    for(int i=0;i<3;i++){
       for(int j=0;j<2;j++){
           printf("%d ",m2[i][j]);
       }
       printf("\n");
   }printf("\nmultiplication of A X B :\n");
    for(int i=0;i<2;i++){                                       // this loop will run for the new Matrixs(A X B) means (2X2)
       for(int j=0;j<2;j++){
           int sum=0;
          for(int k=0;k<3;k++){                                //NOTE: here the 'k' will be run till either coulumn of 1st Matrixs or row of 2nd Matrixs
              sum=sum+m1[i][k]*m2[k][j];
              m3[i][j]=sum;
          }
          printf("%d ",m3[i][j]);
       }
       printf("\n");
   }
    return 0;
}
*/



/*
//                                                Spiral Print 

vector<int>SpiralOrder(vector<vector<int>>&matrix){
vector<int>ans;

int row=matrix.size();
int col=matrix[0].size();

int count=0;
int total=row*col;

// Initializing of Index: 
int startingrow=0;              // first col--> to last col tk jana hai
int startingcol=0;              // last row--> to first row tk jana hai
int endingrow=row-1;            // last col--> to first col tk jana hai
int endingcol=col-1;            // first row --> to last row tk jana hai

while(count<total){
    // Printing startingrow 
    for(int i=startingcol;count<total&&i<=endingcol;i++){
        ans.push_back(matrix[startingcol][i]);
        count++;
    }
    startingrow++;
    // Printing endingcol 
    for(int i=startingrow;count<total&&i<=endingrow;i++){
        ans.push_back(matrix[i][endingcol]);
        count++;
    }
    endingcol--;
    // Printing endingrow 
    for(int i=endingcol;count<total&&i>=startingcol;i--){              // niche wale dono me hum ending se starting ki taraf jaare h islie...>= ka sign lia...
        ans.push_back(matrix[endingrow][i]);
        count++;
    }
    endingrow--;
    // Printing startingcol
    for(int i=endingrow;count<total&&i>=startingrow;i--){
        ans.push_back(matrix[i][startingcol]);
        count++;
    }
    startingcol++;
}
return ans;
}
int main(){
    
    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    for(auto i:SpiralOrder(matrix)){
        cout<<i<<" ";
    }
    
    return 0;
}
*/



/*
//                                rotate matrix through 90 degree
#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void printMatrix(int mat[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      std::cout << mat[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void rotateMatrix(int mat[][COLS]) {
  // Transpose the matrix
  for (int i = 0; i < ROWS; i++) {
    for (int j = i; j < COLS; j++) {
      int temp = mat[i][j];
      mat[i][j] = mat[j][i];
      mat[j][i] = temp;
    }
  }

  // Reverse each row of the transposed matrix
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS/2; j++) {
      int temp = mat[i][j];
      mat[i][j] = mat[i][COLS - j - 1];
      mat[i][COLS - j - 1] = temp;
    }
  }
}

int main() {
  int mat[ROWS][COLS] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

  std::cout << "Original matrix:" << std::endl;
  printMatrix(mat);

  rotateMatrix(mat);

  std::cout << "Rotated matrix:" << std::endl;
  printMatrix(mat);

  return 0;
}
*/








