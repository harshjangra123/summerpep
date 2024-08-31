#include<bits/stdc++.h>
using namespace std;

// bool issafe(vector<vector<char>> &board,int r,int c){
//     for(int i = r-1;i>=0;i--){
//         if(board[i][c] == 'Q'){
//             return false;
//         }
//     }

//     for(int i = r-1,j = c-1; i >= 0 && j>= 0;i--,j--){

//     }
// }

void print(vector<vector<char>> &v){
    for(int i =0;i<v.size();i++){
        for(int j = 0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void nqueens(vector<vector<char>> &board,int n){
    if(n == board.size()){
        print(board);
        return;
        
    }

    for (int i = 0; i < board.size(); i++)
    {
        board[n][i] = 'Q';
        nqueens(board,n+1);
        board[n][i] = 'x';
    }
    
}
int main(){
    int n;cin>>n;
    vector<vector<char>> board(n,vector<char>(n,'x'));
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                board[i][j] = 'x';
            }
    }

    
    nqueens(board,0);
    return 0;
}