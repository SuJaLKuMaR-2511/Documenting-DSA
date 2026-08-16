/*
Problem: Reverse Integer
Platform: LeetCode
Topic: Basic Maths / Digit Manipulation

Approach 1: Using int with Overflow Check
------------------------------------------
Extract the last digit using x % 10 and build the reversed number.
Before multiplying rev by 10, check whether it will exceed
the range of a 32-bit signed integer.

Time Complexity: O(log10(n))
Space Complexity: O(1)


Approach 2: Using long long
---------------------------
Use a long long variable for rev so that intermediate values
can safely exceed the int range. After reversing, check whether
the result lies within the valid int range.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include <climits>

class Solution {
public:

    // Approach 1: int + overflow checking
    int reverse(int x) {
        int rev = 0;

        while(x != 0) {
            int digit = x % 10;
            x /= 10;

            if(rev > INT_MAX / 10 ||
               (rev == INT_MAX / 10 && digit > 7))
                return 0;

            if(rev < INT_MIN / 10 ||
               (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }


    // Approach 2: long long
    int reverseUsingLongLong(int x) {
        long long rev = 0;

        while(x != 0) {
            int digit = x % 10;

            rev = rev * 10 + digit;

            x /= 10;
        }

        if(rev > INT_MAX || rev < INT_MIN)
            return 0;

        return (int)rev;
    }
};