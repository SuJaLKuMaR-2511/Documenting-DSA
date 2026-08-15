/*
Problem: Count Digits
Platform: TUF
Topic: Basic Maths

Approach:
Repeatedly divide n by 10 until it becomes 0.
Each division removes one digit, so count the number of divisions.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int countDigit(int n) {
        if(n == 0) {
            return 1;
        }

        int count = 0;

        while(n != 0) {
            n /= 10;
            count++;
        }

        return count;
    }
};