#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n);
// vector<int> findPeakElement(vector<int>& arr){
//     int n = arr.size();
//     vector<int> temp;
//     for(int i=1;i<n-1;i++){
//         if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
//             temp.push_back(i);
//         }
//     }
//     return temp;
// }

vector<int> findPeakElement(vector<int>& arr){
    int n = arr.size();
    vector<int> temp;
    
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] > arr[mid+1]){
            temp.push_back(mid);
        }
        else{
            low = mid + 1;
        }
    }

    return temp;
}



int main(){
    vector<int> arr = {1,2,1,3,5,6,4};
    // vector<int> arr = {1,2,3,1};

    vector<int> ans = findPeakElement(arr);
    for(auto x : ans){
        cout << x << ", ";
    }cout << endl;

    return 0;
}