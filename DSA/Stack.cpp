#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//                                                         time complexity: O(1) ,space complexity : O(1);
/*
class Stack{
    //properties
    public: 
    int *arr;
    int top;    
    int size;
    
    //behavior 
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    
    
    void push(int element){
        //space khali h ya nahi..kaise pta lagaye.! ans.below,,,
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else {
            cout<<"Stack overflow!"<<endl;
        }
        
    }
    
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow!"<<endl;
        }
        
    }
    
    int peak(){
        if(top>=0&&top<size)
            return arr[top];
        else 
            cout<<"Stack is empty"<<endl;
            return -1;
    }
    
    bool isempty(){
        if(top==-1)
           return true;
        else 
           return false;
    }
    
    
};

int main()
{
    Stack st(5);    // ye size bta ra h..ki stack hamara kitne size ka hoga..
    st.push(22);
    st.push(23);
    st.push(45);
    st.push(55);
    st.push(67);
    st.push(88);       // yaha stack overflow hogya h ab..
    
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    
    if(st.isempty())
    cout<<"Stack is empty mere dost !"<<endl;
    else 
    cout<<"Stack is not empty mere dost !"<<endl;
    return 0;
}
*/








//                                      Reverse a String using Stack             time complexity : O(n)  ,  space complexity : O(n) 

// NOTE: It is the propertie of Stack that whatever we put in Stack it gives out in Reverse order.
/*
int main(){
    
    string str="Prince";
    
    stack<char>s;
    
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    
    string ans="";                          // empty string 
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans<<endl;
    return 0;
}
*/





//                                           Delete Middle element from stack
/*
void solve(stack<int>&inputstack,int count,int size){
    // base case 
    if(count==size/2){
        inputstack.pop();
        return; 
    }
    
    int num=inputstack.top();
    inputstack.pop();
    
    // Recursive Call
    solve(inputstack,count+1,size);
    
    inputstack.push(num);
}

void deleteMiddle(stack<int>&inputstack,int n){
    
    int count=0;
    solve(inputstack,count,n);
}

int main(){
    
    stack<int>inputstack;
    inputstack.push(12);
    inputstack.push(13);
    inputstack.push(14);
    inputstack.push(15);
    inputstack.push(16);
    
    deleteMiddle(inputstack,5);

    cout<<inputstack.top()<<endl;
    inputstack.pop();
    cout<<inputstack.top()<<endl;
    inputstack.pop();
    cout<<inputstack.top()<<endl;
    inputstack.pop();
    cout<<inputstack.top()<<endl;
    inputstack.pop();
    
    return 0;
}
*/








//                                Checking the given string has valid parenthesis       time complexity : O(n)   ,  space complexity : O(n) 
/*

// NOTE : bhyiaa...jab v mera closing bracket aayga...mere stack k top pe uska...opening bracket hona chyiee..tav..wo Balanced hoga..nahit oh nahi... 

bool isValidParenthesis(string expression){
    stack<char>s;
   for(int i=0;i<expression.length();i++){
       char ch=expression[i];
       
       // if opening bracket , stack push 
        if(ch=='('||ch=='['||ch=='{'){
            s.push(ch);
        }
        
       // if closing bracket , stacktop check and pop 
        else {
            // lets first check the condition ki..stack empty toh nahi hai...
            if(!s.empty()){
                char top=s.top();
                if(  ( ch==')'&&top=='(' ) || ( ch==']'&&top=='[' ) || ( ch=='}'&&top=='{' )   ){
                    s.pop();
                }
                else {
                    return false;
                }
            }
            // yani stack empty hai or closed parenthesis v hai usme 
            else{
                return false;
            }
            
        }
       
   }
   
   // agar end m stack empty h toh..bhyia Balanced h..nahi to nahi h Balanced...
   
   if(s.empty()) return true;
   else return false; 
}

int main(){
    
    string expression="{[()]}";
    
    if(isValidParenthesis(expression)){
        cout<<"Balanced"<<endl;
    }
    else cout<<"Not Balanced "<<endl;
    
    return 0;
}
*/








//                                        Insert an element to at its bottom in a Given stack         timme complexity : O(n) , space complexity : O(n)
/*
void solve(stack<int>&s,int x){
    // base case 
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int num=s.top();
    s.pop();
    
    // Recursive call 
    solve(s,x);
    s.push(num);
}

stack<int>pushAtBottom(stack<int>&mystack,int x){
    
    solve(mystack,x);
    return mystack;
}

int main(){
    
    stack<int>st;
    st.push(12);
    st.push(2);
    st.push(1);
    st.push(22);
    pushAtBottom(st,5);
    
   while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
*/






