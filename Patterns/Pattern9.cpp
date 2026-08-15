/*
Pattern 9
Platform: TUF
Topic: Patterns

Approach:
Use a single loop for all 2*n-1 rows.
The number of stars increases until the middle row
and then decreases.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

//added these just to remove the red errors
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        for(int i = 1; i <= 2*n - 1; i++) {

            int stars = i <= n ? 2*i - 1 : 2*(2*n - i) - 1;
            int spaces = i <= n ? n - i : i - n;

            for(int j = 0; j < spaces; j++) {
                cout << " ";
            }

            for(int j = 0; j < stars; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};