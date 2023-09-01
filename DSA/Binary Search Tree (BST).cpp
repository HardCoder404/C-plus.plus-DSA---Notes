#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//                                              Creating BST                     tc,sc: O(logn)          but for skew tree its tc: O(n)
/*
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

void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

node*minVal(node*root){
    node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;                       // hum yaha left left q lejare hai...qki...hme pta h kisi v bst m smallest element left part m hi hota hai..
    }
    return temp;
}
node*maxVal(node*root){
    node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;                       // hum yaha right right q lejare hai...qki...hme pta h kisi v bst m highest element right part m hi hota hai..
    }
    return temp;
}

node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

node*deleteFromBST(node*root,int val){
    // base case 
    if(root==NULL)
    
        return root;
    
    if(root->data==val){
       // 0 child
        if(root->right==NULL&&root->left==NULL){
            delete root;
            return NULL;
        }
        
       // 1 child 
        // left child 
           if(root->left!=NULL&&root->right==NULL){
           node*temp=root->left;
           delete root;
           return temp;
           }
           
        // right child
           if(root->left==NULL&&root->right!=NULL){
           node*temp=root->right;
           delete root;
           return temp;
           }
       
       // 2 child 
        if(root->right!=NULL&&root->left!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        // left part me jaao 
        root->left=deleteFromBST(root->left,val);
    }
    else {
        // right part me jaao 
        root->right=deleteFromBST(root->right,val);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}

int main()
{
    node*root=NULL;
   
    cout<<"Enter data to crete BST : "<<endl; 
    //  10 8 21 7 27 5 4 3 -1
    takeInput(root);
   
    levelOrderTraversal(root);   
    
    cout<<"minVal is : "<<minVal(root)->data<<endl;
    cout<<"minVal is : "<<maxVal(root)->data<<endl;
    
    root=deleteFromBST(root,30);
    // 50 20 70 10 30 90 110 -1
    cout<<endl<<"After deletion : "<<endl;
    levelOrderTraversal(root);
    
    return 0;
}
*/











//       Question: 
//                                               Search in BST                  tc,sc: O(logn)          but for skewtree its tc:O(n)
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

// approach #1         (recursive way)
// bool SearchInBst(node*root,int x){
//     // base case 
//     if(root==NULL)
//         false;
//     if(root->data==x)
//         true;
    
//     if(root->data>x){
//         // mtlb left me jana hai 
//         return SearchInBst(root->left,x);
//     }
//     else {
//         // right part m jana hai 
//         return SearchInBst(root->right,x);
//     }
// }

// approach #2           (iterative way)
bool SearchInBst(node*root,int x){
    node*temp=root;
    while(temp!=NULL){
        if(temp->data==x)
            return true;
        
        if(temp->data>x)
            temp=temp->left;
        else 
            temp=temp->right;
    }
    return false;
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 10 8 21 7 27 5 4 3 -1
    levelOrderTraversal(root);
    
    int x=7;
    if(SearchInBst(root,x))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}
*/







// NOTE: agar kisi v binary search tree ka inorder nikalte hoto wo....sorted order me dega output 
// NOTE: What is Predecessor and Successor : When you do the inorder traversal of a binary tree, 
// the neighbors of given node are called Predecessor(the node lies behind of given node) and Successor (the node lies ahead of given node).

 
 
 
 
 
 
 
 
 //                                          is Valid BST or NOT           tc: O(N)     sc: O(logn)  and for skew binary tree,   SC: O(N)
/*
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
node*buildTree(node*root){            // hmne ye wla funtion eslie likah qki..hme tree input lena hai..apne hisab se...eslei 
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
        return NULL;
        
    cout<<"Enter data for inserting in left : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right : "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}
// approach #1 : tum pahle uska inorder Traversal niakl lo..or phir check kro ki kya wo Traversal sorted order me hai..agar hai toh
//               tumhara tree valid bst hai otherwise nahi.  (bcz,in bst inorder Traversal hmesa sorted order m aata hai)

// approach #2 
bool isBST(node*root,int min,int max){
    // base case 
    if(root==NULL)
        return true; 
    
    if(root->data>=min&&root->data<=max){
        bool left=isBST(root->left,min,root->data);
        bool right=isBST(root->right,root->data,max);
        return left&&right;
    }    
    else 
        return false;
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    root=buildTree(root);
    // 10 8 21 7 27 5 4 3 -1
    levelOrderTraversal(root);
    
    if(isBST(root,INT_MIN,INT_MAX))
        cout<<"YES"<<endl;
    else  
        cout<<"NO"<<endl;
    return 0;
}
*/ 
 
 
 








