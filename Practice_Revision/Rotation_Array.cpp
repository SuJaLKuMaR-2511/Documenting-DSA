#include <bits/stdc++.h>
using namespace std;

void rotatedArray(vector<int>& arr, int k){
    int n = arr.size();

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k, arr.end());
}

void printArray(vector<int>& arr){
    for(auto x : arr){
        cout << x << " ";
    }cout << endl;
}

int main(){
    vector<int> arr = {1,3,4,2,5,6,7};
    cout << "Original Array: ";
    printArray(arr);

    rotatedArray(arr, 4);

    cout << "Rotated Array: ";
    printArray(arr);
    

    return 0;
}