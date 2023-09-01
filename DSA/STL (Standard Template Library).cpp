/*                                                            STL (Standard Template Library)

  *-  Basically ..to reuse the code it is used..means.suppose we have a time limit...so rather than..creating our
    big logic..we simply use...the predefined Library funtions.
  
  *- It is a Library of generic classes and funtions.
  *- Time saving
  

Component of STL : 
  1. container
  2. Algorithm
  3. Iterator
  
  
  
/*                                       Array in STL 

#include <iostream>
#include<array>                                                          // Must include this header file for this array STL
using namespace std;

int main()
{    
    int basic[3]={1,2,3};           // simple array 
    
    array<int,4> a={1,2,3,4};       // STL array
    
    int size=a.size();               // here byy this way..we can find the size of array in STL
    for(int i=0;i<size;i++){
    cout<<a[i]<<endl;                   // here we are printing the element
    }
    
    // Lets see some more operation in array STL:
    
    cout<<"Element at 2nd Index : "<<a.at(2)<<endl;                         // It will give the Element at 2nd index i.e., 3
    cout<<"array is empty or not : "<<a.empty()<<endl;                       // it will give either true(1)  or false(0)   ...kahne ka mtlb y booliean expression m dega ans.
    
    cout<<"first Element : "<<a.front()<<endl;                                 // It will give the first Element of the array ie 1.
    cout<<"last Element : "<<a.back()<<endl;                                   // it will give the last Element of the array ie 4.
    return 0;
}




/*                                                  Vector in STL

   *- Vector ek dynamic array hota hai...jaise normal array me sab kuch contiguous memory me store hota hai..usi tarah issme v whi chiz follow hoti hai...
    alag kya hai isem ?? 
    alag ye hai ki...jaise hi apka Vector bhar jata hai...kahne ka mtlb ki agar apke Vector ka size 4 hai toh agar aap isme pachwa Element daloge toh
    ye kya krega apna size double kar lega..khanae ka mtlb ye hai ki...ye kya krega..ye Vector ek or nya Vector banyaga.jiska size is wale Vector s 
    double hoga..or us Vector me yye purane wale Element ko copy kar lega... or  purana wala Vector dead hojyga..( ye sab behind the memory hota hai.)
    
    *- Inshort ...aap iske size ko badha-ghata sakte hai.
    


#include <iostream>
#include<vector>                                                          // Must include this header file for this vector STL
using namespace std;

int main()
{  
    vector<int>v;                          // initialization of vector 
    
    cout<<"Capacity : "<<v.capacity()<<endl;         // jab tak hum koi element assign nahi krenge ..iski capacity 0 rahegi.
    
    // capacity matlb : it means...kitne element k lie space assign hua pda hai.
    // size matlb : it means...ki kitne element pde hai.
    
    v.push_back(1);                                    // ase hum...element ko vector k andar dalte hai...means value assingnig to vector.
    cout<<"Capacity : "<<v.capacity()<<endl;          // ab size 1 hojyga
    
    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl;             //  yaha kuch tufani hoga...yaha capacity 4 dikhyga...qki..pahle issme 2 element ka space tha..lekin jaise hi isme humne...tisara element dala to..iski size double hogyi..jaisse ki humne upper iski defination m bat ki thi.
    cout<<"size : "<<v.size()<<endl;                      // yaha ye btyyaga...ki.kitti element pdi h vector k andar.
    
    
    // lets see some more operation on vector : 
    
    cout<<"element at 2nd index : "<<v.at(2)<<endl;                                     // it will give 3
    
    cout<<"front element : "<<v.front()<<endl;
    cout<<"last element : "<<v.back()<<endl;
    
    cout<<"before pop : ";
    for(int i:v){
        cout<<i<<" ";                                   // is time pe ...ye 1 2 3  print karwayga
    }cout<<endl;
v.pop_back();                                        // pop_back : ye kya krta hai...ki..last me jo element dala hai vector k andr..usko nikal leta  hai...toh ab ye 1 2 print karwayga.
    cout<<"after pop : ";
    for(int i:v){
        cout<<i<<" ";                                   // ab ye 1 2  hi khali print karwayga
    }cout<<endl;
    
    cout<<"before clear the size : "<<v.size()<<endl;
v.clear();                                                   // v.clear : iska mtlb hota hia...ki sare element ko hta do...
    cout<<"after clear the size : "<<v.size()<<endl;                    // islie ab iska size 0 dikhyga...(size means kitte element pde hue hai.)

    vector<int>a(5,1);                     // iska matlb hai ki..paach size ka vector banao..or sabko..1 se initialize kar do.
    
    vector<int>last(a);                      // iska matlb hai ki...'a' k sare element ko is nye last wale vector me daal do.
    cout<<"print last : ";             // ye print karke proof krega..ki ha bhai..maine tere purane wale vector k sare element ko copy kar lia hai.
    for(int i:last){
        cout<<i<<" ";                           // ye  1 1 1 1 1  pach baar ek print karwayga.
    }cout<<endl;
    
      return 0;
}





/*                                         Deque in STL 

   *- isko double ended que v bolte h.
   *-  iska mtlb hota hia..ki aap begining me or ending me ...push or pop dono operation kar sakte hai..Insertin/deletion dono perorm kar sakte hai
    apka man kar ra hai..Insertion karna front se toh apne front s kr dia..removal v aap dono end se kar sakte hai.
   *- ye v dynamic hai



#include <iostream>
#include<deque>                                                          // Must include this header file for this deque STL
using namespace std;

int main()
{  
    deque<int>d;                                         // intialization of deque
    
    d.push_back(1);                                      // assinging value to the deque
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";                                 // ye 2 1  print krk dega...qki..humne starting (front) m 2  dala hai..or last me (back) me 1 islie.
    }cout<<endl;
    
/*    d.pop_front();
    for(int i:d){
        cout<<i<<" ";                                 // ye starting k first...element ko delete kar dega... or sirf 1 print krega.
    }cout<<endl;
*/    
/*    cout<<"print index 1st element : "<<d.at(1)<<endl;
    
    cout<<"front : "<<d.front()<<endl;
    cout<<"back : "<<d.back()<<endl;
    
    cout<<"empty or not : "<<d.empty()<<endl;
    
    cout<<"before erase : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase : "<<d.size()<<endl;
    
  return 0;
}

*/



