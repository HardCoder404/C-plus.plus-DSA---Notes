#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//                       Factorial of a Number 

/*
int Factorial(int n){
    //base case
    if(n==0)
        return 1;
    
    int chotti_problem=Factorial(n-1);
    int badi_problem=n*chotti_problem;
    return badi_problem;                         // return n*Factorial(n-1);   ye v likh sakte ho...agar ye likhte ho toh line 12,13 likhne ki jaroorat nahi...qki whi se ye formula laya h just by putting the value...
}

int main()
{
    int n;
    cin>>n;
    int ans=Factorial(n);
    cout<<ans<<endl;
    return 0;
}
*/




//                                       Power of 2 
/*
int Power(int n){
    //base case
    if(n==0)
        return 1;
        
        
    //     recursive relation    
    return 2*Power(n-1);                         
}

int main()
{
    int n;
    cin>>n;
    int ans=Power(n);
    cout<<ans<<endl;
    return 0;
}
*/




//                                 Print counting 
/*
void print(int n){
    // base case
    if(n==0)
        return ;
    
    cout<<n<<" ";
    print(n-1);                   // At this time: this is called tail recursion....but if we move this line above cout..then the Number will print in ascending order and then it is callled head recursion.
}
int main(){
    
    int n;
    cin>>n;
    print(n);
    return 0;
}
*/




//                                          Fibonnacy series
/*
int Fibonnacy(int n){
    // base case
    if(n==0)return 0;
    if(n==1)return 1;
    // recursive relation
    int result=Fibonnacy(n-1)+Fibonnacy(n-2);
    return result;
}
int main(){
    
    int n;
    cin>>n; 
    // int ans=Fibonnacy(n);
    // cout<<ans<<endl;                   //--> this will print only the Fibonnacy Number of that index which you pass in it.
    
    
    for(int i=0;i<n;i++){
        cout<<Fibonnacy(i)<<" ";            //--> this will print the Fibonnacy Number till the Number you pass in it.
    }
    return 0;
}
*/





//                       Say Digit ( mtlb ki hum kuch Number input denge compiler us Number ko english m bolega)
/*
void saydigit(int n,string arr[]){
    // base case
    if(n==0)return;
    
    //  processing
    int Digit=n%10;
    n=n/10;
    
    // recursive call
    saydigit(n,arr);
    
    cout<<arr[Digit]<<" ";
    
}

int main(){
    
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,arr);
    return 0;
}
*/




//                                    Binary Search In Recursion

/*
bool Binarysearch(int arr[],int size){
    // base case
    if(size==0||size==1)                      // it means ki...array already sorted hai...qki ya toh usme ek v element ni hai..ya phir...bas ek hi element hai
        return true;
        
        if(arr[0]>arr[1]){                   // yha maine check kr lia ki...agar pahala wala elemnt bda h dusre wale se to wo sorted ni hai....mtlb ki humne bas ek case check kr lia...baki Recursion bhaisaab sambhal lenge.
            return false;
        }
        else {
           bool remainingPart=Binarysearch(arr+1,size-1);         // yha Recursion bhaisaab n kha..ki bhai tumne already pahala wala to check kr hi lia h ...to ab tum agle wale elemnt s check kro...ki sorted h ki nahi....or agar tum ek element age s dekh re ho toh...mtlb ki size v ek kam hogi...islie...humne...arr+1,size-1 kra
           return remainingPart;
        }
    
}

int main(){
    
    int arr[]={1,2,3,4,5};
    int size=5;
    
    bool ans=Binarysearch(arr,size);
    if(ans){
        cout<<"sorted hai bhai"<<endl;
    }
    else {
        cout<<"na bhai sorted na hai..."<<endl;
    }
    return 0;
}
*/





//                          Array sum using Recursion
/*
int arraysum(int arr[],int size){
    // base case
    if(size==0)return 0;
    if(size==1)return arr[0];
    
    int reaminingpart=arraysum(arr+1,size-1);
    int ans=arr[0]+reaminingpart;
    return ans;
}


int main(){
    
    int arr[]={1,2,3,4,5};
    int size=5;
    
    int ans=arraysum(arr,size);
    cout<<"sum is : "<<ans<<endl;
    return 0;
}
*/




