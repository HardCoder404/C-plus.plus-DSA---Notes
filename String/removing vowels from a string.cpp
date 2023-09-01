#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str;
    cout<<"Enter the string"<<endl;
   getline(cin,str);                                                  // way to input string in c++
   cout<<"your name after the removal of vowels"<<endl<<endl; 
    for(int i=0;i<str.length();i++){

      
        if(str[i]=='a'|| str[i]=='A'){
            continue;
        }
         else if(str[i]=='e'|| str[i]=='E'){
            continue;
        }
         else if(str[i]=='i'|| str[i]=='I'){
            continue;
        }
         else if(str[i]=='o'|| str[i]=='O'){
            continue;
        }
         else if(str[i]=='u'|| str[i]=='U'){
            continue;
        }
        else{
            cout<<str[i];
        }
    }

    return 0;
}

