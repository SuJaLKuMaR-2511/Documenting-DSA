/*
Pattern 5
Platform: TUF
Topic: Patterns

Approach:
Use two nested loops.
Outer loop → starts from n and decreases to 1.
Inner loop → prints stars equal to the current row size.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

//added these just to remove the red errors
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern5(int n) {
        for(int i = n; i > 0; i--) {
            for(int j = i; j > 0; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }
};