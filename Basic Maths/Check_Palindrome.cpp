/*
Problem: Palindrome Number
Platform: LeetCode
Topic: Basic Maths / Digit Manipulation

Approach:
Store the original number, reverse the number digit by digit,
and compare the reversed number with the original.

Negative numbers are not palindromes.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int org = x;

        if(x < 0)
            return false;

        while(x != 0) {
            int ld = x % 10;
            rev = rev * 10 + ld;

            x /= 10;
        }

        return rev == org;
    }
};