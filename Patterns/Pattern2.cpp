/*
Pattern 2
Platform: TUF
Topic: Patterns

Approach:
Use two nested loops.
Outer loop → rows
Inner loop → prints stars equal to the row number.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    void pattern2(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};