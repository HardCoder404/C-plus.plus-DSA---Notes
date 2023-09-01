#include <iostream>
using namespace std;


/*
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
         ans=ans*a;
    }
    return ans;
}
int main()
{  
   int result;
   for(int i=0;i<3;i++){
       result=power();
   cout<<result<<endl;
   }
    return 0;
}
*/


/*
// 1-> Even
// 0-> Odd
bool IsEven(int a){
    //Odd
    if(a&1){
        return 0;
    }
    else {
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    
    if(IsEven(n)){
        cout<<"Even"<<endl;
    }
    else cout<<"Odd"<<endl;
    return 0;
}
*/

/*
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(n-r)*factorial(r);
    return num/denom;
}
int main(){
    int n,r;
    cin>>n>>r;
    int c=nCr(n,r);
    cout<<c<<endl;
    
    return 0;
}
*/


/*
// 1 -> prime number
// 0 -> not a prime number
bool isPrime(int n){
    for(int i=2;i<n;i++){
        // divide hogya..mtlb not a prime number
        if(n%i==0){
            return 0;
        }
    }
        return 1;
}
int main(){
    int n;
    cin>>n;
    
    if(isPrime(n)){
        cout<<"Prime number"<<endl;
    }
    else cout<<"NOT a Prime number"<<endl;
    return 0;
}
*/

/*
#include <limits.h>                              // header file for...inllcuding INT_MIN, INT_MAX
int getMax(int arr[],int n){
    int maxi=INT_MIN;                               // must include before using below inbuilt function
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);                   // this is the inbuilt function for finding the Maximum value in an array.
    }
    return maxi;
}
int getMin(int arr[],int n){
    int mini=INT_MAX;                                    // must include
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);                    // this is the inbuilt function for finding the Minimum value in a array.
    }
    return mini;
}

int main(){
    int size;
    cin>>size;
    
    int arr[100];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"Maximum : "<<getMax(arr,size)<<endl;
   cout<<"Minimum : "<<getMin(arr,size)<<endl;

  return 0;
}
*/




/*
int arrSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int size; 
    cin>>size;
    
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum is "<<arrSum(arr,size)<<endl;
    return 0;
}
*/



/*
bool search (int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
return 0;
    
}


int main(){
    
    int key;
    cout<<"Enter the key you want to seaarch : "<<endl;
    cin>>key;
    
    int arr[5]={1,2,3,4,5};
    bool found=search(arr,5,key);
    
    if(found){
        cout<<"element is present"<<endl;
    }
    else cout<<"element is absent"<<endl;
    return 0;
}
*/



/*
void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);                                 // this is swap function and its declaration example
        start++;
        end--;
    }
}


int main(){
    
    int arr[6]={1,2,3,4,5,6};                      // even case
    int brr[5]={1,2,3,4,5};                        // odd case
    
    reverse(arr,6);
    reverse(brr,5);
    
    printArray(arr,6);
    printArray(brr,5);
    return 0;
    
}
*/


//              swaP alternate 
/*
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);            
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    swapAlternate(arr,5);
    swapAlternate(brr,6);
    return 0;
}
*/

//            finding unique element in an array.   (means.,,if do element do baar h array me or ek single element ek baar h toh use hi print krdo.)
/*
int main(){
    int n,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    return 0;
}
*/



//            finding one dublicate in an array
/*
int main(){
    int ans=0;    
    int arr[5]={1,2,2,3,4};
    // xor all the element
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    // xor from [1,n-1] 
    for(int i=1;i<5;i++){
        ans=ans^i;
    }
    cout<<ans<<endl;
    return 0;
}
*/

/*                  // finding all the dublicate in an array
int main(){
    int arr[5]={1,2,2,4,4};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j]==arr[i]){
                cout<<arr[i]<<" ";
            }
        }
    }
    
    return 0;
}
*/






/*                                                  Binary Search PROBLEM


int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    
    int mid=(start+end)/2;                     // use instead of this formula for to not stuck in TLE :   int mid= start + (end-start)/2; 
    
    while(start<=end){
        if(arr[mid]==key)
        return mid;        
    if(arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
    }
    return -1;

    
}

int main(){
    int evenArray[6]={1,2,3,4,5,6};
    int oddArray[5]={5,7,9,11,15};
    
    int evenindex=binarySearch(evenArray,6,6);
    int oddindex=binarySearch(oddArray,5,11);
    
    cout<<"index of 6 is : "<<evenindex<<endl;
    cout<<"index of 11 is : "<<oddindex<<endl;
    
    return 0;
}
*/

/*                                        fist and last occurance of an element in an array 

int firstOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid; 
            e=mid-1;                                // kuki....hume firstOccurance dekhna h islie hum piche jaare hai...
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid; 
            s=mid+1;                                           // kyuki...hme lastOccurance dekhna h islie hum aage jaare h...
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[8]={1,2,3,3,3,3,3,4};
    cout<<"first occurance of 3 at index : "<<firstOcc(arr,8,3)<<endl;

    cout<<"last occurance of 3 at index : "<<lastOcc(arr,8,3)<<endl;
    return 0;
}
*/