//                                           Linear Search to find a key element
/*
bool Linearsearch(int arr[],int size,int key){
    // base case
    if(size==0)return false;
    if(arr[0]==key)return true;
    else{
        bool reaminingpart=Linearsearch(arr+1,size-1,key);
        return reaminingpart;
    }
}

int main(){
    
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=3;
    bool ans=Linearsearch(arr,size,key);
    if(ans)
    {
        cout<<"present hai bhai number tera"<<endl;
    }
    else cout<<"absent h bhai..."<<endl;
    
    return 0;
}
*/




//                                   Binary Search to find a key element
/*
bool Binarysearch(int arr[],int s,int e,int key){
    // base case
    if(s>e)return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
       return Binarysearch(arr,s,mid-1,key);
    }
    else 
    {return Binarysearch(arr,mid+1,e,key);
    }
}

int main(){
    
    int arr[]={1,2,3,4,5,6};
    int size=5;
    int key=111;
    cout<<"Yes or NO --> "<<Binarysearch(arr,0,5,key);
    
    return 0;
}
*/



//                                First occurance or last occurance using Recursion
/*
int firstOcc(int arr[],int size,int s,int e,int key){
    // base case
   if(size==s)return -1;
   if(arr[s]==key)return s;
   return firstOcc(arr,size,s+1,e,key);
}
int lastOcc(int arr[],int size,int s,int e,int key){
    // base case
   if(size==e)return -1;
   if(arr[e]==key)return e;
   return lastOcc(arr,size,s,e-1,key);
}

int main(){
    
    int arr[8]={1,3,3,3,3,3,13,4};
    cout<<"first occurance of 3 at index : "<<firstOcc(arr,8,0,7,3)<<endl;

  cout<<"last occurance of 3 at index : "<<lastOcc(arr,8,0,7,3)<<endl;
    return 0;
}
*/



//                    Reverse a string using Recursion
/*
void reverse(string& str,int i,int j){    // here we are passing address so that copy na bane exact jo string aai h whi rhe...wrna phir reverse nahi hoga
    //base case
    if(i>j)return;
    swap(str[i],str[j]);
    i++;
    j--;
    
    // recursive call
    reverse(str,i,j);
}

int main(){
    
    string s="abcd";
    reverse(s,0,s.length()-1);
    
    cout<<s;
    return 0;
}
*/



//                            checking palidrome using Recursion
/*
bool palidrome(string str,int i,int j){
    // base case
    if(i>j)return true;                       // it means kii sare..condition true h ...bhia tu true return karwade
    if(str[i]!=str[j]){
       return false;
    }
    else return palidrome(str,i+1,j-1);
}

int main(){
    string s="abba";
  bool Ispalidrome=palidrome(s,0,s.length()-1);
   if(Ispalidrome)cout<<"yes";
   else cout<<"no";
    return 0;
}
*/





//                              Quick Sort using Recursion 
/*
int Partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
        cnt++;
    }
    // here arr[s] jo hai apne right positionn pe aagya h 
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    
    // here,,,we just make sure that...left part is less than pivotIndex and and right part is greater than pivotIndex
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex){      // see,,yha index ka comparision hora h pivotIndex k index se....
        while(arr[i]<=pivot){               // or yaha...elements ka comparision hora h pivotIndex k element se....SO dont get confused
        i++;}
        while(arr[j]>pivot)
        {j--;}
        if(i<pivotIndex&&j>pivotIndex)
    {    swap(arr[i++],arr[j--]);}
    }
    return pivotIndex;
}
void quicksort(int arr[],int s,int e){
    // base case
    if(s>=e){
    return;
    }
    // Partition kar do bhai
    int p=Partition(arr,s,e);
    
    // left wala part sort kardo bhai
    quicksort(arr,s,p-1);
    
    // right wala part sort kardo bhai
    quicksort(arr,p+1,e);
}

int main(){
    
    int arr[7]={3,5,1,8,2,0,3};
    int size = 7;
    
    // functioon call
    quicksort(arr,0,size-1);
    
    // printing array after sort
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
*/











