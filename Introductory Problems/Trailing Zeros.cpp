// A trailing zero comes from 10 = 2 × 5
// So you said: “2 × 5 = 1 zero” → correct idea

// there are way more 2s than 5s
// so the number of 10s is determined ONLY by the number of 5s


// Number of trailing zeros in n! =

// count of factors of 5+count of factors of 25+count of factors of 125+…



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long count = 0;

    for (long long i = 5; i <= n; i *= 5) {
        count += n / i;
    }

    cout << count << "\n";
}