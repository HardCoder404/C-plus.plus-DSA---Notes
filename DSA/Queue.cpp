#include <iostream>
#include<bits/stdc++.h>
using namespace std;


//                                   Reverse an queue using queue             time complexity: O(n) , space complexity: O(n) 
/*
queue<int>rev(queue<int>q){
    stack<int>s;
    // step1: queue se element nikalo or stack me dalo
    while(!q.empty()){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    
    // step2: stack s element nikalo or queue m wapis dalo
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
{
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   print(q);
   cout<<endl;
   
   queue<int>ans=rev(q);
   print(ans);
return 0;
}
*/








//                                   Reverse first K element in Queue        time complexity: O(n) , space complexity: O(k)
/*
queue<int>ReverseK(queue<int>q,int k){
    //step1: pop first K element from Queue and put it into stack 
    stack<int>s;
    for(int i=0;i<k;i++){
        int val=q.front();
        q.pop();
        s.push(val);
    }
    
    //step2: now,take element from the stack and put into Queue
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q.push(val);
    }
    
    //step3: ab,(n-k)..n=q ka size... element ko uthao Queue me se..or piche se dal do...Queue me.
    int t=q.size()-k;
    while(t--){
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   print(q);
   cout<<endl;
   
   queue<int>ans=ReverseK(q,3);
   print(ans);
    return 0;
}
*/









//                                           First Non-reapting character in an stream 
/*
string FirstNonRepeating(string A){
    unordered_map<char,int>count;
    queue<int>q;
    string ans="";
    
    for(int i=0;i<A.length();i++){
        char ch=A[i];
        
        //increase the count 
        count[ch]++;
        
        //queue m dal do 
        q.push(ch);
        
        while(!q.empty()){
            if(count[q.front()]>1){
                //repeating character hai 
                q.pop();
            }
            else{
                //Non-reapting character hai 
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty())
        ans.push_back('#');
    }
    return ans;
}
int main(){
    
    string s="aabc";
    string ans=FirstNonRepeating(s);
    cout<<ans;
    return 0;
}
*/









// (imp)                                     Circular Tour                  time complexity : O(n)    space complexity : O(1)
/*
int tour(int petrol[],int distance[],int n){
    int deficit=0;
    int balance=0;
    int start=0;
    
    for(int i=0;i<n;i++){
        balance+=petrol[i]-distance[i];
        if(balance<0){
            deficit+=balance;
            start=i+1;
            balance=0;
        }
    }
    
    if(balance+deficit>=0)
        return start;
    
    else 
        return -1;
    
} 
int main(){
    int n;
    cin>>n;
    int petrol[n],distance[n];
    for(int i=0;i<n;i++){
        cin>>petrol[i]>>distance[i];
    }
    int ans=tour(petrol,distance,n);
    cout<<ans;
    
    return 0;
}
*/






//   Q.1  'k' stacks in an array 
//   Q.2  'k' Queue in an array 
//   Q.3   sum of max. and min. element of all subarrays of size k
//       (must do these three que.) 



