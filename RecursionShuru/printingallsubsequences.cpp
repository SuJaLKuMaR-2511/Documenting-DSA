#include <bits/stdc++.h>
using namespace std;

void display(vector<int> ans){
    for(auto x : ans){
        cout << x << " ";
    }

    cout << endl;
}

int func(int i, vector<int>& arr, vector<int> ans, int n, int cnt){
    if(i >= n){
        cnt++;
        display(ans);
        return 1;
    }

    ans.push_back(arr[i]);
    int take = func(i+1, arr, ans, n, cnt);
    ans.pop_back();
    int notTake = func(i+1, arr, ans, n, cnt);

    return take + notTake;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Enter elements : " << endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int cnt = 0;
    cnt = func(0, arr, {}, n, cnt);
    cout << "number of subsequences : " <<  cnt << endl;

    return 0;
}