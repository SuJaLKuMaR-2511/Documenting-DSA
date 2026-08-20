#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "s : ";
    cin >> s;

    int hash[256] = {0};
    for(int i=0;i<s.length();i++){
        int idx = s[i] - 'a';
        hash[idx]++;
    }

    int q;
    cout << "q : ";
    cin >> q;

    while(q--){
        char x;
        cout << "x : ";
        cin >> x;
        cout << hash[x-'a'] << endl;
    }

    return 0;
}