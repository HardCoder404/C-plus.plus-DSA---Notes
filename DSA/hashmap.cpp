#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//                                                          Hashmap 

int main()
{
    // creation 
    unordered_map<string,int>m;
    
    // Insertion 
    
    // way(1): 
    pair<string,int>p=make_pair("babbar",3);                     // note: make_pair is also a keyword 
    m.insert(p);
    
    // way(2): 
    pair<string,int>q("love",2);
    m.insert(q);
    
    // way(3): 
    m["mera"]=1;                                  // es line ka mtlb hai...mujhe map me "mera" k corrosponding 1 value dalni hai 
    
    // suppose bhyia,maine m["mera"]=2 ye likh dia to ess case me kya hoga ????
    m["mera"]=2;     // to dost,ess case me value update hojati hai..mtlb phale mera k corrosponding 1 tha...lkn ab mera k corrosponding 2 hojyga...
    
    
    // NOTE: koi v key aap dobara use kar ke usme insert karne ki koshis krte hai toh..usme updation hoti hai(jaise upper wale m hua)     
    // NOTE: har ek key k corrosponding ek hi entry hogi(i.e., should be unique) 
    
    
    // search 
    // way(1): 
    cout<<m["mera"]<<endl;                // esme mera k corrosponding jo v value hogi wo print hojygi 
    
    // way(2): 
    cout<<m.at("babbar")<<endl;            // emse babbar k corrosponding 3 pda tha to wo print hogya 
    
    
    // but let say ...maine asi koi entry search karne ki koshis ki jo ki maine phle create hi nahi kari thi...toh uss case me kkya show krega???
    // cout<<m.at("unknown")<<endl;                    // to ess case me ye error show krega 
    
    // but but but...agar mai yhi chiz same line no.35 k lie kru toh????
    cout<<m["unknown"]<<endl;    // to ess case me mujhe 0 print hoke milega.....(dost phle comment krlena lne no.42 ko ese chalne se phle..wrna error show krega..)
    
    
    // NOTE: there is a difference in line no. 42 and 45 : 
    // what??   jab hum m["unknown"] ase search karne ki koshis krte hai toh.."unknown" es key k corrosponding ek entry ban jati h jisme..starting me 0 pda hota hai...eslei ye 0 print kr deta hai..run krne pe
    // ab let say mai line no.42 ko ab line number 45 k bad likh du toh...ab dono 0 de denge...qki...ab phle line number 45 ki wjh se.."unknown" k corrosponding 0 dal gya..or ab jab hum doboara m.at("unknown") krk search krne ki koshish krenge toh..wha 0 pda hia..to wo 0 print kr dega dobara.....samjheee heroooooo    
    cout<<m.at("unknown")<<endl;            // 0 dedega o/p me 
    
    
    
    
    // size 
    cout<<m.size()<<endl;              // ans. m 4 aajyga qki..humne av tk 4 entry bna li hai..
    
    
    // to check present/ not present 
    // eseme ek inbuilt function use hota hai i.e., count: ye 0 deta hai..false k case me or 1 deta hai true k case me
    
    cout<<m.count("bro")<<endl;                  // to ye avi 0 dega..qki bro naam ka koi entry nahi pdi...eslie...
    cout<<m.count("love")<<endl;                 // now it returns 1 bcz..love is present 
    
    // erase 
    m.erase("love");                        // es funtion m hme ..key pass krna pdta hai..
    cout<<m.size()<<endl;
    
    
    // iterator 
    // way(1): loop
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    // way(2):  iterator 
    unordered_map<string,int>:: iterator it=m.begin();     // iterator created !!
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    
    // NOTE: jab hum unordered_map ka use krte hai..toh chize random order me print hoti hai....lekin     O(1)
    //       jab hum map ka use krte hai..toh chize wse hi print hoti hia..jase jaise aap insert krwate hai..mtlb jo phle dala wo>>>   O(logn)
    
       
    return 0;
}
