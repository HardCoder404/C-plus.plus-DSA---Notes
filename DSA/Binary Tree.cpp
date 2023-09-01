#include <stdio.h>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

/*
class node{
  public: 
     int data;
     node*left;
     node*right;
     
    node(int d){                      // making constructor...
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    } 
};
node*buildTree(node*root){
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
// approach #2                     tc: O(N)   sc: O(N) 
vector<vector<int>>levelordertraversal(node*root){
    vector<vector<int>>ans;
    queue<node*>q;
    q.push(root);
    if(root==NULL)
       return ans;                           // return ans eslie kr re hai qki....hamara returntype vector<vect<int>> ans hai ..jo returntype hota h whi return krte h                  
    
    while(1){
    int size=q.size();
    if(size==0)
       return ans;
    
    vector<int>Data;
     while(size>0){
     node*temp=q.front();
     q.pop();
     Data.push_back(temp->data);
     
     if(temp->left!=NULL)
        q.push(temp->left);
    if(temp->right!=NULL)
        q.push(temp->right);
    size--;    
  }
   ans.push_back(Data);
    }
    return ans;
}

void inorder(node*root){
    //base case 
    if(root==NULL)
        return;
        
    // L N R  
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void PreOrder(node*root){
    //base case 
    if(root==NULL)
        return;
        
    // N L R   
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(node*root){
    //base case 
    if(root==NULL)
        return;
        
    // L R N 
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node*&root){
    queue<node*>q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        
        
        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node*root=NULL;
    
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 
    
    
    //creation a Tree 
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1       (esko ek sath copy krk..input m dal do..)
    // level Order 
    cout<<endl<<"level Order Traversal "<<endl;
    // approach #1
    levelOrderTraversal(root);
    
    // approach #2 
    // vector<vector<int>>ans=levelordertraversal(root);
    // for(auto i:ans){
    //     for(auto val:i){
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }
    
    cout<<"Inorder Traversal is : ";
    inorder(root);
    
    cout<<endl<<"PreOrder Traversal is : ";
    PreOrder(root);
    
    cout<<endl<<"PostOrder Traversal is : ";
    PostOrder(root);
    
    
    return 0;
}
*/





//                                               Questions : 





//                                                  Find the Height of a tree       time complexity: O(n)  space complexity: O(n) 
/*
class Node{
    public:
  int data;
  Node*left;
  Node*right;
  
  Node(int d){
      this->data=d;
      this->left=NULL;
      this->right=NULL;
  }
};

int Height(Node*node){
    // base case
    if(node==NULL)
       return 0;
       
    int right=Height(node->right);
    int left=Height(node->left);
    
    int ans=max(right,left)+1;
    return ans;
}
// tree build 
Node*buildTree(Node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node*root){
      
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   
   while(!q.empty()){
       Node*temp=q.front();
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
int main(){
    Node*root=NULL;
    // creation of tree    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);
    levelOrderTraversal(root);
    
    cout<<endl<<"Height of tree is : ";
    int ans=Height(root);
    cout<<ans;
    return 0;
}
*/







//                                             Diameter of a Binary Tree             time complexity: O(n^2) ,  space complexity O(Height of tree)
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

int Height(node*root){
    // base case 
    if(root==NULL)
      return 0;
      
    int left=Height(root->left);
    int right=Height(root->right);
    
    int ans=max(left,right)+1;
    return ans;
}

//                approach #1 

int Diameter(node*root){
    // base case 
    if(root==NULL)
       return 0;
       
    int op1=Diameter(root->left);
    int op2=Diameter(root->right);
    int op3=Height(root->left)+Height(root->right)+1;
    
    int ans=max(op1,max(op2,op3));
    return ans;
}

//              approach #2 

pair<int,int> Diameterfast(node*root){                // esme pahla wala int Diameter k lie h or dusra wala Height k lie...
    // base case 
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);                // hmne starting m dono m 0,0 bejh dia..agar node null hota h toh...
        return p;
    }
    
    pair<int,int>left=Diameterfast(root->left);                // yha left or right dono k lie call mari h 
    pair<int,int>right=Diameterfast(root->right);
    
    int op1=left.first;                                           // yha op1 m left ka Diameter store hogya
    int op2=right.first;                                          // or yha op2 m right ka Diameter store hogya
    int op3=left.second + right.second +1;                          // yha dono side ki..Height nikl gyi...
    
    pair<int,int>ans;             
    ans.first=max(op1,max(op2,op3));                              // yha humne ans..me dono ko store krwa lia...Diameter wale ko v or Height wale ko v
    ans.second=max(left.second,right.second) + 1;
    return ans;
}
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

