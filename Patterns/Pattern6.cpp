/*
Pattern 6
Platform: TUF
Topic: Patterns

Approach:
Use two nested loops.
Outer loop → controls the number of elements in each row.
Inner loop → prints numbers from 1 to i.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

//added these just to remove the red errors
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i = n; i > 0; i--) {
            for(int j = i; j > 0; j--) {
                cout << i - j + 1;
            }
            cout << endl;
        }
    }
};