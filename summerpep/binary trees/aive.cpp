// all traversal of a tree
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class binarytree{
    public:

    int index = 0;

    //build tree function
    node* buildtree(vector<int> &v){
        if(index > v.size()){
            return nullptr;
        }
        if(v[index] == -1){
            index++;
            return nullptr;
        }
        node* newnode = new node(v[index]);
        index++;
        newnode->left = buildtree(v);
        newnode->right = buildtree(v);
        return newnode; 

    }



    // level order treversal
    void levelordertreversal(node* root){
        queue<node*> q;
        q.push(root);
        q.push(nullptr);
        while (!q.empty())
        {
            
            if(q.front() == NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout<<q.front()->data<<" ";
                if(q.front()->left != nullptr){
                    q.push(q.front()->left);
                }
                if(q.front()->right != nullptr){
                    q.push(q.front()->right);
                }
            }
            q.pop();

        }
        

    }


    // zigzag traversing
    vector<int> zigzag(node* root){
        queue<node*> q;
        q.push(root);
        
        vector<int> result;
        bool flag = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> v(size);

            for(int i = 0;i<size;i++){
                node* curr = q.front();
                q.pop();
                int index;
                if(flag){
                    index = i;
                }
                else{
                    index = size-i-1;
                }
                v[index] = curr->data;



                if(curr->left != nullptr){
                    q.push(curr->left);
                }
                if(curr->right != nullptr){
                    q.push(curr->right);
                }
                
            }


            flag = !flag;
            for (int i : v)
            {
                result.push_back(i);
            }
            
        }
        
        return result;
        }
    
    void treverseleft(node* root,vector<int> &v){
        if(root == nullptr){
            return;
        }
        v.push_back(root->data);
        treverseleft(root->left,v);
    }

    vector<int> boundarytreveral(node* root){
        vector<int> v;
        treverseleft(root,v);
        return v;
    }


};



int main(){
    vector<int> v ={ 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
    binarytree bt;
    node* root = bt.buildtree(v);
    // bt.levelordertreversal(root);
    vector<int> vv = bt.zigzag(root);

    for (int i : vv)
    {
        cout<<i<<" ";
    }
    // bt.zigzag(root);   
    
    return 0;
}