int main(){
    node*root=NULL;
    // creation of tree    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);
    levelOrderTraversal(root);
    
    cout<<"Diameter of Tree with O(n^2) complexity is : ";
    int ans=Diameter(root);
    cout<<ans;cout<<endl;
    
    cout<<"Diameter of Tree with O(n) complexity is : ";
    int ans2=Diameterfast(root).first;                                         // yha humne .first eslie kra..qki.hume output me..Diameter dena tha...
    cout<<ans2;
}
*/








//                                             Check for balanced Tree 
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

int Height(node*root){
    // base case 
    if(root==NULL)
       return 0;
       
    int left=Height(root->left);
    int right=Height(root->right);
    
    int ans=max(left,right)+1;
    return ans;
}
//               approach #1              tc: O(n^2) sc: O(Height of tree)
      
bool isbalanced(node*root){
    // base case
    if(root==NULL)
       return true;
    
    bool left=isbalanced(root->left);
    bool right=isbalanced(root->right);
    
    bool ans=abs(Height(root->left)- Height(root->right)) <=1;
    
    if(left&&right&&ans)
        return true;
    else 
        return false;
}

//                 approach #2             tc: O(n)    sc: O() 

pair<bool,int> isbalancedfast(node*root){
    // base case 
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    
    pair<int,int>left=isbalancedfast(root->left);
    pair<int,int>right=isbalancedfast(root->right);
    
    bool leftans=left.first;
    bool rightans=right.first;
    
    bool ans=abs(left.second - right.second) <=1;
    
    pair<bool,int>Ans;
    Ans.second=max(left.second,right.second)+1;
    if(leftans&&rightans&&ans){
        Ans.first=true;
    }
    else{
        Ans.first=false;
    }
    return Ans;
}
// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

int main(){
    node*root=NULL;
    // creation of tree    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);
    levelOrderTraversal(root);
    
    if(isbalanced(root))
        cout<<endl<<"approach #1 tc: O(n^2) : balanced"<<endl;
    
    else cout<<"approach #1 tc: O(n^2) :not balanced"<<endl;
    
    
    if(isbalancedfast(root).first)
        cout<<endl<<"approach #2 tc: O(n) : balanced"<<endl;
        
    else cout<<"approach #2 tc: O(n) :not balanced"<<endl;
    
    return 0;
}
*/









//                                              Determine if two Trees are identical or not             tc: O(n)  sc: O(n) 
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

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

bool isIdentical(node*r1,node*r2){
    // base case
    if(r1==NULL&&r2==NULL)
       return true;
    if(r1==NULL&&r2!=NULL)
       return false;
    if(r1!=NULL&&r2==NULL)
       return false;
       
    bool left=isIdentical(r1->left,r2->left);
    bool right=isIdentical(r1->right,r2->right);
    
    bool value=r1->data==r2->data;
    
    if(left&&right&&value)
       return true;
    else 
       return false;
}

int main(){
    node*r1=NULL;
    node*r2=NULL;
    
    cout<<"buildTree for r1: "<<endl;
    // 1 2 -1 -1 3 -1 -1 
    r1=buildTree(r1);
    
    cout<<endl<<"buildTree for r2 : "<<endl;
    // 1 2 -1 -1 3 -1 -1
    r2=buildTree(r2);
    cout<<endl;
    
    levelOrderTraversal(r1);cout<<endl;
    levelOrderTraversal(r2);
    
    if(isIdentical(r1,r2))
        cout<<endl<<"identical"<<endl;
    else 
        cout<<endl<<"Not identical"<<endl;
    return 0;
}
*/








//                                                    Sum Tree                tc: O(n)   sc: O(Height of tree)
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

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

