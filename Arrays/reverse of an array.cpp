
#include <iostream>

using namespace std;

int main()
{   int n;                                 //1. --> 
    cout<<"Enter the size of array:  ";
    cin>>n;
   int arr[n];                                          // whenever you want to take an array as a input with size...so you have to use that process...(from 1. to n.)
   cout<<"Enter the number"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }                                       // n.-->
   cout<<"The reverse is : ";
   for(int i=n-1;i>=0;i--){
       cout<<arr[i]<<" ";
   }

    return 0;
}
