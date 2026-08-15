/*
Pattern 8
Platform: TUF
Topic: Patterns

Approach:
Use three loops.
First inner loop → prints increasing leading spaces.
Second inner loop → prints decreasing odd number of stars.

For each row:
Spaces = n - i
Stars = 2*i - 1

Time Complexity: O(n²)
Space Complexity: O(1)
*/

//added these just to remove the red errors
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for(int i = n; i > 0; i--) {
            for(int j = n - i; j > 0; j--) {
                cout << " ";
            }

            for(int k = 2*i - 1; k > 0; k--) {
                cout << "*";
            }

            cout << endl;
        }
    }
};