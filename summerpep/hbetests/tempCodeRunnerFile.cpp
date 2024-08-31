#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int getMaxArea(int a[], int n) {
//     //Write your code here
//     int maxa = INT_MIN;
//     for(int i =0;i<n;i++){
//         for(int j = i;j<n;j++){
//             int l = min(a[i],a[j]);
//             int b = abs(i-j);
//             int area = l*b;
//             if(area>maxa){
//                 maxa = area;
//             }
//         }
//     }
//     return maxa;
// }


void getMaxArea(int a[], int n) {
    //Write your code here
    int maxa = INT_MIN;
    int i =0;
    int j = n;
    for (int i = 0; i < n; i++)
    {
        int l = min(a[i],a[j]);
        
        int b = abs(j-i);
        int area = l*b;
        if(area>maxa){
            maxa = area;
        }
        // cout<<area<<" ";
        if(a[i] < a[j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<maxa<<""; 
    return;
    // return maxa;
}

//Do not edit this part of code
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // cout << getMaxArea(a, n) << "\n";
        getMaxArea(a,n);
    }
    
    return 0;
}
