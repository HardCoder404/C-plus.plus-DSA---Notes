#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*                                                    singly linked list
//                     *-> jisme ek hi pointer hota h or ek hi data hota h ek node k andar..or wo ek hi direction m jate h ..that is called singly linked list.

class Node{
  
  public: 
    int data;
    Node*next;                           // here wee declare a pointer of node type
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      // yha humne next address ko null s point krwa dia.
    }
    
    // destructor
    ~Node(){
        int value=this->data;
        // code to free memory
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for Node with data : "<<value<<endl;
    }
};

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;                                  // or ess trh s hum kisi v node ko starting m add krwadete h    // yha humne jo av new node bnya..uske pointer ko head k pointer s point krwa dia
    head=temp;                                          // ess line m ab head esss wale node ko point kr ra h starting me
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    // ess trah s hum koi v node ko last me add krdete hai
}

void insertAtPosition(Node*&tail,Node*&head,int position,int d){
 
   // inserting at Starting position
   if(position==1){                             
       insertAtHead(head,d);
       return;
   }
   
    Node*temp=head;                                             // starting me temp head ko point kr ra h ..
    int cnt=1;
    // transverse in linked list
    while(cnt<position-1){                                   // ye humne islie likha h qki....hum jis position pe jaare h us s phle hume dalnaa h an...manlo ki jaise hume 3rd position pe dala h element  toh hum 2nd linked list tk jynge..islie (position-1) kra h 
        temp=temp->next;
        cnt++;
    }
    
    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    
    // creation of new Node
    Node*nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;                         // eska mtlb h ..ki jo nya node bnya h wo..ab bich m aagya h or wo...agle wale ko point krwa ra h joki..phle...pichla wala node use point kr ra tha...
    temp->next=nodeToInsert;                                // eska mtlb h ..ki jo pichla wala node h wo ab ye jo nya wala node h use..point kr ra h...or nya wala agle wale ko.
}

