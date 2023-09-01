#include <iostream>

using namespace std;

int main()
{
    int a,max=0,min=0;
    cout<<"Enter the size of an array  ";
    cin>>a;
    int arr[a];                                                                 
    for(int i=0;i<a;i++){
    cin>>arr[i];
} 
    for(int i=0;i<a;i++){
        if(arr[i]>max){                                       
            max=arr[i];
        }
    }
     for(int i=0;i<a;i++){
        if(arr[i]<min){                                       
            min=arr[i];
        }
    }
    cout<<"maximum value of an array is "<<max<<endl;
        cout<<"minimum value of an array is "<<min;

    return 0;
}


