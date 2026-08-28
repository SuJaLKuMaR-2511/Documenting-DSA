#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
        }
    }

    return -1;
}

int main(){
    int n;
    cout << "n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter target, x : ";
    cin >> x;

    int index = linearSearch(arr, n, x);

    cout << "index : " << index << endl;
    return 0;
}