void deleteNode(int position,Node*&head){
    // deleting starting Node(esko alg s handle kra h humne,qki isme prev Node null hota h )
    if(position==1){
        Node*temp=head;
        head=head->next;
        // memory free karwwa di..first node ki(ese destructor k dwara manually free krwani pddegi)
        temp->next=NULL;
        delete temp;  
    }
    else {
        //deleting middle and last Node
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
// transverse in linked list to print data
void print(Node*&head){                // here we pass as an by reference so that...copy na bane               yha hum sirf head bejh re h...qki humne data print krana h 
    Node*temp=head;                    // yaha humne usi...head ko ek or pointer se point krwa lia taki...us node m koi change na aai bad me...
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                // after printing the data of first node ....hum aage wale node pe jaare h..is line ka ye matlab hai
    }
    cout<<endl;
}
int main()
{
    Node*Node1=new Node(10);                                      // humne heap me memory allocate karwai h linked list k lie.
    cout<<Node1->data<<endl;                                      // yha humne...arrow operator ka use islie kia qki...ye pointer hai..
    cout<<Node1->next<<endl;
   
    Node*head=Node1;                                                // yha humne ek head pointer banwa dia...joki..starting m node1 ko point kr ra h..
    Node*tail=Node1;
    
    print(head);
    
    insertAtHead(head,12);                               // dekho ise...humne comment krk..islie chalaya h qki..hum starting m pass by reference kia h toh iseme...jo change hoga..wo phir aage v reflect krega...islie...head wale ko comment krk..tail wala chalaya h...ni toh wrong output aajyga..
    print(head);
    
    insertAtTail(tail,12);
    print(head);
    
    insertAtHead(head,15);
    print(head);
    
    insertAtTail(tail,15);
    print(head);
    
    insertAtPosition(tail,head,4,22);
    print(head);
    
    // these both are just to verify : head,tail
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    deleteNode(4,head);
    print(head);
    return 0;
}
*/



//                                       Doubly linked list 
//                 /        *-> jisme teen chize hoti h ek ..toh previous pointer ka address ek data or ek next pointer ka address...ek hi node me....and these are bidirecitonal ....that is called Doubly linked list.
/*
class Node{
    
  public: 
  int data;
  Node*prev;
  Node*next;
  
  // constructor 
  Node(int d){
      this->data=d;
      this->next=NULL;
      this->prev=NULL;
  }
  //destructor
  Node(){
      int value=this->data;
      if(next!=NULL){
          delete next;
          next=NULL;
      }
      cout<<"memory free for node with data "<<value<<endl;
  }
};

// transverse in linked list
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// length of linked list funtion 
int getlength(Node*&head){
    int len=0;
    Node*temp=head;
    
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
   return len;
}    

void insertAtHead(Node*&head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node*&tail,int d){
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node*&tail,Node*&head,int position,int d){
    // inserting at starting position
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    Node*temp=head;
    int cnt=1;
    // transverse in linked list
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // inserting at last position    
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    // inserting at any middle position
    Node*nodeToInsert=new Node(d);
    
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
}

void deleteNode(int position,Node*&head){
    // deleting starting Node(esko alg s handle kra h humne,qki isme prev Node null hota h )
    if(position==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else {
        //deleting middle and last Node
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    print(head);
    
    cout<<getlength(head)<<endl;
    
    insertAtHead(head,11);
    print(head);
    
    insertAtHead(head,13);
    print(head);
    
    insertAtTail(tail,22);
    print(head);
    
    insertAtTail(tail,20);
    print(head);
    
    insertAtPosition(tail,head,6,101);
    print(head);
    
    deleteNode(4,head);
    print(head);
    
    deleteNode(1,head);
    print(head);
    return 0;
}
*/





//                                                 Circular linked list
//                         *-> ye ek tarike se ...singly linked list ki trh hi hota h ...bas fark itta hota h ki...singly list me...last wala node null ko point krwata tha...or esme...last wala node first wale node ko point krwata hai....or or or esme head baane ki need nahi hoti...tail se kaam chl jata hai.
/*
class Node{
    
  public: 
  int data;
  Node*next;
  
  // constructor
  Node(int d){
      this->data=d;
      this->next=NULL;
  }
  
  // destructor
  ~Node(){
      int value=this->data;
      if(next!=NULL){
          delete next;
          next=NULL;
      }
      cout<<"memory free for node with data "<<value<<endl;
  }
};

void insertAtTail(Node*&tail,int element,int d){
    // empty list
    if(tail==NULL){
        Node*newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        // non empty list
        // assuming that the element is present in the list
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
    // element is found --> curr is representing element wala Node
     Node*temp=new Node(d);
     temp->next=curr->next;
     curr->next=temp;
    }
}
// transverse in Circular linked list
void print(Node*&tail){
    Node*temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{                                                        // here we use do while because....kam s kam code ek bar toh execute toh hoga..hi
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node*&tail,int value){
    // empty list
    if(tail==NULL){
        cout<<"list is empty,please check it again"<<endl;
        return;
    }
    else {
        // non empty
        // assuming that the value which u passing is present in list
        Node*prev=tail;
        Node*curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        // 1 node linked list
        if(curr==prev){
            tail=NULL;
        }
        // 2 node linked list
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
     
    Node*tail=NULL;
    
    insertAtTail(tail,5,3);
    print(tail);
    
    insertAtTail(tail,3,23);
    print(tail);
    
    insertAtTail(tail,23,43);
    print(tail);
    
    insertAtTail(tail,3,2);
    print(tail);
 
    deleteNode(tail,23);
    print(tail);
    
    deleteNode(tail,3);
    print(tail);
   
    deleteNode(tail,2);
    print(tail);
    
    return 0;
}
*/




//                                        Reverse a linked list
/*
class Node{
    
    public: 
    int data;
    Node*next;
    
    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node*&head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// It will return head of the reverse llist 
Node*reverse1(Node*&head){
    //base case
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*chottaHead=reverse1(head->next);      // eska matlab aapne choti list ko reverse kr dia...and uska head return kr dia..
    head->next->next=head;
    head->next=NULL;
    return chottaHead;
}
// reverse linked list using recursion
void reverse(Node*&head,Node*&curr,Node*&prev){
    // base case
    if(curr==NULL){
        head = prev;
        return;
    }
    
    Node*forward=curr->next;
    reverse(head,forward,curr);           // yha hum ek ek aage bad re hai...mtlb ki curr phle starting  m head pe tha...toh ab...forward..pe ajyga..islie forwad....wse hi prev current pe ajyga...islie current.
    curr->next=prev;
}
Node*Reverselinkedlist(Node*&head){
    // Approach:-3
    return reverse1(head);
    
    
    // recursion logic 
    //Approach:-2
    Node*prev=NULL;
    Node*curr=head; 
    reverse(head,curr,prev);
    return head;
    
    
   /*  Approach:- 1 
    // if the list is empty or single node is present then...
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=NULL;               
    while(curr!=NULL){
    forward=curr->next;                // ye humne islie likha qki..agar hum phli wali node ko jaise hi cut krk.piche null pe point  krwaynge...to aage wali node ka jo track h wo lost hojyga..ilse humne forward ek node bna ke...use store kr lia iseme.....taki track lost na ho...
    curr->next=prev;
    prev=curr;
    curr=forward;
    }
    return prev;

    */
/*    
}

int main(){
    Node*node1=new Node(10);
    Node*head=node1;
    
    insertAtHead(head,14);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,19);
    print(head);
    
    cout<<endl<<"Reverselinkedlist is : "<<endl;
   
    Node*temp=Reverselinkedlist(head);             // esko store eslie krwaya qki...ye kuch return krr ra h  na funtion islie...
    print(temp);                                    // or yha pe use print krwa lia...that set.....
    return 0;
}
*/






//                                 Is linked list is Circular or Not 
/*
//                     yaha jo code chapa hai..wo Circular linked list ka hai...samjhe..    Time complexity : O(n) , space complexity : O(1) 
class Node{
    
  public: 
  int data;
  Node*next;
  
  // constructor
  Node(int d){
      this->data=d;
      this->next=NULL;
  }
};

void insertAtTail(Node*&tail,int element,int d){
    // empty list
    if(tail==NULL){
        Node*newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        // non empty list
        // assuming that the element is present in the list
        Node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
    // element is found --> curr is representing element wala Node
     Node*temp=new Node(d);
     temp->next=curr->next;
     curr->next=temp;
    }
}
// transverse in Circular linked list
void print(Node*&tail){
    Node*temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{                                                        // here we use do while because....kam s kam code ek bar toh execute toh hoga..hi
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

bool isCircular(Node*&head){
    // empty list 
    if(head==NULL){
        return true;
    }
    Node*temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    return true;
}
int main(){
  
    Node*tail=NULL;
    
    insertAtTail(tail,5,3);
    print(tail);
    
    insertAtTail(tail,3,23);
    print(tail);
    
    insertAtTail(tail,23,43);
    print(tail);
    
    insertAtTail(tail,23,2);
    print(tail);
    
    if(isCircular(tail)){
        cout<<"linked list is Circular "<<endl;
    }
    else cout<<"Not Circular"<<endl;
return 0;
}
*/






// linked list Important quetion :   

/* 1. Detect cycle in LL 
   2. Find beginning/start Node of loop in LL
   3. Remove cycle in LL 




//                               1. Detect cycle in LL                 time complexity : O(n)  space complexity : O(n) 
*/
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

bool DetectCycle(Node*&head){
    // empty list 
    if(head==NULL){
        return false;
    }
    
    map<Node*,bool>visited;
    Node*temp=head;
    while(temp!=NULL){
        // if already visited,then cycle is present
        if(visited[temp]==true){
            cout<<"cycle is present at : "<<temp->data<<endl;            // es wale line se humne ye pta laga lia ki....cycle akhir..kon s element se start hora h ...
            return true;
        }
        // not visited,mark it true 
        visited[temp]=true;
        temp=temp->next;
    }
    // after coming above loop..it means..no cycle is present ...just return false.
    return false;
}

int main()
{
    Node*Node1=new Node(10);                                      // humne heap me memory allocate karwai h linked list k lie.
    Node*head=Node1;                                                // yha humne ek head pointer banwa dia...joki..starting m node1 ko point kr ra h..
    Node*tail=Node1;
    
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,25);
    print(head);
    
    tail->next=head->next;               // ess wale line se humne ek cycle create kr dia..ab check krenge ki output shi dera h ki nahi.
    
    if(DetectCycle(head)){
        cout<<"cycle is present"<<endl;
    }
    else cout<<"cycle not present"<<endl;
    
return 0;
}
*/






