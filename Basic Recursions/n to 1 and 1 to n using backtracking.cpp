#include <bits/stdc++.h>
using namespace std;

// 1 to n - backtracking
void f(int n){
    if(n<1){
        return;
    }
    
    f(n-1);
    cout<<n<<endl;
}

// n to 1 - backtracking
void p(int i, int n){
    if(i>n){
        return;
    }
    
    p(i+1,n);
    cout << i << endl;
}


int main(){
    int n;
    cout << "n : ";
    cin >> n;
    
    f(n);
    p(1,n);
    
    return 0;
}