/*                                              total no.o of occurance of an element in array

int firstOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;                                         
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[18]={1,2,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4};
    cout<<"occurance of 3 is : "<<(lastOcc(arr,18,4)-firstOcc(arr,18,4))+1<<endl;
    return 0;
}
*/



/*                                          finding peak of mountain  
int mountainPeak(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
         mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    int arr[4]={0,2,1,0};
    cout<<"peak index is : "<<mountainPeak(arr,4)<<endl;
    return 0;
}
*/


//                                     find pivot in an array 

// pivot :  least element's index 

/*
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    
    return s;               // u can also return e;       output will be the same 
}



int main(){
    int arr[5]={3,8,10,17,1};                                           {17,1,3,8,10}  -> this is rotated array
    cout<<"PIVOT is at index : "<<pivot(arr,5)<<endl;
    
    return 0;
}
*/


//                                       finding the square root of a exact number( like...25,4,16,....)  using binarySearch 
/*
int binarySearch(int n){
    
  int  s=0;
  int  e=n;
   long long int mid=s+(e-s)/2;                   // we use here and some more below...long long because...suppose user enter a larger number which is out of the range of 32 bit..so it will show..some error...that iss why use long long.
   
 long long int ans=-1;
   while(s<=e){
      long long int square=mid*mid;           // samer reason for using long long
      if(square==n){                    // here we have to compare...square ko number se...not the mid se..
          return mid;
      }
      if(square<n){           // agar mid ka square kam aata h number se mtlb...ya to ans..whi hoga..ya phir..usk aage wale m se hoga...islei hum right part m move kkrenge islie humne...s ko uthake...aage kr dia.
          ans=mid;
          s=mid+1;
      }
      else{
          e=mid-1;             // third condition ye khati h ki..agar..squar>n tab..kya kro ki...e ko piche le aao..qki..agar mid ka square hi bda ara h num s to usk aage wale v sare bade hi honge..so is csase m hum piche move karenge.islie humne e ko uthake piche la dia.
      }
       mid=s+(e-s)/2; 
  }
    return ans;
}

int main(){
    
    int num;
    cin>>num;
    int squareroot=binarySearch(num);
    cout<<"squareroot of "<<num<<" is : "<<squareroot<<endl;
    
    return 0;
}
*/


//                           finding the squareroot of an number(odd : means jiska squareroot naa ho directly..ex..37,11,55...) using binarySearch 

/*
int intergersqrt(int n){
    
  int  s=0;
  int  e=n;
   long long int mid=s+(e-s)/2;                   // we use here and some more below...long long because...suppose user enter a larger number which is out of the range of 32 bit..so it will show..some error...that iss why use long long.
   
 long long int ans=-1;
   while(s<=e){
      long long int square=mid*mid;           // samer reason for using long long
      if(square==n){                    // here we have to compare...square ko number se...not the mid se..
          return mid;
      }
      if(square<n){           // agar mid ka square kam aata h number se mtlb...ya to ans..whi hoga..ya phir..usk aage wale m se hoga...islei hum right part m move kkrenge islie humne...s ko uthake...aage kr dia.
          ans=mid;
          s=mid+1;
      }
      else{
          e=mid-1;             // third condition ye khati h ki..agar..squar>n tab..kya kro ki...e ko piche le aao..qki..agar mid ka square hi bda ara h num s to usk aage wale v sare bade hi honge..so is csase m hum piche move karenge.islie humne e ko uthake piche la dia.
      }
       mid=s+(e-s)/2; 
  }
    return ans;
}

double moreprecise(int n,int precise,int tempsolution){            
    
    double factor=1;
    double ans=tempsolution;                          // esme ab upper jo humne interger square root niakala h wo h ab ans...me
    for(int i=0;i<precise;i++){
        factor = factor/10;                                  // is se kya hoga ki..wo har baar .1 plus hota jyga..(pahle .1 plus hoga..then .01 plus hoga...then .001 plus hoga..bas...qki humne 3 precise tak chalya h loop)
        for(double j=ans;j*j<n;j=j+factor){                 // or yaha har baar us interger wali value me...ye .1  .001  .01 plus hota rahga..
            ans=j;                                // or yyaha humne ans.ko update kr dia...
        }
    }
    return ans;
}

int main(){
    
    int num;
    cin>>num;
    int squareroot=intergersqrt(num);
    cout<<"squareroot of "<<num<<" is : "<<moreprecise(num,3,squareroot)<<endl;
    
    return 0;
}
*/

//                                           Book allocation problem using binarySearch 

/*

bool ispossible(int arr[],int n,int m,int mid){
    int studentcount =1;
    int pagesum=0;
    
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}


int main(){
    
   int arr[100],n,m;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;           // n = number of books in an array    m= number of student 
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){  // solution exist and store mid value in ans.. nd move to left part;
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
    cout<<endl<<"The minimum value...for the max. pages allocated : "<<ans<<endl;
}
    return 0;
}
*/