/*                                                      List in STL 

   *- It is a double linked list.
   *- Random access is not possible.
   
   isme v sara whi hai...pahale jaise,,,command. bas ye hai...ki isme hume kisi v element ko transverse krk..access krna pdega...
   
   header file : #include <list> 

*/



/*                                                     Stack in STL 

   *- suppose humne 4 books rakhi ek k upper ek...toh jab hum uthynge...toh last m jo rakha h humne whi pahale uthaynge...na or jo paahale 
   rakha tha humne kitab...use last m utyange...yhi...stack hota hai...means...ki..'last in first out'(LIFO)


#include <iostream>
#include<stack>                                                     // Must include this header file for this stack STL
using namespace std;

int main()
{  
   stack<string>s;
   s.push("Prince");
   s.push("Raj");
   s.push("kumar");
   
   cout<<"Top element : "<<s.top()<<endl;                         // mtlb ye ab kumar print krk dega...qki humne last m kumar  hi dala h stack me.
   s.pop();                                                       // ab humne last wala hta dia...toh ab kumar k baad jo likha tha wo print hoga. ie..Raj
   cout<<"Top element : "<<s.top()<<endl; 
  return 0;
}

*/


 


/*                                               Queue in STL 
  
   *- It means 'First In First Out'. (FIFO) 
   *- mtlb ase samjho....sadi ki line m jo pahale kkhada rahega...sahi panner whi sabse pahele lega...
   
include <iostream>
#include<queue>                                                     // Must include this header file for this queue STL
using namespace std;

int main()
{  
   queue<string>s;
   s.push("Prince");
   s.push("Raj");
   s.push("kumar");
   
   cout<<"first element : "<<s.front()<<endl;                         // mtlb ye ab Prince print krk dega...qki humne pahle Prince  hi dala h stack me.
   s.pop();                                                       // ab humne pahla wala hta dia...toh ab Prince k baad jo likha tha wo print hoga. ie..Raj
   cout<<"first element : "<<s.front()<<endl; 
  return 0;
}


*/



/*                                            Priority queue in STL

    *-- kahane ka mtlb hai..ki tumpe agar kuch element hai..wo tumne que m daal die...ab agar tumhe unhe nikalna hai..toh ....do way h tumpe: 
    ya to max heap ya min hip
    mtlb ...ya toh ap jo element nikalenge wo hmesa maximum or greater wali hi nikliegi...(max heap)
    ya phir ...jo aap element nikalenge wo hmesa minimum or lower wali hi nikliegi...(min heap)



#include <iostream>
#include<queue>                                                     // Must include this header file for this queue STL
using namespace std;

int main()
{  // max heap 
   priority_queue<int>maxi;
   
   // min heap 
   priority_queue<int,vector<int>,greater<int>>mini; 
   
   maxi.push(1);
   maxi.push(2);
   maxi.push(7);
   maxi.push(5);
   
   cout<<"size is : "<<maxi.size()<<endl;
   int n=maxi.size();                                               // isko humne islie n m store karwaya...taki..maxi ki size ki value change na ho..wrna niche hum kuch implement v kr re h n toh..ho sakta h cahnge...toh output shi ni aayga....islie.. 
   for(int i=0;i<n;i++){
       cout<<maxi.top()<<" ";                                       // yaha hum..maximum value nikal re h fek re hai..nikl re h fek re hai...ye print krega...7 5 2 1 
       maxi.pop();                                                        // yaha hum element nikal v re hai.queue m se..
   }cout<<endl;
   
   // ab mini ko karwate hai...
   mini.push(1);
   mini.push(2);
   mini.push(7);
   mini.push(5);
   
   int p=mini.size();                                               
   for(int i=0;i<p;i++){
       cout<<mini.top()<<" ";                                        
       mini.pop();                                                        
   }cout<<endl;
   
   cout<<"empty or not : "<<maxi.empty();                  // ye hume true value return krk dega...qki..humne sare element toh nikal lie na...islie 
  return 0;
}
*/




/*                                              Set 
  
  *-  ye ek tarah ka unique element store karta..hai...maltb ki aagar pach bar paach dal dia toh wo ek hi baar paach store krega...
  




*/







