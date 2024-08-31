// priblem 34 leetcode
#include<bits/stdc++.h>
using namespace std;
// vector<int> v;

void gg(vector<int> a,int s,int e,int x,vector<int> &v){
    if(s>=e){
        return;
    }
    int mid = s+(e-s) / 2;
    if(a[mid] == x){
        if(mid == e || a[mid+1] != x){
            v.push_back(mid);
            return;
        }
        else{
            gg(a,mid+1,e,x,v);
        }
    }

    if(x>a[mid]){
        gg(a,mid+1,e,x,v);
    }
 
    else{
        gg(a,s,mid-1,x,v);
    }
}


void binary(vector<int> a,int s,int e,int x,vector<int> &v){
        int mid = (s+e)/2;
        if(mid == s){
            if(a[mid] == x){
                v.push_back(mid);
                // gg(a,s,e,x,v);
            }
            else{
                v.push_back(-1);
                v.push_back(-1);
            }
            return;
        }
        if(x>a[mid]){
            binary(a,mid+1,e,x,v);
        }
        else{
            binary(a,s,mid-1,x,v);
        }
    }

int main(){
    int a;cin>>a;
    vector<int> vv(a);
    for (int i = 0; i < a; i++)
    {
        cin>>vv[i];
    }
    int x;cin>>x;
    vector<int> v;
    binary(vv,0,a-1,x,v);

    for (int i : v)
    {
        cout<<i;
    }
    
    return 0;
}




// 852 peak index in mountain array
#include<bits/stdc++.h>
using namespace std;
void binary(vector<int> &v,int s,int e){
if(s>e){
    cout<<"not found"<<endl;
    return;
}

int mid = (s+e)/2;
if(v[mid-1] < v[mid] && v[mid] > v[mid+1]){
    cout<<v[mid]<<endl;
    return;
}
if(v[mid] > v[mid+1]){
    binary(v,s,mid);
}
else{
    binary(v,mid,e);
}


}


int main(){
    // int a;cin>>a;
    // vector<int> vv(a);
    // for (int i = 0; i < a; i++)
    // {
    //     cin>>vv[i];
    // }
    vector<int> vv = {18,29,38,59,98,100,99,98,90};
    int a  = vv.size();
    binary(vv,0,a-1);

    return 0;
} 