//                                          Kth smallest element in BST                  tc: O(N)            sc: O(H) 
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

int kthSmallest(node*root,int &i,int k){
    // base case 
    if(root == NULL)
        return -1;
    
    //L 
    int left=kthSmallest(root->left,i,k);
    
    if(left!=-1)
       return left;
    
    //N 
    i++;
    if(i==k)
        return root->data;
        
    //R
    return kthSmallest(root->right,i,k);
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 10 8 21 7 27 5 4 3 -1
    levelOrderTraversal(root);
    
    int i=0;
    int ans=kthSmallest(root,i,5);
    cout<<endl<<"Kth smallest element is : "<<ans;
    return 0;
}
*/


// NOTE: for kth largest element in bst que. just simply replace-----> kth smallest element to (n-k)+1 th smallest element ; n=element












//                                           Predecessor and Successor in BST              tc : O(n)        sc : O(1)
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

pair<int,int>PredecessorSuccessor(node*root,int key){
    node*temp=root;
    int pred=-1;
    int succ=-1;
    
    // find key 
    while(temp->data!=key){
        if(temp->data>key){
            // do case ho sakte hai : 1. left part me jana hai 2. ek possible Successor ho skta hai...jis node pe khade ho 
            succ=temp->data;
            temp=temp->left;
        }
        else {
            // yha v do case bante hai : 1. right part me jaao 2. ek possible Predecessor ho sakta hai ...jis node pe khade ho 
            pred=temp->data;
            temp=temp->right;
        }
    }
    
    // find pred and succ 
    
    //1. Predecessor kaise milega? jo left part me sabse maximum element hoga whi Predecessor hoga.
    //2. Successor kaise milega? jo right part me sabse minimum element hoga whi Successor hoga.
    
    // Predecessor : 
    node*leftTree=temp->left;
    while(leftTree!=NULL){
        pred=leftTree->data;
        leftTree=leftTree->right;
    }
    // Successor : 
    node*rightTree=temp->right;
    while(rightTree!=NULL){
        succ=rightTree->data;
        rightTree=rightTree->left;
    }
    
    // ab hume pred and succ mil chuka hai ..bas ab use return karwana hai 
    pair<int,int>ans=make_pair(pred,succ);
    return ans;                                  //tum pair n bna k direct return {pred,succ}; ye v likh dete to chal jata code 
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 10 8 21 7 27 5 4 3 -1
    levelOrderTraversal(root);
    
    int key=4;
    pair<int,int>ans=PredecessorSuccessor(root,key);             // pair wale funtion ko hum dot first or dot second krk print krwate hai 
    cout<<"Predecessor and Successor of element "<<key<<" is : "<<endl;
    cout << "Predecessor: " << ans.first << endl;
    cout << "Successor: " << ans.second << endl;
    return 0;
}
*/













//                                         LCA(lowest Common Ancestor) in BST 
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

// approach #1 :                    tc: o(n) sc: O(H)  recursive way 
node*LCAinBST(node*root,node*P,node*Q){
    // base case 
    if(root==NULL)
      return NULL;
      
    if(root->data<P->data&&root->data<Q->data)        // right part m jana hai 
      return LCAinBST(root->right,P,Q);
       
    if(root->data>P->data&&root->data>Q->data)        // left part m jana hai 
      return LCAinBST(root->left,P,Q);
    
    return root;
}

// approach #2 :                    tc: O(N)   sc: O(1) iterative way 
// node*LCAinBST(node*root,node*P,node*Q){
    
//     while(root!=NULL){
//          if(root->data<P->data&&root->data<Q->data)        // right part m jana hai 
//           root=root->right;
         
//           else if(root->data>P->data&&root->data>Q->data)        // left part m jana hai 
//           root = root->left;
           
//           else {
//               return root;
//           }
            
