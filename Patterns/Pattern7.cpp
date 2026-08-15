/*
Pattern 7
Platform: TUF
Topic: Patterns

Approach:
Use three loops.
First inner loop → prints leading spaces.
Second inner loop → prints odd number of stars.

For each row:
Spaces = n - i
Stars = 2*i - 1

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    void pattern7(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = n - i; j > 0; j--) {
                cout << " ";
            }

            for(int k = 1; k <= 2*i - 1; k++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};