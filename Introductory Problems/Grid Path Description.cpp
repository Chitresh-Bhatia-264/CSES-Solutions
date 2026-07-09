#include<bits/stdc++.h>
using namespace std;
string s;
bool vis[7][7];
int ans =0;

// u,r,d,l

int dr[]={-1,0,1,0};
int dc[]={0,1,0,-1};

char dir[]={'U','R','D','L'};

void dfs(int r,int c,int idx){
    if(r==6 && c==0){
        if(idx==48) ans++;
        return ;
    }


    if(idx==48) return ;

    if((r==0 || vis[r-1][c]) && (r==6 || vis[r+1][c]) && c>0 && !vis[r][c-1] && c<6 && !vis[r][c+1]) return;

    if ((c == 0 || vis[r][c - 1]) && (c == 6 || vis[r][c + 1]) && r > 0 && !vis[r - 1][c] && r < 6 && !vis[r + 1][c])
        return;

    vis[r][c]=true;

    if(s[idx]!= '?'){
         for (int k = 0; k < 4; k++) {
            if (dir[k] != s[idx]) continue;

            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr < 0 || nr >= 7 || nc < 0 || nc >= 7) break;
            if (vis[nr][nc]) break;

            dfs(nr, nc, idx + 1);
            break;
    }
}
else{
     for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr < 0 || nr >= 7 || nc < 0 || nc >= 7) continue;
            if (vis[nr][nc]) continue;

            dfs(nr, nc, idx + 1);
        }
}
vis[r][c]=false;

}

int main() {
    cin >> s;
    dfs(0, 0, 0);
    cout << ans << "\n";
    return 0;
}
