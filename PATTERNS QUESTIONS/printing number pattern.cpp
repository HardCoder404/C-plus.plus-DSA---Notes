#include <iostream>

using namespace std;

int main()
{
     //Printing number pattern in half pyramid:
     
     int a;
     cout<<"Enter the number"<<endl;
     cin>>a;
     for(int i=1;i<=a;i++){
         for(int j=1;j<=i;j++){
             cout<<j<<" ";    // --> ye jo double inverted commas likha h na...wo do no.k bich m space dene k lie hota h method ayse.
         }
         cout<<endl;
     }


    //Printing the number in inverted case:

/*        int a;
     cout<<"Enter the number"<<endl;
     cin>>a;
     for(int i=a;i>=1;i--){
         for(int j=1;j<=i;j++){
             cout<<j<<" ";
         }
        cout<<endl;
     }
*/
    return 0;
}
