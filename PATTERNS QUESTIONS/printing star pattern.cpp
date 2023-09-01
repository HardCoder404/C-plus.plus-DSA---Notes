#include <iostream>

using namespace std;

int main()
{
      //star pattern in different ways:
      int a;
      cout<<"Enter the number"<<endl;
      cin>>a;
      for(int i=1;i<=a;i++){
          for(int j=1;j<=a;j++){
              if((i+j)<=a){
                  cout<<" ";
              }
              else{
                  cout<<"*";
              }
          }
          cout<<endl;
      }
      
    return 0;
}
