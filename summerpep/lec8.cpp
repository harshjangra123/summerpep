#include<bits/stdc++.h>
using namespace std;

bool ispossiblecse(vector<int> &v,int mid,int m){
    int nostudent = 1;
    int sum = 0;
    for(int i = 0;i<v.size() ;i++){
        if(sum+v[i] > mid){
            nostudent++;
            sum = v[i];
        }
        else{
            sum+=v[i];
        }
    }
    if(nostudent > m){
        return false;
    }
    else{
        return true;
    }
}


void findPages(vector<int>& arr, int n, int m) {
    
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
    }
    
    int result = INT_MAX;

    int s = 0;
    int e = sum;

    
    while (s<=e)
    {
        int mid = (s+e) /2;
        if(ispossiblecse(arr,mid,m)){
            result = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        
    }
    cout<<result;

}

int main(){

    int n,m;
    cin >> n>>m;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    findPages(v,n,m);

    return 0;
}


// painters partition problem


// aggressive cows problem
#include<bits/stdc++.h>
using namespace std;

bool ispossiblecse(vector<int> &v,int mid,int m){
    int cows = 1;
    int lastcowposition = v[0];
    for(int i = 1;i<v.size();i++){
        if(v[i] - lastcowposition >= mid){
            cows++;
            lastcowposition = v[i];
        }
        if(cows>=m){
            return true;
        }
    }
    return false;
}


void mindisbwcows(vector<int>& arr, int n, int m) {
    sort(arr.begin(),arr.end());
    
    
    int result;

    int s = 1;
    int e = arr[n-1]-arr[0];

    
    while (s<=e)
    {
        int mid = (s+e) /2;
        if(ispossiblecse(arr,mid,m)){
            result = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        
    }
    cout<<result;

}

int main(){

    int n,m;
    cin >> n>>m;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    mindisbwcows(v,n,m);

    return 0;
}