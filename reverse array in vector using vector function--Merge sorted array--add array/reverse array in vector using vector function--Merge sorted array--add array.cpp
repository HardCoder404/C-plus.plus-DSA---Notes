#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
vector<int> reverse(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    vector<int> ans=reverse(v);
    print(ans);
    
    return 0;
}
*/

//                                 Merge Two sorted array 
/*
void mergearray(int a1[],int n,int a2[],int m,int a3[]){
    
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a1[i]<a2[j]){
            a3[k++]=a1[i++];
        }
        else {
            a3[k++]=a2[j++];
        }
    }
    // copy krdo a1 k sare element a3 me 
    while(i<n){
        a3[k++]=a1[i++];
    }
    while(j<m){
        a3[k++]=a2[j++];
    }
}

void print(int a3[],int p){
    for(int i=0;i<p;i++){
        cout<<a3[i]<<" ";
    }
}

int main(){
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[8]={0};
    mergearray(a1,5,a2,3,a3);
    print(a3,8);
    
    return 0;
}
*/

/*
int main(){
   vector<int>a={-1,-100,3,99};
    rotate(a.begin(),a.begin()+2,a.end());
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}
*/



//                                 Add Two array

/*
vector<int> findarraySum(vector<int>&a,int n,vector<int>&b,int m){
    
       
    int i=n-1,j=m-1,carry=0;
    vector<int>ans;
   
   while(i>=0&&j>=0){
       int val1=a[i];
       int val2=b[j];
       
       int sum=val2+val1+carry;
       carry=sum/10;
       sum=sum%10;               // you can also write int value= in place of sum....because it is just a value...which we are just finding
       ans.push_back(sum);       // and if you writing value...then just pass the value...insetead of sum;
       i--;j--;
   }
   // first case: 
   while(i>=0){
     int  sum=a[i]+carry;
        carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
       i--;
   }
   // second case: 
   while(j>=0){
    int   sum=b[j]+carry;
        carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
       j--;
   }
    // Third case: 
   while(carry!=0){
     int  sum=carry;
        carry=sum/10;
       sum=sum%10;
       ans.push_back(sum);
   }
   reverse(ans.begin(),ans.end());
   return ans;
}


int main(){
    
    vector<int>a={1,2,3,4};
    vector<int>b={3};
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
     for(int i:b){
        cout<<"    + "<<i;
    }cout<<"\n"<<"_______"<<endl;

    vector<int>c=findarraySum(a,4,b,1);
    for(auto i:c){
        cout<<i<<" ";
    }
 
    return 0;
}
*/





 



