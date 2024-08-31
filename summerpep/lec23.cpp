#include<bits/stdc++.h>
using namespace std;

int lastindex(vector<int> v,int s,int e,int x){
    if(s>e){
    
        return -1;
    }

    int mid=(s+e)/2;

    if(v[mid]==x){
        if(v[mid] != v[mid+1]){
            return mid;
        }
        else{
            return lastindex(v,mid+1,e,x);
        }
    }

    if(v[mid] >= x){
        return lastindex(v,s,mid-1,x);
    }

    else{
        return lastindex(v,mid+1,e,x);
    }

    
}

int main(){
    int a;cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    int x;cin>>x;

    cout<<lastindex(v,0,a-1,x);
    
    return 0;
}