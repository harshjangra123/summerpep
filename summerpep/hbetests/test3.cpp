// Problem Statement:
// Subhash has an array A=[1, 2, 3 ... N] and a permutation P of A. In one operation he "permutes" A 
// with respect to P (ie. all elements A[i] change simultaneoulsy to A[P[i]] in one operation. 1<=i<=N). 
// Subhash wants to know the minimum number of operations he needs to apply to get back the original 
// array A=[1, 2, 3 ... N]. Since the answer can be large, output the answer modulo 109+7.

// Note : Subhash needs to apply the operation at least once.

// Input:
// The first line contains a single integer N. The second line contains N space seperated 
// integers denoting the permutation P.

// Output:
// Output a single inetger the answer to the given problem.

// Constraints:
// 1 <= N <= 2*105

// 1 <= Pi <= N. All Pi are distinct.

// Time Limit:
// 1 sec

// Example 1:
// Input
// 3
// 2 3 1

// Output
// 3

// Sample I/O Explanation:
// Initially A=[1, 2, 3] and P=[2, 3, 1]. After 1st operation A becomes [2, 3, 1]. 
// After 2nd operation A becomes [3, 1, 2]. After 3nd operation A becomes [1, 2, 3]. Hence the answer is 3.




// premutations throught recursion
#include <bits/stdc++.h>
using namespace std;

bool isperfect(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] != i+1)
        {
            return 0;
        }
    }
    return 1;
}

// next_permutation(a.begin(),a.end())


int gg(vector<int> &v, int n)
{
    int count = 1;

    for (;;)
    {
        if(isperfect(v,n)){
            break;
        }
        next_permutation(v.begin(),v.end());
        count++;
    }
    return count;
}


// getting all permutation with correct order

int main()
{
    int n = 3;
    vector<int> v = {3, 1, 2};
    cout<<gg(v,n);
    return 0;
}


// KNIGHT COVER
// Problem Statement:
// Given a board of N rows and M columns, place the minimum number of knights such that every cell either contains 
// a knight or is attacked by at least one knight.

// Like in standard chess, a knight attacks every cell that is two squares away horizontally and one square 
// vertically, or two squares vertically and one square horizontally. The complete move therefore looks like
//  the letter "L".

// Input:
// The first line of input contains one number T, the number of test cases. Each test case contains 
// two integers N and M, the dimensions of the board.

// Output:
// For each test case print the minimum number of knights required to cover every cell of the board.
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
// 1 ≤ T ≤ 150
// 1 ≤ N ≤ 3
// 1 ≤ M ≤ 50

// Time Limit:
// 1 sec

// Example 1:
// Input
// 1
// 2 4
// Output
// 4

// Sample I/O Explanation:
// One optimal configuration is: Cells (1, 1), (1, 2), (4, 1) and (4, 2) contain knights. Cell (2, 1) 
// is attacked by the knight in cell (4, 2). Cell (2, 2) is attacked by the knight in cell (4, 1). Cell (3, 1)
//  is attacked by the knight in cell (1, 2). And cell (3, 2) is attacked by the knight in cell (1, 1).
//   So every cell either contains a knight or is attacked by at least one knight, hence this is a valid configuration.
//    There is no valid configuration with fewer knights, and so the answer is 4.
#include<bits/stdc++.h>
using namespace std;

void updatepos(vector<vector<bool>> &board,int i,int j,int n,int m){
    vector<pair<int,int>> pos = {{2,1},{1,2},{2,-1},{1,-2},{-2,-1},{-1,-2},{-2,1},{-1,2}};
    board[i][j] = 1;
    for (auto posi : pos)
    {
        int in = i+posi.first;
        int jn = j+posi.second;
        if(in < n && in>=0 && jn>=0 && jn < m){
        board[in][jn] = 1;
        }
    }
    
}


int allknights(int n,int m){
    vector<vector<bool>> board(n,vector<bool>(m,0));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(board[i][j] == 0){
                count++;
                updatepos(board,i,j,n,m);
            }
        }
        
    }
    
    return count;

}

int main(){
    int n,m;cin>>n>>m;
    cout<<allknights(n,m);
    return 0;
}