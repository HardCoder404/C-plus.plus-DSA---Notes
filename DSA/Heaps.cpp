#include <iostream>
#include<bits/stdc++.h>
using namespace std;


//                                                       Insertion / Deletion in Heap                tc: O(logn) 
/*
class Heap{
  public: 
  int arr[100];              // starting me ek array bna lia...or size ko 0 se initialise krdia..
  int size;
  
    Heap(){
        arr[0]=-1;         // ye jaroori nahi h ...lekin chlo fir v krdia...
        size=0;
    }
    
    // function to insert 
    void insert(int val){
        // step1: put it at the end of the array 
        size=size+1;
        int index=size;
        arr[index]=val;
        
        // step2: take it to its right position 
        while(index>1){
           int parent=index/2;
           if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;                        // yha tumne index ko update krdia..mtlb ki ab index parent wale jahg pe point kr ra h 
          }
          else {
              // yanni aap sahi jagh pe khade ho..return karo jao 
            return ;
          }
       }    
    }
    
    // function to Delete 
    void Delete(){
        // base case 
        if(size==0){
           cout<<"Nothing to Delete"<<endl; 
           return;
        }
        
        // step1: replace last element to root element 
        arr[1]=arr[size];
        
        // step2: remove the last element 
        size--;
        
        // step3: take the root node to its correct position 
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            
            if(leftIndex<size&&arr[i]<arr[leftIndex]){            // it means left wla child bda h root node se 
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size&&arr[i]<arr[rightIndex]){      // it means right wala child bda h root node se
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{                                                // mtlb aap sahi position pe kahde ho 
                return;
            }
        }
    }
    
    
    // function to print the array 
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


//                                                heapify function :       O(logn) 
// ye function basically ye krega ki...agar koi array given hai...kisi v order me or usko ek heap me convert krna hai..phir chahe que bole
// ki max heap m kro convert ya min heap me,hum krdenge hume bas use convert krna hai heap me...by using this heapify algorithm....

void heapify(int arr[],int n,int i){
    // avi hum max heap ki baat kr re hai 
    int largest=i;
    int leftchild=2*i;
    int rightchild=2*i+1;
    
    if(leftchild<=n&&arr[largest]<arr[leftchild]){
        largest=leftchild;
    }
    if(rightchild<=n&&arr[largest]<arr[rightchild]){                            // <=n eslie kra qki..ye 1-baised Indexing hai...agar 0-baised Indexing hoti toh kewal <n likhte 
        largest=rightchild;
    }
    
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    
    
    
//   for Min.Heap 
    // int smallest=i;
    // int leftchild=2*i;
    // int rightchild=2*i+1;
    
    // if(leftchild<=n&&arr[smallest]>arr[leftchild]){
    //     smallest=leftchild;
    // }
    // if(rightchild<=n&&arr[smallest]>arr[rightchild]){
    //     smallest=rightchild;
    // }
    
    // if(smallest!=i){
    //     swap(arr[smallest],arr[i]);
    //     heapify(arr,n,smallest);
    // }
    
}

// NOTE: 0-baised Indexing :  mtlb ki.esme 0th wala index count hoga..uspe jo v element hoga use consider kia jayga...or es case me 
//                            left or rightchild nikalne ka formula v change hojyga.
//                            leftchild-- 2*i+1                 rightchild-- 2*i+2    (>= / <=)

//       1-baised Indexing : mtlb ki. esme 0th wlaa element cout nahi hoga...direct 1st wala index se element count hone start hojynge..
//                           or av tk hum 1-baised Indexing ka hi use kr re hai..or es case me leftchild or rightchild ka formula ye hoga:
//                           leftchild-- 2*i                    rightchild-- 2*i+1      (> / <)

// wse toh que.bta deta h apko kon sa baised Indexing use krna hai...lkn agar nahi bolta hai toh..1-baised Indexing hi use kro....



//                                      Heap Sort       tc: O(ologn)  
void Heapsort(int arr[],int n){
    int size=n;
    while(size>1){
        // step1: swap last element to root element 
        swap(arr[size],arr[1]);
        size--;
        
        // step2: call heapify funciton 
        heapify(arr,size,1);
    }
}

int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    cout<<"node inserted"<<endl;
    h.print();
    
    cout<<endl<<"node Deleted"<<endl;
    h.Delete();
    h.print();


    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    
    // heap creation 
    for(int i=n/2;i>0;i--){            // nOTE: agar 1-baised Indexing hogi toh n/2 ---> >0 tk jyga....or agar 0-baised Indexing hogi toh n/2-1 ---> >=0 tak jyga...          // ye humne n/2 q use kra? to agar ek bar vdo dekhloge toh acha rhega..love babbar wali lecture 74,wrna notebook m se samjh lo
        heapify(arr,n,i);
    }
    
    cout<<endl<<"Printing array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    // heap Sort 
    Heapsort(arr,n);
    cout<<endl<<"Printing sorted heap "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    cout<<endl<<"Using priority Queue here: "<<endl;
    // Max.Heap                        (by default) 
    priority_queue<int>pq;
    
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    
    cout<<"element at top : "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top after pop : "<<pq.top()<<endl;
    cout<<"size is : "<<pq.size()<<endl;
    if(pq.empty())
        cout<<"heap is empty"<<endl;
    else 
        cout<<"Heap is NOT empty"<<endl;
        
        
        
    cout<<endl<<"Min.Heap :"<<endl;    
    // Min.Heap 
    priority_queue<int,vector<int>,greater<int>>minHeap;              tc: O(1)  
    
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    
    cout<<"element at top : "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"element at top after pop : "<<minHeap.top()<<endl;
    cout<<"size is : "<<minHeap.size()<<endl;
    if(minHeap.empty())
        cout<<"heap is empty"<<endl;
    else 
        cout<<"Heap is NOT empty"<<endl;
    return 0;
}
*/










