#include<bits/stdc++.h>
using namespace std;

vector<string>board(8);
int ans=0;


bool check(int row,int col){
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }


    }


     for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < 8; i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}

void func(int row){
    if(row==8){
        ans++;
        return;
    }
    for(int col=0;col<8;col++){
        if (board[row][col] == '*')
            continue;

         if (check(row, col)) {
            board[row][col]='Q';
            func(row+1);
            board[row][col]='.'; //backtrack 
        }


    }

}

int main(){
    for (int i = 0; i < 8; i++)
        cin >> board[i];

    func(0);

    cout << ans;
}