#include <stdio.h>
//                     (1.)   Printing  numbers in forward & reverse order
/*
int main()
{
    int a[5];
    printf("Enter the element in an array :");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);           // reading the element
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);          // printing the element
    }
    printf("\nIn reverse order is :\n");
    for(int i=4;i>=0;i--){           // printing in reverse order
        printf("%d ",a[i]);
    }
    return 0;
}
*/



//                    (2.)   sum & average of 5 student
/*
int main(){
    int a[5],sum=0,average;
    printf("Enter the element in an array :");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);           // reading the element
    }
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    average=sum/5;
    printf("sum is : %d\n",sum);
    printf("average is : %d",average);
    return 0;
}
*/



//                     (3.)    Counting total numbers of Odd & Even in an element
/*
int main(){
    int a[10],even=0,odd=0;
    printf("Enter the element in an array :");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);           // reading the element
        if(a[i]%2==0){
            even++;                 // even++ means even=even+1;
        }
        else{
            odd++;                  // odd++ means odd= odd+1;
        }
    }
    printf("even numbers in that element are : %d\n",even);
    printf("odd numbers in that element are : %d",odd);
    return 0;
}
*/



//                       (4.)     take two array as an input and store the sum of these two arays into third array and print it
/*
int main(){
    int a1[5];
    printf("Enter the element in an array 1 : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a1[i]);           // reading the element
    }
    int a2[5];
    printf("Enter the element in an array 2 : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a2[i]);           // reading the element
    }
    int sum[5],s=0;
    printf("Sum of the array is : ");
    for(int i=0;i<5;i++){
       s=a1[i]+a2[i];
       printf("%d ",s);
    }
    
    return 0;
}

*/

























