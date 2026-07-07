#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if ((i + j) % 2 == 0) {
                // Use A and B
                if (grid[i][j] == 'A')
                    grid[i][j] = 'B';
                else
                    grid[i][j] = 'A';
            }
            else {
                // Use C and D
                if (grid[i][j] == 'C')
                    grid[i][j] = 'D';
                else
                    grid[i][j] = 'C';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}