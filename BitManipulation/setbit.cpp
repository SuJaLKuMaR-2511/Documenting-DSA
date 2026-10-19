#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i;
    cin >> i;

    // set the ith bit 
    // n = (n | (1 << i));

    // clear the ith bit
    // n = n & ~(1 << i);

    // toggle the ith bit
    n = n ^ (1<<i);

    cout << n << endl;

    return 0;
}