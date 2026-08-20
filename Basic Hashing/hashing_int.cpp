#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[10] = {0}; // initialize hash array with 0
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "q : ";
    cin >> q;
    while(q--){
        int x;
        cout << "x : ";
        cin >> x;
        cout << " : " << hash[x] << endl;
    }

    return 0;
}