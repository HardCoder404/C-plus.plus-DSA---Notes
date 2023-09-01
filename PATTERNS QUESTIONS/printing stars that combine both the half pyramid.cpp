#include <iostream>

using namespace std;

int main()
{
   int a,s;
    cout<<"Enter the number"<<endl;
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
      
   
for(int i=(a-1);i>=1;i--){                      //we do here a little bit change-we just only change first line i.e, we do int i=(a-1)
       for(int s=1;s<=(a-i);s++){                 //so that no two max.line are printed together;
           cout<<" ";
       }
    for(int j=1;j<=(2*i-1);j++){
        cout<<"*";
    }
        cout<<endl;
   }

    return 0;
}
