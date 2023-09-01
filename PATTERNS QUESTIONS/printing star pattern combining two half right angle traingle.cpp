
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=(a-1);i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }    
    
    
    
    

    return 0;
}
