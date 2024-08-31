// Aashna has her maths test tomorrow. She needs to find the container with maximum water.
// Given N non-negative integers a_1, a_2, ..., a_n where each represents a point at coordinate (i, a_i) . N vertical lines are drawn such that the two endpoints of line i is at (i, a_i) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

// Input:
// The first line of input contains an integer T denoting the number of test cases. Each test case contains an integer N followed by N space separated integers.


// Output:
// For each test case, the output is the integer denoting the maximum area of water that can be contained ( maximum area instead of maximum volume as working with 2D)

// Constraints:
// 1<=T<=100
// 2<=N<=50

// Time Limit:
// 1 sec

// Example 1:
// Input
// 2
// 4
// 1 5 4 3
// 5
// 3 1 2 4 5

// Output
// 6
// 12

// Sample I/O Explanation:
// 1. 5 and 3 are distance 2 apart. So the size of the base = 2. 
// Height of container = min(5, 3) = 3. So total area = 3 * 2 = 6. 2. 5 and 3 
// are distance 4 apart. So the size of the base = 4. Height of container = min(5, 3) = 3.
//  So total area = 4 * 3 = 12.

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


// Anil is working in a Stock Exchange. He has a series of n daily price quotes for a stock and he needs to calculate the span of stock’s price for all n days.
// The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
// For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, N is the size of the array. The second line of each test case contains N input C[i].

// Output:
// For each testcase, print the span values for all days.

// Constraints:
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 200
// 1 ≤ C[i] ≤ 800

// Time Limit:
// 1 sec

// Example 1:
// Input
// 2
// 7
// 100 80 60 70 60 75 85
// 6
// 10 4 5 90 120 80

// Output
// 1 1 1 2 1 4 6
// 1 1 2 4 5 1
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void calculateB(int n, vector<int> a, vector<int> &b) {
    vector<int> s;
    for(int i =0;i<n;i++){
        if(i == 0){
            s.push_back(i);
            b[i] = 1;
        }
        else{
            
            if(a[s.back()] > a[i]){
                
                b[i] = i-s.back();
                s.push_back(i);
            }
            else{
                while(a[s.back()] > a[i]){
                    s.pop_back();
                }
                b[i] = i-s.back();
                s.push_back(i);
            }
        }
    }
}

//Do not edit this part of code 
 int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        // int a[n], b[n];
        std::vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        calculateB(n, a, b);
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}