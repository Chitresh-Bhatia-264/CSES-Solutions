#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long k;
        cin >> k;

        long long digit = 1;
        long long first = 1;

        while (k > digit * 9 * first) {
            k -= digit * 9 * first;
            digit++;
            first *= 10;
        }

        long long num = first + (k - 1) / digit;

        int pos = (k - 1) % digit;

        cout << to_string(num)[pos] << '\n';
    }

    return 0;
}



// String hai:

// 123456789101112131415...

// Hume k-th position ka digit nikalna hai.

// Example:

// k = 15

// Toh hume 15th digit chahiye.

// Step 1: String ko groups mein tod do

// Numbers ko unki length ke hisaab se divide karo.

// 1 digit numbers:
// 1 2 3 4 5 6 7 8 9

// Total digits:

// 9 numbers × 1 digit = 9 digits

// Positions:

// 123456789
// 2 digit numbers:
// 10 11 12 13 ... 99

// Total numbers:

// 90

// Har number mein:

// 2 digits

// Total:

// 90 × 2 = 180 digits

// Ab hume pata karna hai:

// k kis group mein hai?

// Example k = 15

// Pehle group mein:

// 1-9

// sirf 9 digits hain.

// Kya:

// 15 > 9?

// Haan.

// Matlab answer 1-digit group mein nahi hai.

// Toh:

// k = k - 9
// k = 15 - 9
// k = 6

// Ab hume 2-digit numbers ke andar 6th digit chahiye.

// Step 2: Number find karo

// 2-digit numbers:

// 10 11 12 13 ...

// Positions:

// 10 -> 1 0
// 11 -> 1 1
// 12 -> 1 2

// 6th digit:

// 1 0 1 1 1 2
//           ^

// Answer = 2

// Ab code mein ye kaise hota hai:

// Group skip karna:
// while(k > digit * 9 * first)

// Ye check karta hai:

// "Current group ke total digits se k bada hai kya?"

// Example:

// 1 digit group:

// digit = 1
// first = 1

// total = 1*9*1 = 9

// Agar:

// k > 9

// toh ye group skip.

// Group change:
// k -= digit * 9 * first;

// Pehle wale digits hata diye.

// digit++;

// 1 digit se 2 digit par chale gaye.

// first *= 10;

// Starting number:

// 1 → 10 → 100 → 1000
// Jab group mil gaya:

// Example:

// k = 6
// digit = 2
// first = 10

// Number:

// num = first + (k-1)/digit

// Calculation:

// 10 + (6-1)/2
// 10 + 2
// = 12

// Matlab 6th digit 12 ke andar hai.

// Position:

// (k-1)%digit
// 5%2 = 1

// Index 1:

// 12
//  ^

// Answer:

// 2