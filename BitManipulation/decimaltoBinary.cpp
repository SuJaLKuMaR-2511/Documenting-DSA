#include <bits/stdc++.h>
using namespace std;

string Decimal2Binary(int n){
    string s = "";

    while(n != 0){
        if(n%2 == 1) s+='1';
        else s+='0';\

        n /= 2;
    }

    reverse(s.begin(), s.end());
    return s;
}

int Binary2Decimal(string s){
    int ans = 0;
    int len = s.size();
    int power = 1;

    for(int i=len-1; i>=0;i--){
        if(s[i] == '1'){
            ans += power;
        }

        power *= 2;
    }

    return ans;
}

int main(){
    int n;
    cout << "n : ";
    cin >> n;

    string s;
    cout << "s : ";
    cin >> s;

    int x = Binary2Decimal(s);
    cout << "x: " << x << endl;

    string ans = Decimal2Binary(n);
    cout << "ans: " << ans << endl;

    return 0;
}