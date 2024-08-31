#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int key,height;

    node* left;
    node* right;
    node(int data){
        this->key = data;
        this->left=this->right = NULL;
        height =1;
    }
};


int height(node* root) {

        if (root==NULL)
        {
            return 0;
        }

        return root->height;
        
}


int bf(node* n){
    int lh = height(n->left);
    int rh = height(n->right);

    return lh-rh;
}

node* rightrotate(node* y){
    node* x = y->left;

    node* t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(height(y->left),height(y->right)) +1;
    x->height = max(height(x->left),height(x->right)) + 1;

    return x;
}

node* leftrotate(node* x){
    node* y = x->right;

    node* t2 = y->left;

    x->left = x;
    y->right = t2;

    x->height = max(height(x->left),height(x->right)) +1;
    y->height = max(height(y->left),height(y->right)) + 1;

    return x;
}


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


node* deletenode(node* root,int key){
    if(root == NULL){
        return root;
    }
    
}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

//complete the code of avl trees


int main(){
    // node* root = NULL;
    // int n = 7;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;cin>>x;   
    //     root = insert(root,x);
    // }
    // inorder(root);

    vector<int> heap;
    int n;
    while(cin>>n){
        heap.push_back(n);
    }

    return 0;
}