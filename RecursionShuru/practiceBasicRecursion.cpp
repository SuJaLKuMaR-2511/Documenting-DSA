#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }

    cout << "Sujal Kumar" << endl;
    print(--n);
}

void from1toN(int m, int n){
    if(m > n){
        return;
    }

    cout << m << endl;
    from1toN(++m, n);
}

void fromNto1(int n){
    if(n == 0){
        return;
    }

    cout << n << endl;
    fromNto1(--n);
}

void backtrack1N(int n){
    if(n == 0){
        return;
    }

    backtrack1N(n-1);

    cout << n << endl;
}

void backtrackN1(int m, int n){
    if(m > n){
        return;
    }

    backtrackN1(m+1, n);

    cout << m << endl;

}

int sumfunc(int sum, int n) {
    if (n < 1) {
        return sum;
    }

    sum += n;
    return sumfunc(sum, n - 1);
}

int main(){

    // print(5);
    // from1toN(1, 7);
    // fromNto1(7);
    // backtrack1N(7);
    // backtrackN1(1, 7);
    cout << sumfunc(0, 5);


    return 0;
}