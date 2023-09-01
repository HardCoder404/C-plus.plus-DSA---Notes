#include <iostream>      
using namespace std;

/*                                       // Selection Sort
int main()
{
   int arr[5]={1,5,2,7,6};
     for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }
   for(int i=0;i<4;i++){
       int midindex=i;
       for(int j=i+1;j<5;j++){
           if(arr[midindex]>arr[j]){
               midindex =j;
           }
           swap(arr[midindex],arr[i]);
       }
   }cout<<endl;
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}
*/



//                                  //   Bubble Sort

/*             Bruetforce solution: 
int main(){ 
    int arr[]={10,3,5,6,0};
    for(int i=1;i<5;i++){                 // or or or....i=0;i<n-1;i++
        for(int j=0;j<5-1;j++){           // or or or...if i strted with 0 and.also..int j=0; j<n-i-1; j++
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//          or

/*  Optimized solution: 
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=1;i<5;i++){     
        bool swapped=false;
        for(int j=0;j<5-i;j++){           
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){              // basically hum ye is lie kr...re h ki...agr already hamara array sort h ya sort hochuka h to ...aage process na kro...or loop s bahar aajao.
            break;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/





//                                       // Insertion Sort 
/*
int main(){
    
    int a[]={5,4,10,1,6,2};
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    for(int i=1;i<6;i++){
        int temp=a[i];              // here we just store the value at i index at temp.
        int j=i-1;
        while(i>=0&&a[j]>temp){
            a[j+1]=a[j];           // just right shifting the perevious element by 1
            j--;
        }
        a[j+1]=temp;              // if above conditions not satisfy after the decrement of j...then whatever in the temp ..just place it at j+1 position
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }    
    return 0;
}
*/














