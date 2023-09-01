
#include <iostream>

using namespace std;

int main()
{
    int a;
   
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(char i=1;i<=a;i++){
        for(char j=1;j<=i;j++){
            cout<<((char)(j+64));            // this line is for to print alphabetes;
            
            
        }
        cout<<endl;
    }

    return 0;
}
