#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<((char)(j+64));
        }
        cout<<endl;
    }

    return 0;
}
