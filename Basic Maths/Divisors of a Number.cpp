/*
Problem: Find All Divisors
Platform: TUF
Topic: Basic Maths / Divisors

Approach:
Instead of checking every number from 1 to n,
we only iterate from 1 to sqrt(n).

If i divides n, then both i and n/i are divisors.
So we add both divisors at the same time.

Example:
n = 36

i = 1 → 1 and 36
i = 2 → 2 and 18
i = 3 → 3 and 12
i = 4 → 4 and 9
i = 6 → 6

Divisors = [1, 2, 3, 4, 6, 9, 12, 18, 36]

Finally, sort the vector to get divisors in increasing order.

Time Complexity: O(sqrt(n) + k log k)
Space Complexity: O(k)

where k = number of divisors.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> arr;

        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                arr.push_back(i);

                if(i != n / i) {
                    arr.push_back(n / i);
                }
            }
        }

        sort(arr.begin(), arr.end());

        return arr;
    }
};