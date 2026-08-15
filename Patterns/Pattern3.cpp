/*
Pattern 3
Platform: TUF
Topic: Patterns

Approach:
Use two nested loops.
Outer loop → rows
Inner loop → prints numbers from 1 to i+1.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

//added these just to remove the red errors
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern3(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << j + 1;
            }
            cout << endl;
        }
    }
};