//                                  Reverse stack using Recursion          time complexity : O(n^2) , space complexity : O(n)
/*
void insertAtBottom(stack<int>&stack,int x){
     // base case 
    if(stack.empty()){
        stack.push(x);
        return;
    }
    
    int num=stack.top();
    stack.pop();
    
    // Recursive call 
    insertAtBottom(stack,x);
    stack.push(num);
}

void reverStack(stack<int>&stack){                      // note: pass stack by refernce 
    // base case
    if(stack.empty()){
        return;
    }
    
    int num=stack.top();
    stack.pop();
    
    // Recursive call
    reverStack(stack);
    
    insertAtBottom(stack,num);
}

int main(){
    
    stack<int>st;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    
    reverStack(st);
    
   while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}
*/







//                                           Sort a Stack                  time complexity : O(n^2) , space complexity : O(n) 
/*
void sortedInsert(stack<int>&stack,int num){
    // base case
    if(stack.empty()|| (!stack.empty()&&stack.top()>num)){
        stack.push(num);
        return; 
    }
    
    int n=stack.top();
    stack.pop();
    
    sortedInsert(stack,num);
    
    stack.push(n);
    
}

void sortStack(stack<int>&stack){                           // note: pass the stack by refernce 
    // base case 
    if(stack.empty()){
        return; 
    }
    
    int num=stack.top();
    stack.pop();
    
    // Recursive call
    sortStack(stack);
    
    sortedInsert(stack,num);    
}

int main(){
    
    stack<int>st;
    st.push(2);
    st.push(1);
    st.push(11);
    st.push(-1);
    
    sortStack(st);
    
     cout << "Sorted numbers are: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0; 
}
*/







//                                             Redundant bracket            time complexity : O(n) , space complexity : O(n) 

// Redundant bracket : a bracket which has no role in any equation. means wo bewajah m hi hai...
//                    example:- ((a+b)) ye Redundant hai..qki esme bahar wale braacket ka koi role ni hai...ase hi ahi..


/*
bool findRedundantBracket(string&s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            
            st.push(ch);
        }
        else {
            
            // ch ya toh ')' hai or lower case letter 
            if(ch==')'){
               bool isredundant=true; 
                while(st.top()!='('){
                    
                    char top=st.top();
                    if(top=='+'||top=='-'||top=='*'||top=='/'){
                        isredundant=false;
                    }
                    st.pop();
                }
                
                if(isredundant==true)
                    return true; 
                    st.pop();
            }
        }
    }
    return false;
}
int main(){
    
    string s="((a+b))";                         // enter a valid braackets  
    
    if(findRedundantBracket(s)){
        cout<<"Esme Redundant braacket hai bhai ye"<<endl;
    }
    else cout<<"Nah bhai nah hai..esme Redundant braacket"<<endl;
    
    return 0;
}
*/







//                                             Next Smaller Element             time complexity: O(n) 
/*
vector<int> nextSmallerElement(vector<int>& arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (!s.empty() && s.top() >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main() {
    vector<int> input = {5, 3, 1, 2, 6};
    vector<int> ans = nextSmallerElement(input, 5);

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
*/











//                                          Largest Rectangle in Histogram            time complexity: O(n)  , space complexity : O(n)  
/*
vector<int> nextSmallerElement(vector<int>& arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (!s.empty() && s.top()!=-1&& arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallerElement(vector<int>& arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i<n; i++) {
        int curr = arr[i];
        while (!s.empty() && s.top()!=-1&& arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int LargestRectangleArea(vector<int>&heights){
    int n=heights.size();
    vector<int>next(n);
    next=nextSmallerElement(heights,n);
    
    vector<int>prev(n);
    prev=prevSmallerElement(heights,n);
    int area=INT_MIN;
    
    for(int i=0;i<n;i++){
        int l=heights[i];
        
        if(next[i]==-1){
            next[i]=n;
        }
        int b=next[i]-prev[i]-1;
        int newArea=l*b;
        area=max(area,newArea);
    }
    return area;
}

int main(){
    vector<int> input = {2,1,5,6,2,3};
    int ans = LargestRectangleArea(input);

    cout<<ans;
    return 0;
}
*/




//  Q.1             celebraty Problem 
//  Q.2             Maximum Rectangle in Binary matrix with all 1's 
//  Q.3             N stacks in an array 
//  Q.4             Design special stack Problem 

//               (must do this four Problems)










