#include <bits/stdc++.h>
using namespace std;

void rotatedarray(vector<int> &arr,int n, int x){
    
    x = x%n; // remove or keep...choice
    vector<int> temp(n);

    for(int i=0;i<n;i++){
        int idx = (i+x)%n;
        // int id = (idx >= n) ? idx%n : idx; 
        temp[idx] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

int main(){
    int n; 
    cout << "n : ";
    cin >> n;

    int x;
    cout << "x : ";
    cin >> x;

    vector<int> arr;
    cout << "Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        int x; 
        cin >> x;
        arr.push_back(x);
    }

    cout << "Original Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    rotatedarray(arr, n, x);

    cout << "Rotated Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}