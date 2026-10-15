#include <bits/stdc++.h>
using namespace std;

void func(int cnt){
    if(cnt == 7){
        return;
    }
    
    cout << cnt << endl;

    func(++cnt);
}

int main(){
    int cnt = 0;

    func(cnt);

    return 0;
}