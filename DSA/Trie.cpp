#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

//                                     Trie 

class TrieNode{
    public: 
    char data;
    TrieNode*children[26];
    bool isTerminal;
    
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
    public: 
    TrieNode*root;
    
    Trie(){
        root=new TrieNode('\0');
    }
    
    void insertUtil(TrieNode*root,string word){
        // base case 
        if(word.length()==0){
            // eska mtlb ki aap sara string traverse kr chuke ho..or ab last wale word ko isTerminal mark krdo
            cout<<"word dal gya"<<endl;
            root->isTerminal=true;
            return;
        }
        
        // assumption-> all words are in CAPS 
        int index=word[0]-'A';
        TrieNode*child;
        
        if(root->children[index]!=NULL){
            // present -- mtlb aage badh jaaoo!
            child=root->children[index];
        }
        else{
            // absent -- mtlb ek nyi node create kro phir age badh jaoo! 
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        
        // RECURSION 
        insertUtil(child,word.substr(1));
    }
    
    bool searchUtil(TrieNode*root,string word){
        // base case 
        if(word.length()==0){
            // mtlb jis node pe khade hai..wo isTerminal node hui toh return true krod.else false;
            return root->isTerminal;         
        }
        
        int index=word[0]-'A';
        TrieNode*child;
        
        if(root->children[index]!=0){
            // present -- mtlb bhyia....ye character to present hai...aage badh jaao!!
            child=root->children[index];
        }
        else {
            // absent -- agar jo character mai search kr ra hu..wo absent h toh..noraml false aana chyie!!
            return false;
        }
        
        // RECURSION 
        return searchUtil(child,word.substr(1));
    }
    
    
    //     INSERT WORD 
    void insertWord(string word){
        insertUtil(root,word);
    }
    
    //     SEARCH WORD 
    bool searchWord(string word){
        return searchUtil(root,word);
    }
};

int main()

{
    Trie *t=new Trie();
    t->insertWord("abcd");
    
    cout<<"Present or Not "<<t->searchWord("abcd");    

    return 0;
}