//                     (1.1)  Floyd's  Cycle Detection algo.  (Another way to solve que.1 with O(1) space complexity,O(n) time complexity)  

//  *-> ye sirf ye btyga..ki element us loop m lie krta h ki nahi..ye jaroori nahi ki wo beginning wla hi element ho loop k..nahi koi v hosakta h ..us loop m wo element.
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

Node*FloydDetectLoopo(Node*&head){
    // empty list 
    if(head==NULL){
        return NULL;
    }
    Node*slow=head;
    Node*fast=head;
    
    while(slow!=NULL&&fast!=NULL){
        // fast ko do kadam aage bhadao..
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        
        // ab slow ko ek kadam aage bhadao..
        slow =slow->next;
        
        // checking condition ki...kya slow or fast equal hai...agar hai toh...return krwado value slow/fast koi si v...(qki..ye node type ka hai..isie hum node hi return krwaynge...true ya false nahi ) 
        if(slow==fast){
            cout<<"present at : "<<slow->data<<endl;           // yaha se humne ye pta lia ki...kaha h wo element us cycle me..
            return slow;
        }
    }
    // after coming to above loop..it means no Cycle is present ...then return null 
    return NULL;
}

//                           2. Beginning/starting Node of loop in LL 
Node* getStarting(Node*&head){              // time complexity : O(n) , space complexity : O(1)      
    // empty list 
    if(head==NULL){
        return NULL;
    }
    Node*intersaction=FloydDetectLoopo(head);
    Node*slow=head;
    while(slow!=intersaction){
        slow=slow->next;
        intersaction=intersaction->next;
    }
    // ab loop se bahar aagye h mtlb ki..ab hume starting loop mil gaya h...just return it...
    return slow;
}

