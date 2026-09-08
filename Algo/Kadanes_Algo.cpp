// Kadane's Algorithm says that if the contribution in sum is negative...do not consider it because it is insignificant for max sum ...so drop the sum to 0...and keeps on adding the elements in sum variable until it is adding value of even 1 ...

// [-2, -3, 4, -1, -2, 1, 5, -3] => [4, -1, -2, 1, 5] => {maximum subarray sum = 7}

#include <bits/stdc++.h>
using namespace std;

void maxSubSum(vector<int>& arr, int n){
    int maxi = INT_MIN;
    int sum = 0;

    int start=0, ansStart=0, ansEnd=0;

    for(int i=0;i<n;i++){
        if(sum == 0) {
            start = i;
        }
        sum += arr[i];
        
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxi << endl;

    cout << "Maximum Subarray : ";
    for(int i=ansStart;i<=ansEnd;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Array elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    maxSubSum(arr, n);

    return 0;
}