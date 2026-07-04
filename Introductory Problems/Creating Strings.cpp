#include <bits/stdc++.h>
using namespace std;

map<char,int> freq;
vector<string> ans;
string current;

void backtrack(int n) {
    if (current.size() == n) {
        ans.push_back(current);
        return;
    }

    for (auto &p : freq) {
        if (p.second > 0) {
            p.second--;
            current.push_back(p.first);

            backtrack(n);

            current.pop_back();
            p.second++;
        }
    }
}

int main() {
    string s;
    cin >> s;

    for (char c : s) freq[c]++;

    backtrack(s.size());

    cout << ans.size() << "\n";
    for (auto &str : ans) {
        cout << str << "\n";
    }

    return 0;
}