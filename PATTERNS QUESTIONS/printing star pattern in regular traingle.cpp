#include <iostream>

using namespace std;

int main()
{
    int a,s;
    cout<<"Entere the number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int s=1;s<=(a-i);s++){
            cout<<" ";
        }
       
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