//                     3.Remove loop from LL 
void Removeloop(Node*&head){                 // time complexity : O(n) , space complexity : O(1)
    // empty list 
    if(head==NULL){
        return;
    }
    
    Node*startingloop=getStarting(head);
    Node*temp=startingloop;
    while(temp->next!=startingloop){
        temp=temp->next;
    }
    //yani ab es loop s bahar aane k baad tumhe last wali node milgyi h or tumhe bs use..ab null pe point krwana h 
    temp->next=NULL;
}
int main()
{
    Node*Node1=new Node(10);                                      // humne heap me memory allocate karwai h linked list k lie.
    Node*head=Node1;                                                // yha humne ek head pointer banwa dia...joki..starting m node1 ko point kr ra h..
    Node*tail=Node1;
    
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,25);
    print(head);
    
    tail->next=head->next;               // ess wale line se humne ek cycle create kr dia..ab check krenge ki output shi dera h ki nahi.
    
    if(FloydDetectLoopo(head)){
        cout<<"cycle is present"<<endl;
    }
    else cout<<"cycle not present"<<endl;
   
    // logic of getStarting loop : 
    Node*loop=getStarting(head);
    cout<<"loop start at : "<<loop->data<<endl;
    
    // logic of Removeloop : 
    Removeloop(head);
    print(head);
return 0;
}
*/