//     }
// }

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 2 1 4 3 -1
    levelOrderTraversal(root);
    
    node*P=root->left;
    node*Q=root->right->left;
    node*ans=LCAinBST(root,P,Q);
    cout<<endl<<"lowest Common Ancestor of node "<<P->data<<" and node "<<Q->data<<" is : "<<ans->data;
    return 0;
}
*/












//                                              Two sum in BST                  tc: O(N)   sc: O(N) 
//(eska mtlb h ki...manlo target value given h....ab hme y dekhna h ki kya bst m asa koi pair exists krta hia..jiska sum target value k barabar aara ho...agar ara h toh true return krwao...else false)
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

void inorder(node*root,vector<int>&in){               // yha by reference k sath jaroor bejhna ...wrna data lost hojyga or wrong output dega
    // base case 
    if(root==NULL)
       return;
       
    // L N R 
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

bool TwosumInBST(node*root,int target){
    vector<int>inorderVal;
    // store inorder -->sorted value
    inorder(root,inorderVal);
    
    // using two pointer approach  if pair exists or not : 
    int i=0,j=inorderVal.size()-1;
    
    while(i<j){
        int sum=inorderVal[i]+inorderVal[j];
        if(sum==target){
            cout<<"pair is : "<<inorderVal[i]<<" "<<inorderVal[j]<<endl;
            return true;
        }    
        else if(sum>target)
           j--;
        else 
           i++;
    }
    return false;
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 10 6 2 8 12 11 15 -1
    levelOrderTraversal(root);
    
    int target=20;
    if(TwosumInBST(root,target))
       cout<<"YES,pair exists"<<endl;
    else 
       cout<<"NO,pair not exists"<<endl;
       
    return 0;
}
*/











//                                        Flatten BST to a sorted list              tc: O(N)      sc: O(N) 
// (eska mtlb h ki...ek bst h usko sorted order m likho then use as a linke list trh treat krwao means ki..us order ka frist element ka left null ko pointer krwa ra ho..or right next element ko...same agla v..uska left null or right wala age wle ko or..at the end..wale element ka..left or right dono hi NULL pointer karwao)
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

void inorder(node*root,vector<int>&in){               // yha by reference k sath jaroor bejhna ...wrna data lost hojyga or wrong output dega
    // base case 
    if(root==NULL)
       return;
       
    // L N R 
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

void printLinkedList(node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->right;
    }
    cout << endl;
}

node*FlattenInBst(node*root){
    vector<int>inorderVal;
    // store sorted value 
    inorder(root,inorderVal);
    int n=inorderVal.size()-1;
    
    node*newNode=new node(inorderVal[0]);         // ek nyi node bna di jo ki...starting element ko store kr rkha hai
    node*curr=newNode;                        // av curr starting element ko point kr ra h 
    
    // 2nd step :                   // esme i ko aage badhate jare hai...or left right ko set kr re h...
    for(int i=1;i<n;i++){
        node*temp=new node(inorderVal[i]);
        curr->left=NULL; 
        curr->right=temp;       // curr ka right next element ko point kr ra h 
        curr=temp;              // ab curr aage badh chuka hai 
    }
    // 3rd step:          mtlb ab last wale element pe pahuch chuke hai..or usk left or right donooo ko NULL krna h
    curr->left=NULL;
    curr->right=NULL;
    
    return newNode;
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 10 6 2 8 12 11 15 -1
    levelOrderTraversal(root);
    
    node*ans=FlattenInBst(root);
    cout<<endl<<"FlattenInBst into Linked List is : ";
    printLinkedList(ans);
    
    return 0;
}
*/














//                                            Normal Bst to Balanced Bst                tc: O(N)   sc: O(N)  

//(mtlb ki...ek asa tree bnao jiska..left part of each node nd right part of each node kaa difference <=1 aaye mtlb ki..simple yr..jasa left part hai wsa hi right part bna do )
/* approach: 
   
   step1: sabse pahle inorder niakal lo...bhyia
   step2: ab mid nikal lo us inorder ka...
   step3: bhyia ab...ek tree bna do mid wala root node hoga..or uske left wle part me jitene element left part m honge wo dal jynge...
        hum nahi jante kaise dalenge...wo recursion sambhal lenga...or right wale part me right element dal do...
        bas aagay ans...

Bhyaia...hum mid q nikal kre hai....are bhai..mid nikal loge..toh left or right part toh already Balanced hojygana...logic socho...jsa 
5 element hai...ab mid aagya 3rd element tooh....ab 3rd ke left m 2 element honge or same 3rd k right m v 2 element honge..toh ban gya na
Balanced bst.whi krna hai..apne ko...
*/

// input : any BST dal do Balanced ho ya na ho...
// output : always Balanced bst dega 

/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

void inorder(node*root,vector<int>&in){               // yha by reference k sath jaroor bejhna ...wrna data lost hojyga or wrong output dega
    // base case 
    if(root==NULL)
       return;
       
    // L N R 
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
void inordertraversal(node*root){              
    // base case 
    if(root==NULL)
       return;
       
    // L N R 
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

node*inorderToBst(int s,int e,vector<int>in){
    // base case 
    if(s>e)
       return NULL;
    
    int mid=s+(e-s)/2;
    // recursive call
    node*root=new node(in[mid]);
    root->left=inorderToBst(s,mid-1,in);
    root->right=inorderToBst(mid+1,e,in);
    return root;
}


node*BalancedBst(node*root){
    vector<int>inorderVal;
    // store inorderValues
    inorder(root,inorderVal);
    
    return inorderToBst(0,inorderVal.size()-1,inorderVal);
}

int main(){
    node*root=NULL;
    cout<<"Enter the data into BST: "<<endl;
    takeInput(root);
    // 1 2 3 4 -1
    levelOrderTraversal(root);
    
    node*Balancedroot=BalancedBst(root);
    cout<<endl;
    inordertraversal(Balancedroot);
    cout<<endl<<"Balanced BST is : "<<endl;
    levelOrderTraversal(Balancedroot);
    return 0;
}
*/












//                                                  BST from PreOrder            tc: O(N)     sc: O(N)
// (mtlb ki input me apko ek PreOrder given hoga...us se aapko ek BST create krni hai...)
// approach: 
//  same wo jo apne upper kra tha na...ek Valid BST krk....usme jo approach lagaya tha na...(-infinity,infinity) asa ,,wsa hi krna hai...
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

node*solve(vector<int>&PreOrder,int mini,int maxi,int &i){
    // base case 
    if(i>=PreOrder.size() || (PreOrder[i]<mini||PreOrder[i]>maxi))
        return NULL;
        
    node*root=new node(PreOrder[i++]);
    // recursive call mar do 
    root->left=solve(PreOrder,mini,root->data,i);
    root->right=solve(PreOrder,root->data,maxi,i);
    return root;
}

node*PreOrderToBST(vector<int>&PreOrder){
    int mini=INT_MIN;
    int maxi=INT_MAX;
    int i=0;
    return solve(PreOrder,mini,maxi,i);
}

void inordertraversal(node*root){              
    // base case 
    if(root==NULL)
       return;
       
    // L N R 
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

int main(){
    vector<int>PreOrderVal={20,10,5,15,13,35,30,42};
    // 20 10 5 15 13 35 30 42                                                  // yha maine PreOrder element dale hai 
    
    node*PreOrder=PreOrderToBST(PreOrderVal);
    cout<<"ban gya bhai BST :";
    inordertraversal(PreOrder);
    cout<<endl<<"BST from PreOrder : "<<endl<<endl;
    levelOrderTraversal(PreOrder);
    return 0;
}
*/













// IMP. Question with 6que. include in it...apne aap me hi....

//                                    Merge 2 binary search tree 
/*
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
node*insertIntoBst(node*root,int d){
    // base case 
    if(root==NULL){
       root=new node(d);
       return root;
    }
    if(d>root->data){
        // right wale part me insert krna  hai 
        root->right=insertIntoBst(root->right,d);
    }
    else{
        // left walle part me inser krna  hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(node*&root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
// approach #1                    tc: O(N)         sc: (N)
void levelOrderTraversal(node*root){
      
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       node*temp=q.front();
       q.pop();
    
       
       // Seperator hua hora hai..yha  
       
       if(temp==NULL){   // purana level complete Traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){  // queue still has some child node
               q.push(NULL);
           }
       }
       else {
      cout<<temp->data<<" ";
       if(temp->left) 
           q.push(temp->left);
           
        if(temp->right) 
           q.push(temp->right);   
       }
       
   }
}

void inorder(node*root,vector<int>&in){
    // base case 
    if(root==NULL)
       return;
       
    // L N R  
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

vector<int>MergeArray(vector<int>&a,vector<int>&b){
    vector<int>ans(a.size()+b.size());
    
    int i=0,j=0;
    int k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
           ans[k++]=a[i];
           i++;
        }
        else {
            ans[k++]=b[j];
            j++;
        }
    }
    
    while(i<a.size()){
        ans[k++]=a[i];
           i++;
    }
    while(j<b.size()){
        ans[k++]=b[j];
            j++;
    }
    return ans;
}

node*inorderToBst(int s,int e,vector<int>&in){
    // base case 
    if(s>e)
       return NULL;
    
    int mid=(s+e)/2;
    // recursive call
    node*root=new node(in[mid]);
    root->left=inorderToBst(s,mid-1,in);
    root->right=inorderToBst(mid+1,e,in);
    return root;
}


//  Q. convert bst into DLL(doubly Linked list) 
node* BSTtosortedDLL(node*root,node*&head){
    // base case 
    if(root==NULL)
        return NULL;
    
    // right call   
    BSTtosortedDLL(root->right,head);
    
    root->right=head;
    if(head!=NULL){
       head->left=root;
    } 
    head=root;
    
    // left call 
    BSTtosortedDLL(root->left,head);
}

// Q. Merge 2 sorted Linked list 
node*MergeLinkedList(node*head1,node*head2){
    node*head=NULL;
    node*tail=NULL;
    
    while(head1!=NULL&&head2!=NULL){
        
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
            
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
        }
        
    }
    
    while(head1!=NULL){
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
    }
    while(head2!=NULL){
                 tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
    }
    return head;
}

// Q. sorted Linked List --> BST
int countNodes(node*head){
    int cnt=0;
    node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->right;
    }
    return cnt;
}
node*sortedLLtoBST(node*&head,int n){
    // base case 
    if(n<=0||head==NULL)
       return NULL;
       
    node*leftsubtree=sortedLLtoBST(head,n/2);
    node*root=head;
    root->left=leftsubtree;
    head=head->right;
    root->right=sortedLLtoBST(head,n-n/2-1);
    return root;
}

node*MergeBst(node*root1,node*root2){
    /*
    // approach #1 :     tc: O(m+n)    sc: O(m+n)
    
    // step1: store inorder 
    vector<int>bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);
    
    // step2: Merge these two sorted arrays(vector wala)
    vector<int>MergedArrays=MergeArray(bst1,bst2);
    
    // step3: inordertoBst  for sorted array  call!
    int s=0,e=MergedArrays.size()-1;
    return inorderToBst(s,e,MergedArrays);
    */
    
    
    
    // approach #2 :     tc: O(m+n)    sc: O(h1,h2) 
    
/* algo.2:
   step1: convert bst into sorted Linked List 
   step2: Merged 2 sorted Linked list 
   step3: convert sorted Linked list ---> BST 
*/
    // step1: convert bst into sorted Linked List 
/*    node*head1=NULL;
    BSTtosortedDLL(root1,head1);
    head1->left=NULL;
    
    node*head2=NULL;
    BSTtosortedDLL(root2,head2);
    head2->left=NULL;
    
    
    // step2: Merged 2 sorted Linked list 
    node*head=MergeLinkedList(head1,head2);
    
    // step3: convert sorted Linked list ---> BST
    return sortedLLtoBST(head,countNodes(head));
    
}




int main(){
    node*root1=NULL;
    node*root2=NULL;
    cout<<"Enter the data into BST for root1 : "<<endl;
    takeInput(root1);
    // 2 1 3 -1
    levelOrderTraversal(root1);
    
    cout<<endl<<"Enter the data into BST for root2 : "<<endl;
    takeInput(root2);
    // 4 -1
    levelOrderTraversal(root2);
    
    cout<<endl<<"MergeBst is : "<<endl;
    node*ans=MergeBst(root1,root2);
    levelOrderTraversal(ans);
    return 0;
}
*/



// NOTE : Largest BST in Bianry Tree ---> ye ek last que hai...BST ka ese ek bar dekh lena...ess time to mujhe samjh nahi aya...eslie nahi kra..


