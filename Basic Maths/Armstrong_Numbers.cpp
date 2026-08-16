/*
Problem: Armstrong Number
Platform: TUF / Practice
Topic: Basic Maths

Approach:
Store the original number.
Repeatedly extract the last digit using x % 10,
cube the digit, and add it to sum.
After processing all digits, compare sum with the original number.

Example:
153 = 1³ + 5³ + 3³
    = 1 + 125 + 27
    = 153

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int x) {
    int sum = 0;
    int org = x;

    while(x != 0) {
        int ld = x % 10;
        sum = sum + (ld * ld * ld);
        x /= 10;
    }

    return sum == org;
}

int main() {
    int x;

    cout << "x = ";
    cin >> x;

    cout << armstrong(x);

    return 0;
}