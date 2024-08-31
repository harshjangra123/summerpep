#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    node* children[26];
    bool eow = false;

    node(){
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        
    }
};

node* root = new node();

void insert(string& words){  //O(l)
    node* curr = root;
    for (int level = 0;level<words.length();level++)
    {
        int idx = words[level] - 'a';
        if(curr->children[idx] == NULL){
            curr->children[idx] = new node();
        }
        curr = curr->children[idx];
    }
    curr->eow = true;
}


int main(){
    
    string words[] = {"the","a","there","their","any","thee"};
    for (string str : words)
    {
        insert(str);
    }

    
    
    
    return 0;
}