/*
Problem: Check Prime Number
Platform: TUF
Topic: Basic Maths / Prime Numbers

Approach:
A prime number has exactly two factors: 1 and itself.

Instead of checking all numbers from 2 to n-1,
we only check up to sqrt(n).

If n has a factor greater than sqrt(n),
then it must also have a corresponding factor
smaller than sqrt(n).

So, if no number from 2 to sqrt(n) divides n,
then n is prime.

Special Cases:
0 and 1 are not prime numbers.

Time Complexity: O(sqrt(n))
Space Complexity: O(1)
*/

class Solution {
public:
    bool solve(int n) {

        if(n == 1 || n == 0)
            return false;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                return false;
            }
        }

        return true;
    }
};