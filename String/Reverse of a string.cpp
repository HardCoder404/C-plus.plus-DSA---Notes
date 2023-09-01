#include<iostream>
#include<string.h>

using namespace std;
int main()
{
   /*  char str[100];                    --> this program will run in vs code, here it is not work.
    cout << "Enter a string: ";
    cin.get(str, 100);
    cout << "Reverse of the given string is: " << strrev(str);
    */   
    
    char str[]="Prince Raj";             //  --> this program will run here.
    int length=strlen(str);
    for(int i=length-1;i>=0;i--){
        cout<<str[i];
    }
    
    return 0;
}
