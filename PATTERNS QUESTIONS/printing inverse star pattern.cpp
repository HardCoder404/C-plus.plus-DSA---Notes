
#include <iostream>

using namespace std;                //Note: 'i' will always takes for printing line in a pattern meanwhile it is a row.

int main()
{   //printing inverted half pyramid:
        //   way1:(by changing inner value)
     int a;
     cout<<"Enter the number "<<endl;
     cin>>a;
     for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
           cout<<"*";
       }
       cout<<endl;
    }

         //way2:(by changing outer value)
   
/*     int a;
   cout<<"Enter the number "<<endl;
   cin>>a;
   for(int i=a;i>=1;i--){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
*/
     
    return 0;
}
