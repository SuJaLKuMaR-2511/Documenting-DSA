#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target){
    int n = arr.size();

    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low<=high){
        int mid = (low + high)/2;

        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int upperBound(vector<int>& arr, int target){
    int n = arr.size();

    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low<=high){
        int mid = (low + high)/2;

        if(arr[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {1, 1, 2, 3, 5, 5, 5, 8};

    int lb = lowerBound(arr, 5);
    int ub = upperBound(arr, 5);

    cout << "Lower Bound: " << lb << endl;
    cout << "Upper Bound: " << ub << endl;

    return 0;
}