pair<bool,int>isSumTree(node*root){
    // base case 
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    // if leaf node 
    if(root->left==NULL&&root->right==NULL){
        pair<bool,int>p=make_pair(true,root->data);
        return p;
    }
    
    pair<bool,int> leftans=isSumTree(root->left);
    pair<bool,int> rightans=isSumTree(root->right);
    
    bool isleftSumTree=leftans.first;
    bool isrightSumTree=rightans.first;
    
    int leftsum=leftans.second;
    int rightsum=rightans.second;
    
    bool condn= root->data==leftsum + rightsum;
    
    pair<bool,int>ans;
    
    if(isrightSumTree&&isleftSumTree&&condn){
        ans.first=true;
        ans.second=root->data+leftsum+rightsum;
    }
    else {
        ans.first=false;
    }
    return ans;
}

int main(){
    node*root=NULL;
    // creation of tree    
    // 3 1 -1 -1 2 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);cout<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    if(isSumTree(root).first){
        cout<<"Yes , it is sum tree"<<endl;
    }
    else 
       cout<<"NO , it is not sum tree"<<endl;
    
    return 0;
}
*/












//                                                   Boundary Traversal            tc: O(n)   sc: O(n) 
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

void treverseLeft(node*root,vector<int>&ans){
    // base case 
    if((root==NULL) || (root->left==NULL&&root->right==NULL))
            return ;
            
    ans.push_back(root->data);
    if(root->left)
       treverseLeft(root->left,ans);
    else 
       treverseLeft(root->right,ans);
}

void treverseleaf(node*root,vector<int>&ans){
    // base case 
    if(root==NULL)
        return ;
    if(root->left==NULL&&root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    treverseleaf(root->left,ans);
    treverseleaf(root->right,ans);
}

void treverseRight(node*root,vector<int>&ans){
    // base case 
    if((root==NULL) || (root->left==NULL&&root->right==NULL))
        return ;
    
    if(root->right)
        treverseRight(root->right,ans);
    else 
        treverseRight(root->left,ans);
        
    // wapis aagye bhyie tum 
    ans.push_back(root->data);
}

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
vector<int>Boundary(node*root){
        vector<int>ans;
        if(root==NULL)
           return ans;
           
        ans.push_back(root->data);
        
        // left wale ko print kro 
        treverseLeft(root->left,ans);
        
        // leaf wale ko print kro 
           // left subtree
           treverseleaf(root->left,ans);
           // right subtree
           treverseleaf(root->right,ans);
           
        // right wale ko print kro 
        treverseRight(root->right,ans);
        
        return ans;
    } 
int main(){
    node*root=NULL;
    // creation of tree    
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);cout<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    
    cout<<"boundary of the tree is : ";
    vector<int>boundary=Boundary(root);
    for(auto num:boundary){
        cout<<num<<" ";
    }
    return 0;
}
*/







//                Mko av samjh ni ara koi sa v que.dekhen k baad v eslie bs que. name likh k chor dia takki bad m pta lege....

/*  imp. que                                        (one concept use in this all que. ie., Horizontal distance)
   Q. vertical view 
   1. top view 
   2. bottom view 
   3. left view 
   4. right view
   5. diagonal Traversal in Binary tree 
*/     









//                                    Sum of Longest Path in a tree             tc: O(n)     sc: O(n)
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

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void solve(node*root,int sum,int &maxsum,int len,int &maxlen){
    // base case 
    if(root==NULL){
        
        if(len>maxlen){
            maxlen=len;
            maxsum=sum;
        }
        else if(len==maxlen) {
            maxsum=max(sum,maxsum);
        }
        return;
    }
        sum=sum+root->data;
        
        solve(root->left,sum,maxsum,len+1,maxlen);
        solve(root->right,sum,maxsum,len+1,maxlen);
}

int SumOfLongestPath(node*root){
    int len=0;
    int maxlen=0;
    
    int sum=0; 
    int maxsum=INT_MIN;
    
    solve(root,sum,maxsum,len,maxlen);
    return maxsum;
}

int main(){
    node*root=NULL;
    // creation of tree    
    // 4 2 7 -1 -1 1 6 -1 -1 -1 5 2 -1 -1 3 -1 -1        (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);cout<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    
    int sum=SumOfLongestPath(root);
    cout<<"maxsum is : "<<sum;
    return 0;
}
*/










