/*
Pattern: Pattern 1
Platform: TUF
Topic: Patterns

Approach:
Use two nested loops.
Outer loop → rows
Inner loop → columns/stars

Time: O(n²)
Space: O(1)
*/

//added these just to remove the red errors
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};