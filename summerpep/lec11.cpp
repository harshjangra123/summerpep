#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class binarytree{
    public:
    int ind = 0;

    Node* buildtree(vector<int> v){
        if(ind > v.size()){
            return nullptr;
        }
        if(v[ind] == -1){
            ind++;return nullptr;
        }
        Node* newnode = new Node(v[ind]);
        ind++;
        newnode->left = buildtree(v);
        newnode->right = buildtree(v);
        return newnode;
    }

    void po(Node* a){
        if(a == nullptr){
            return;
        }
        cout<<a->data<<" ";
        po(a->left);
        po(a->right);
    }
};



int main(){
    binarytree bt;
    vector<int> v = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
    Node* root = bt.buildtree(v);
    bt.po(root);
    return 0;
}