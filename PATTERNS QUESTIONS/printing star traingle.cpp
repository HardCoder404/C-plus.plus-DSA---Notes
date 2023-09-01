#include <iostream>

using namespace std;

int main()
{
     int a,s;
      cout<<"Enter the number"<<endl;
      cin>>a;
      for(int i=1;i<=a;i++){
          for(int s=1;s<=(a-i);s++){      // a-i  is the formula for printing space
              cout<<" ";
          }
          for(int j=1;j<=i;j++){
              cout<<"* ";                 // we print * and then one space i.e "* " so that we can print also a space between the middle stars
          }
          cout<<endl;
      }

    return 0;
}
