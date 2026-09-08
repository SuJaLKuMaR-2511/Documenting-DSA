#include <bits/stdc++.h>
using namespace std;

// TC : O(n) or O(nlogn) based on map taken
// SC : O(N) map 
int subarrayWithSumK(vector<int>& arr, int n, int k){
    int xr = 0;
    map<int, int> mpp; // SC : O(n) 
    mpp[xr]++; // {0, 1}
    int cnt = 0;

    for(int i=0;i<n;i++){
        xr = xr ^ arr[i];
        // k 
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }

    return cnt;
}

int main(){
    int n, k ;
    cout << "n: ";
    cin >> n;
    cout << "k: ";
    cin >> k;


    vector<int> arr(n);
    cout << "Enter elements : " <<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int ans = subarrayWithSumK(arr, n, k);
    cout << "Number of subarrays with xor K = " << ans;

    return 0;
}