#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int n, int x){
    vector<int> temp(n);

    // Big O(n);
    for(int i=0;i<n;i++){
        int id = (i+x)%n;
        temp[id] = arr[i];
    }

    // Big O(n) 
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

    //Big O(n+n) = O(2n) = O(n);
}

bool checkArrayisSorted(vector<int> &arr, int n){
    int smallest = 101; //INT_MAX {check constraints}
    int idx = 0;

    // find the smallest element and store its index : so that we know how much we have to shift/rotate to make the smallest element place in first positon
    // Big O(n)
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            idx = i;
        }
    }

    int x = n-idx; // we have the number of shifts requires to rotate the array...

    rotateArray(arr, n, x); // BIg O(n)

    //Big O(n);
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }else{
            cout << "False";
            return false;
        }
    }
    cout << "True";
    return true;
}

void printArray(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "n : ";
    cin >> n;

    cout << "Enter elements: " << endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Original Array : " << endl;
    printArray(arr, n);

    checkArrayisSorted(arr, n);



    return 0;
}