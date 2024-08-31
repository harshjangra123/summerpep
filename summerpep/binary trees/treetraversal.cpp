// all traversal of a tree
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class binarytree
{
public:
    int index = 0;

    // build tree function
    node *buildtree(vector<int> &v)
    {
        if (index > v.size())
        {
            return nullptr;
        }
        if (v[index] == -1)
        {
            index++;
            return nullptr;
        }
        node *newnode = new node(v[index]);
        index++;
        newnode->left = buildtree(v);
        newnode->right = buildtree(v);
        return newnode;
    }

    // level order treversal
    void levelordertreversal(node *root)
    {
        queue<node *> q;
        q.push(root);
        q.push(nullptr);
        while (!q.empty())
        {
            node *curr = q.front();
            q.pop();

            if (curr == NULL)
            {
                cout << endl;
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                cout << curr->data << " ";
                if (curr->left != nullptr)
                {
                    q.push(curr->left);
                }
                if (curr->right != nullptr)
                {
                    q.push(curr->right);
                }
            }
        }
    }

    // zigzag traversing
    vector<int> zigzag(node *root)
    {
        queue<node *> q;
        q.push(root);

        vector<int> result;
        bool flag = true;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> v(size);

            for (int i = 0; i < size; i++)
            {
                node *curr = q.front();
                q.pop();
                int index;
                if (flag)
                {
                    index = i;
                }
                else
                {
                    index = size - i - 1;
                }
                v[index] = curr->data;

                if (curr->left != nullptr)
                {
                    q.push(curr->left);
                }
                if (curr->right != nullptr)
                {
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



    void treverseleft(node *root, vector<int> &v)
    {
        if (root->left == nullptr)
        {
            return;
        }
        v.push_back(root->data);
        if(root->left){
        treverseleft(root->left, v);
        }
        else{
            treverseleft(root->right,v);
        }
    }


    void treverseright(node* root,vector<int> &v){
        if(root == nullptr){
            return ;
        }

        if(root->right){
        treverseright(root->right,v);
        }

        else{
            treverseright(root->left,v);
        }
        v.push_back(root->data);
    }

    void trverseleaf(node* root,vector<int> &v){
        if(root == nullptr){
            return ;
        }
        if(root->left == nullptr && root->right == nullptr){
            v.push_back(root->data);
        }
        trverseleaf(root->left,v);
        trverseleaf(root->right,v);
    }

    vector<int> boundarytreveral(node *root)
    {
        vector<int> v;
        v.push_back(root->data);
        
        treverseleft(root->left, v);
        trverseleaf(root->left,v);
        trverseleaf(root->right,v);       
        treverseright(root->right,v);
        
        return v;
    }

    

    // vertical order treversal
    
};

int main()
{
    // vector<int> v = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> v = {1, 2, 4, -1, 5, 6, 7, 8, 9, -1, 10, 11, -1, -1, 12, 13, 14, 15, -1, -1};;
    // vector<int> v = {4 ,10, -1, 5, 5, -1, 6, 7, -1, 8, 8, -1, 8, 11, -1, 3, 4, -1, 1, 3, -1, 8, 6, -1, 11, 11, -1, 5, 8};
    binarytree bt;
    node *root = bt.buildtree(v);
    // bt.levelordertreversal(root);

    // vector<int> vv = bt.boundarytreveral(root);
    // for (int i : vv)
    // {
    //     cout<<i<<" ";
    // }
    bt.preorder(root);
    return 0;
}