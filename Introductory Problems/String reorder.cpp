#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a valid rearrangement is possible with the remaining characters
bool isValid(const vector<int>& count, int rem, int last_idx) {
    int max_allowed = (rem + 1) / 2;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max_allowed) return false;
        // If a character takes up exactly the maximum allowed slots, 
        // and it matches the last placed character, it's a dead end.
        if (count[i] == max_allowed && count[i] > 0 && i == last_idx && rem % 2 == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'A']++;
    }

    // Quick initial check
    if (!isValid(count, n, -1)) {
        cout << -1 << "\n";
        return 0;
    }

    string result = "";
    result.reserve(n);
    int last_idx = -1;

    for (int rem = n; rem > 0; rem--) {
        int chosen_idx = -1;

        // Try to pick the lexicographically smallest valid character
        for (int i = 0; i < 26; i++) {
            if (count[i] > 0 && i != last_idx) {
                // Tentatively decrement and check if the remaining state stays valid
                count[i]--;
                if (isValid(count, rem - 1, i)) {
                    chosen_idx = i;
                    break; // Found the lexicographically smallest valid choice!
                }
                count[i]++; // Backtrack if it leads to an invalid state
            }
        }

        if (chosen_idx == -1) {
            cout << -1 << "\n";
            return 0;
        }

        result += (char)('A' + chosen_idx);
        last_idx = chosen_idx;
    }

    cout << result << "\n";
    return 0;
}