//                           Remove Duplicate from sorted LL           // time complexity : O(n) , space complexity : O(1) 
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

Node*Removeduplicate(Node*&head){
    // empty list
    if(head==NULL){
        return NULL;
    }
    
    Node*curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&(curr->data==curr->next->data)){
            Node*next_next=curr->next->next;
            Node*nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next;
        }
        else {
            curr=curr->next;
        }
    }
    return head;
}
//                 bhai logic m av gadbaddd h kuchh....check krna pdega....
Node*Removeduplicateunsorted(Node*&head){
    // empty list
    if(head==NULL){
        return NULL;
    }
    Node*curr=head;
    while(curr!=NULL&&curr->next!=NULL){
        Node*temp=curr->next;
        while(temp!=NULL){
            if(curr->data==temp->data){
            Node*next_next=temp->next;
            Node*nodetodelete=temp;
            delete(nodetodelete);
            temp=next_next;  
            }
            else {
             curr=curr->next;
        }
        }
    }
    return head;
}
int main()
{
    Node*Node1=new Node(10);                                      // humne heap me memory allocate karwai h linked list k lie.
    Node*head=Node1;                                                // yha humne ek head pointer banwa dia...joki..starting m node1 ko point kr ra h..
    Node*tail=Node1;
    
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,15);
    insertAtTail(tail,16);
    insertAtTail(tail,16);
    insertAtTail(tail,17);

    print(head);
    
    Removeduplicate(head);
    print(head);
    
    Removeduplicateunsorted(head);
    print(head);
return 0;
}
*/








//                                         Merge Two sorted linked list 
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