//                                                   Questions 
 
//                                            Kth Smallest Element              tc: O(n)  tc: O(k)
// (mtlb ki ek array given hoga...or ek K ki value,manlo k=3 hai..toh 3rd Smallest Element btana hai hme..mtlb 1st,2nd,3rd pe jo Smallest  ara hai..wo,,,ex. 3 2 5 4 ye ek array h manlo..to 1st Smallest 2 hai...2nd Smallest 3 hai,,or 3rd Smallest 4 hai ..toh 4 return krna h ans.me )

/*
int kthSmallest(int arr[],int l,int r,int k){              // l=starting index.      r=ending index
    priority_queue<int>pq;
    
    //step1: create a Max.Heap for the starting K Element 
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    
    //step2: for the rest Element,compare--element ko root node se..if small hota hai..then pop krdo phle then push krdo us element ko root pe
    for(int i=k;i<=r;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    // step3: pq k top pe jo value pdi hogi whi..ans hai 
    int ans=pq.top();
    return ans;
}

int main(){
    int arr[5]={7,10,4,20,15};
    
    int ans=kthSmallest(arr,0,4,4);                 
    cout<<"kthSmallest element is : "<<ans<<endl;
    return 0;
}
*/


// NOTE: yha pe aapne Max.heap ka use krk..kth smallest element nikal lia ....same esi trh min.heap ka use krk aap kth largest element nikal ssakte ho..










//                                      Is Given Binary Tree is heap or NOT / Valid heap or NOT
//  as we know for heap: 1. it should be CBT    2. It should follow heap order properties(max/min) 

class node{
  public: 
  int data;
  node*left;
  node*right;
  
  node(int d){
      this->data=d;
      this->left=NULL;
      this->right=NULL;
  }
};

int totalcount(node*root){
    //base case 
    if(root==NULL)
       return 0;
    
    int ans=1 + totalcount(root->left) + totalcount(root->right);
    return ans;
}

bool isCBT(node*root,int index,int cnt){
    if(root==NULL)
        return true;
    
    if(index>=cnt)                // bcz it is 0-baised Indexing that is why,,we use >=, agar 1-baised Indexing hota toh..direct > lgate
       return false;
    else {
        bool left=isCBT(root,2*i+1,cnt);
        bool right=isCBT(root,2*i+2,cnt);
        return (left&&right);
    }
}

bool isMax(node*root){
    if(root->right==NULL&&root->left==NULL)
       return true;
       
    if(root->right==NULL)
        return (root->data>root->left->data);
    else {
        bool left=isMax(root->left);
        bool right=isMax(root->right);
        
        return (left&&right&&(root->data>root->left->data&&root->data>root->right->data));
    }
}

bool isHeap(node*tree){
    int index=0;
    int totalcount=totalNodes(tree);
    
    if(isCBT(tree,index,totalcount) && isMax(tree))
        return true;
    else 
        return false;
}

int main(){
    node*root=NULL;
    // yha pe ab Binary tree wala logic likh do..input lene ka 
    return 0;
}

