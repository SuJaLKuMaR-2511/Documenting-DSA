#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void print(int i, int n){
        if(i>n){
            return;
        }

        cout << i << endl;

        print(i+1, n);
    }
    
    void printNumbers(int n) {
        print(1,n);
    }
};