Node* solve(Node*&first,Node*&second){
    
    // if agar first list m v ek hi element h or second list m v ek hi element h toh...first k next ko second pe point krwa do.!
    if(first->next==NULL){
        first->next=second;
        return first;
    }
    
    
    Node*curr1=first;
    Node*next1=curr1->next;
    Node*curr2=second;
    Node*next2=curr2->next;                   // ye basicaaly humne islei bnaya h taki...dusri wali list ka track lost na hojaie..jab usko pahli wali list m dalenge toh..niche k second step me...

    while(next1!=NULL&&curr2!=NULL){
        // if part hamara khra h ki...jo dusri list ka element h jo phali do list k bich m aaskata h !
        if((curr2->data>=curr1->data) &&(curr2->data<=next1->data)){
            curr1->next = curr2;
            next2=curr2->next;                   // ye ha second step..yha humne second list ka trck bacha lia  h 
            curr2->next=next1;
            
            // ab humne dono list ko update kr dia mtlb..ki ek ek aage bda dia...
            curr1=curr2;
            curr2=next2;
        }
        // or else part hamara khta h ki..wo dusri list ka element pahli do list k bich m nahi aaskata ..toh pahli list k pointers ko ek ek aage bda do.!
        else{
            curr1=next1;
            next1=next1->next;
            
            if(curr1==NULL){
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}
Node*Mergelinkedlist(Node*&first,Node*&second){
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    // yha humne ek function k jarie check kr lia ki..phali list kisko manege or dusri list kisko mangenge.
    if(first->data<=second->data){
        return solve(first,second);
    }
    else {
       return solve(second,first);
    }
}


int main(){
    
    Node*Node1=new Node(1);
    Node*Node2=new Node(2);
    Node*head1=Node1;                                                
    Node*tail1=Node1;
    
    Node*head2=Node2;
    Node*tail2=Node2;
    
    insertAtTail(tail1,3);
    insertAtTail(tail1,5);

    insertAtTail(tail2,4);
    insertAtTail(tail2,6);

    print(head1);
    print(head2);
    
    // yha logic me  thoda gadbaddd sa bro...! qki..dono list merge toh hore h lekin..dusri wali list puri tareeke se print nahi hori...
    // mtlb ki..dekho phli wali list m 1 3 5 hai.or dusri m 2 4 6 do final ans..1 2 3 4  5 6 ana chayie na...lekin... 1 2 3 4 5 aara hai...!


    Node*ans= Mergelinkedlist(head1,head2);
    print(ans);
    return 0;
}
*/






//                                           Check Palindrom in linked list                     time complexity : O(n) , space complexity : O(n) 
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

bool checkPalindrom(vector<int>arr){
    
    int n=arr.size();
    int s=0;
    int e=n-1;
    
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool isPalindrom(Node*&head){
    
    vector<int>arr;
    Node*temp=head;
    while(temp!=NULL){
        
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkPalindrom(arr);
}


int main(){
    Node*Node1=new Node(1);                                      // humne heap me memory allocate karwai h linked list k lie.
    Node*head=Node1;                                                // yha humne ek head pointer banwa dia...joki..starting m node1 ko point kr ra h..
    Node*tail=Node1;
    
    insertAtTail(tail,2);
    insertAtTail(tail,1);

    print(head);
    
    if(isPalindrom(head)){
        cout<<"Palindrom hai bhai! "<<endl;
    }
    else cout<<"Nah! na hai Palindrom.."<<endl;
    return 0;
}
*/









//                                       Reverse linked list 

/*
Node*reverse(Node*&head){
    Node*curr=head;
    Node*prev=NULL;
    Node*next=NULL;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
*/








//                                              Add 2 numbers in linked list 
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}
void insertAtTail(Node*&head,Node*&tail,int val){
    Node*temp=new Node(val);
    //empty list 
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    // non empty list 
    else {
        tail->next=temp;
        tail=temp;
    }
}
Node*add(Node*&first,Node*&second){
    int carry=0;
    Node*ansHead=NULL;
    Node*ansTail=NULL;
    
    while(first!=NULL||second!=NULL||carry!=0){
        int val1=0;
        if(first!=NULL)
           val1=first->data;
        
        int val2=0;
        if(second!=NULL)
           val2=second->data;
           
        int sum=carry+val2+val1;
        int digit=sum%10;
        
        //crate node and add in answer linked list
        insertAtTail(ansHead,ansTail,digit);
        
        carry=sum/10;
        
         if(first!=NULL)
            first=first->next;
        if(second!=NULL)
           second=second->next;
    }
    return ansHead;
}
Node*reverse(Node*&head){
    Node*curr=head;
    Node*prev=NULL;
    Node*next=NULL;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node*addtwoList(Node*&first,Node*&second){
    //step1: reverse the input LL
    first=reverse(first);
    second=reverse(second);
    
    //step2: add 2 list & store it in new List 
    Node*ans=add(first,second);
    
    ans=reverse(ans);
    return ans;
}

int main(){
    
    Node*Node1=new Node(1);
    Node*Node2=new Node(2);
    Node*head1=Node1;                                                
    Node*tail1=Node1;
    
    Node*head2=Node2;
    Node*tail2=Node2;
    
    insertAtTail(tail1,3);
    insertAtTail(tail1,5);

    insertAtTail(tail2,4);
    insertAtTail(tail2,6);
    
    cout<<"sum of :"<<endl<<endl;
    print(head1);
    print(head2);
  
    cout<<"_______"<<endl;
  
    Node*ans=addtwoList(head1,head2);
    print(ans);
  
    return 0;
}
*/








//                                      Clone a linked linked with random pointere 
/*
class Node{
  public: 
    int data;
    Node*next;
    Node*random;                                          // NOTE: yaha ek or node bnega...jab clone kr re hai..toh ! 
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;  
        this->random=NULL;
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

void insertAtTail(Node*&head,Node*&tail,int d){
    Node*temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else {
        tail->next=temp;
        tail=temp;
    }
}
Node*Clonelist(Node*&head){
    
    //step 1: creation of clone list 
    Node*cloneHead=NULL;
    Node*cloneTail=NULL;
    
    Node*temp=head;
    while(temp!=NULL){
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp=temp->next;
    }
    
    //step 2: cloneNode add in between originalList 
    Node*originalNode=head;
    Node*cloneNode=cloneHead;
    
    while(originalNode!=NULL&&cloneNode!=NULL){
        Node*next=originalNode->next;
        originalNode->next=cloneNode;
        originalNode=next;
        
        next=cloneNode->next;
        cloneNode->next=originalNode;
        cloneNode=next;
    }
    
    //step 3: random pointer copy 
    temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            if(temp->random!=NULL){
                temp->next->random=temp->random->next;
            }
            else{
                temp->next=temp->random;
            }
        }
        temp=temp->next->next;
    }
    
    //step 4: revert changes done in step 2 
    originalNode=head;
    cloneNode=cloneHead;
    
    while(originalNode!=NULL&&cloneNode!=NULL){
        originalNode->next=cloneNode->next;
        originalNode=originalNode->next;
        
        if(originalNode!=NULL){
            cloneNode->next=originalNode->next;
        }
        cloneNode=cloneNode->next;
    }
    
    //step 5: return ans 
    return cloneHead;
}

//  bhai gadbadd h thoda list ko inputt lene m qki..ab isme ek random poiinter v hai na..islie logic toh shi likha h Clonelist wala lekin..syd class m or int main m kuch rah ra hai...!
    Node*Node1=new Node(1);                                      
    Node*head=Node1;                                                
    Node*tail=Node1;
    
    insertAtTail(tail,2);
    insertAtTail(tail,1);

    print(head);
    
    Node*ans=Clonelist(head);
    print(ans);

    return 0;
}
*/








//                              Merge Sort in linked list
/*
class Node{
  public: 
    int data;
    Node*next;                           
    
    // constructor
    Node(int Data){
        this->data=Data;
        this->next=NULL;                      
    }
}; 

void insertAtHead(Node*&head,int d){
    // creation of new Node
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    // creation of new Node
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;                                    
}

// transverse in linked list to print data
void print(Node*&head){               
    Node*temp=head;                   
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;                
    }
    cout<<endl;
}

Node*findMid(Node*&head){
    Node*slow=head;
    Node*fast=head->next;
    
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node*merge(Node*&left,Node*&right){
    if(left==NULL)
        return right;
        
    if(right==NULL)
        return left;
        
    Node*ans=new Node(-1);
    Node*temp=ans;
    
    // merge 2 sorted linked list
    while(left!=NULL&&right!=NULL){
        if(left->data<right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    
    while(left!=NULL){
        temp->next=left;
        temp=left;
        left=left->next;  
    }
    while(right!=NULL){
        temp->next=right;
        temp=right;
        right=right->next;
    }
    
    ans=ans->next;
    return ans;
}

Node*mergesort(Node*&head){
    //base case
    if(head==NULL||head->next==NULL){
        return head;
    }
    
    // break linked list into 2 halvs,after finding mid 
    Node*mid=findMid(head);
    
    Node*left=head;
    Node*right=mid->next;
    mid->next=NULL;
    
    // recursive call to sort 2 halvs
    left=mergesort(left);
    right=mergesort(right);
    
    // merge both left and right halvs
    Node*result=merge(left,right);
    return result;
}

int main(){
    Node*Node1=new Node(1);                                      
    Node*head=Node1;                                                
    Node*tail=Node1;
    
    insertAtTail(tail,2);
    insertAtTail(tail,15);
    insertAtTail(tail,-5);
    insertAtTail(tail,5);

    print(head);
    cout<<endl<<"sorted linke list..."<<endl;
    Node*ans=mergesort(head);
    print(ans);
    return 0;
}
*/




// Q.   why quicksort is preferred for arrays and merge sort for linked lists?

/* A.   *-> because,accessing a random Node in linkedlist is costly operation which makes other 
        alogrithm like quicksort,heapsort,etc..inefficient.
        
        *-> Quick sort is an in-place sorting algorithm, i.e. which means it does not require any
        additional space, whereas Merge sort does, which can be rather costly.


*/