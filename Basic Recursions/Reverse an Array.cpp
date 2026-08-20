#include <bits/stdc++.h>
using namespace std;

// Using 2 Pointers
void reverse(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    
    swap(arr[l], arr[r]);
    reverse(arr, l+1, r-1);
}

// Using Single Pointer 
void f(int arr[], int i, int n){
    if(i>=n/2){
        return;
    }
    
    swap(arr[i], arr[n-i-1]);
    f(arr, i+1, n);
}


int main(){
    int n;
    cout << "n : ";
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    reverse(arr, 0, n-1);
    f(arr, 0, n);
    
    for(auto x : arr){
        cout << x << " ";
    }

    return 0;
}