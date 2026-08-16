// My Code : 
#include <bits/stdc++.h>
using namespace std;

int GCD(int n1,int n2) {
        int ans=INT_MIN;
        int n = max(n1,n2);

        for(int i=1;i*i<=n;i++){
                if(n1%i==0 && n2%i==0){
                    ans = max(ans, i);
                }
        }
        return ans;
    }

int main()
{
    int n1,n2;
    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;
    
    cout << GCD(n1, n2);
    
    return 0;
}

// Using Euclid's Algorithm : 
class Solution {
public:
    int GCD(int n1,int n2) {
        while(n2!=0){
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }

        return n1;
    }
};