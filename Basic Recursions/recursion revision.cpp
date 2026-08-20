#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    
    return n + sum(n-1);
}

void print_names(int n){
    if(n==0){
        return;
    }
    
    cout << "SuJaL" << endl;
    print_names(n-1);
}

void print1ton(int n){
    if(n<1){
        return;
    }
    
    print1ton(n-1);
    cout << n << endl;
}

void printnto1(int i, int n){
    if(i>n){
        return;
    }
    
    printnto1(i+1, n);
    cout << i << endl;
}


int main(){
    int n;
    cout << "n: ";
    cin >> n;
    
    // cout << sum(n);
    // print_names(n);
    // print1ton(n);
    printnto1(1,n);
    return 0;
}