//                                          Lowest Ancestor in a Binary tree                   tc: O(n)  sc: O(height of tree)  
//                           ( mtlb ki upper jate jate jo sbse phle common node milega do given node me wo print krwana h)
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

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

node*lca(node*root,int n1,int n2){
    // base case 
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1|| root->data==n2){
       return root;
    }
    node*leftAns=lca(root->left,n1,n2);
    node*rightAns=lca(root->right,n1,n2);
    
    if(leftAns!=NULL&&rightAns!=NULL)
        return root;
    else if(leftAns!=NULL&&rightAns==NULL)
          return leftAns;
    else if(leftAns==NULL&&rightAns!=NULL)
          return rightAns;
    else 
        return NULL;
}

int main(){
    node*root=NULL;
    // creation of tree    
    // 1 2 -1 -1 3 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);cout<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    int n1=2,n2=3;
    node*ans=lca(root,n1,n2);
    
    //   if u do this---> cout<<ans;      Printing this node* directly will display its memory address, which will show you garbage values.
    // that is why we do below approach: 
    if (ans != NULL)
        cout << "Lowest Common Ancestor of " << n1 << " and " << n2 << " is: " << ans->data << endl;
    else
        cout << "One or both nodes not found in the tree." << endl;
    return 0;
}
*/












//                                              K sum path                      tc: O(n^2)      sc: O(H) 
//(mtlb ki k given hoga....hme bas ye btana h ki...pure tree me path ka sum us k ke equal h ki nahi..or return krwana hai total kitte path hai)
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

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void solve(node*root,int k,int &count,vector<int>path){
    // base case 
    if(root==NULL)
        return;
    
    path.push_back(root->data);
    
    // left call maro
    solve(root->left,k,count,path);
    // right call maro 
    solve(root->right,k,count,path);
    
    int sum=0;
    for(int i=path.size()-1;i>=0;i--){
        sum+=path[i];
        
        // checking condition that pathsum will equal to k or not 
        if(sum==k)
           count++;
    }
    // jab last m niche se upper wpis aare hoto..popback v krdo 
    path.pop_back();
}

int sumK(node*root,int k){
    vector<int>path;
    int count=0;
    solve(root,k,count,path);
    return count;
}
int main(){
    node*root=NULL;
    // creation of tree    
    // 1 2 -1 -1 3 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);cout<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    
    int k=3;
    int path=sumK(root,k);
    cout<<path;
    return 0;
}
*/











//                                          Kth Ancestor in a tree              tc: O(n)      sc:O(height of tree) 
//       (mtlb ki koi ek node di hogi given me...or tumehe ek k dia hoga,ab tumhe btana h ki us node se us k tk pe kon sa node h)
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

// tree represantation 
void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        
        // using Seperator 
        if(temp==NULL){     // it means purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty())     // means, queue still has some child node 
               q.push(NULL);
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

// tree build 
node*buildTree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
       return NULL;
       
    cout<<"Enter the data for left part "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for right part "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

node*solve(node*root,int &k,int Node){
    // base case 
    if(root==NULL)
       return NULL;
    
    if(root->data==Node)
       return root;
       
    node*leftAns=solve(root->left,k,Node);
    node*rightAns=solve(root->right,k,Node);
    
    if(leftAns!=NULL&&rightAns==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            // lock krdia ans. ko by doing INT_MAX
            return root;
        }
        return leftAns;
    }
    
    if(leftAns==NULL&&rightAns!=NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            // lock krdia ans. ko by doing INT_MAX
            return root;
        }
        return rightAns;
    }
    return NULL;
}

int kthAncestor(node*root,int k,int Node){
    node*ans=solve(root,k,Node);
    if(ans==NULL||ans->data==Node)
        return -1;
    else 
        return ans->data;
}

int main(){
     node*root=NULL;
    // creation of tree    
    // 1 2 -1 -1 3 -1 -1       (esko ek sath copy krk..input m dal do..)
    root=buildTree(root);cout<<endl;
    levelOrderTraversal(root);
    
    cout<<endl;
    
    int k=1;
    int node=3;
    
    int ans=kthAncestor(root,k,node);
    cout<<ans;
    
    return 0;
}
*/







// NOTE : there is one more Traversal ie.,  Morris Traversal 











