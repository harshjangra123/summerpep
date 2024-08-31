#include<bits/stdc++.h>
using namespace std;
void palin(vector<int> &v,int i,int j){
    if(i>j){
        cout<<"palindrome";
        return;
    }
    if(v[i] != v[j]){
        cout<<"not palindrome";
    }
    if(v[i] == v[j]){
        palin(v,i+1,j-1);
    }
}
int main (){
    int a;cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    palin(v,0,a-1);
    return 0;
}