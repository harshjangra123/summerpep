#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int key;
    node* left;
    node* right;
    node(int data){
        this->key = data;
        this->left=this->right = NULL;
    }
};


node* newnode(int val){
    node* nod = new node(val);
    nod->left = NULL;
    nod->right = NULL;
    return nod;
}

node* insert(node* nod,int val){
    if(nod == NULL) 
     return (newnode(val));
    if(val < nod->key)  nod->left = insert(nod->left,val);
    else if(val > nod->key) nod->right = insert(nod->right,val);
    else return nod;
}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

bool search(node* root,int x){
    if(root == NULL){
        return 0;
    }
    if(root->key == x){
        return 1;
    }
    if(x > root->key ){
        search(root->right,x);
    }
    if(x < root->key){
        search(root->left,x);
    }
}

node* deletenode(node* root,int key){
    if(root == NULL){
        return root;
    }
    
}

int main(){
    node* root = NULL;
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;   
        root = insert(root,x);
    }
    inorder(root);

    int x;cin>>x;
    cout<<search(root,x);
    return 0;
}