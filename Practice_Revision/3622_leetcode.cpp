#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num = n;
    int sum = 0;
    int product = 1;
    
    while(n!=0){
        int ld = n%10;
        sum += ld;
        product *= ld;
        n /= 10;
    }

    cout << "n : " << n <<endl;
    cout << "sum : " << sum <<endl;
    cout << "product : " << product <<endl;

    if(num % (sum+product) == 0){
        cout << "true";
    }else {
        cout << "false";
    }

    return 0;
}