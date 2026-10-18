#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
}

void func(int i, vector<int>& arr, vector<int> ans, int n, int k, int sum){
    if(i == n){
        if(sum == k)
            display(ans);
        return;
    }

    // pick
    ans.push_back(arr[i]);
    sum += arr[i];
    func(i+1, arr, ans, n, k, sum);
    ans.pop_back();
    sum -= arr[i];
    func(i+1, arr, ans, n, k, sum);
}

int main(){
    int n;
    cout << "n : ";
    cin >> n;

    cout << "Enter elements : " << endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "k : ";
    cin >> k;

    int sum = 0;
    vector<int> ans;
    func(0, arr, ans, n, k, sum);

    return 0;
}