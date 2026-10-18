#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
}

int func(int i, vector<int>& arr, vector<int> ans, int n, int k, int sum){
    if(i == n){
        if(sum == k){
            // display(ans);
            return 1;
        }

        return 0;
    }

    // pick
    ans.push_back(arr[i]);
    sum += arr[i];
    int left = func(i+1, arr, ans, n, k, sum);
    ans.pop_back();
    sum -= arr[i];
    int right = func(i+1, arr, ans, n, k, sum);

    return left + right;
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
    cout << func(0, arr, ans, n, k, sum) << endl;

    return 0;
}