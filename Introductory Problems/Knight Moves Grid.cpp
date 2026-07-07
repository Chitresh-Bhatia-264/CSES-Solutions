#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

     vector<vector<int>> dist(n, vector<int>(n, -1));


      vector<pair<int,int>> moves = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };


 queue<pair<int,int>> q;

    dist[0][0] = 0;
    q.push(make_pair(0, 0));

    while (!q.empty()) {

        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (int i = 0; i < moves.size(); i++) {

            int nx = x + moves[i].first;
            int ny = y + moves[i].second;

            if (nx >= 0 && nx < n && ny >= 0 && ny < n 
                && dist[nx][ny] == -1) {

                dist[nx][ny] = dist[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}







