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

    int x = 0; // we have the number of shifts requires to rotate the array...
    if(x == idx){
        x++;
    }else{
        x = n-idx;
    }

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

// int main(){
//     int n;
//     cout << "n : ";
//     cin >> n;

//     cout << "Enter elements: " << endl;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << "Original Array : " << endl;
//     printArray(arr, n);

//     checkArrayisSorted(arr, n);



//     return 0;
// }

// --------------------------------------------------------------

// optimal approach and simple solution

// [3,4,5,1,2] - arr

// there is only 1 break in an array if it rotated only..and was sorted before
// if arr[i] > arr[i-1] then it is fine...but when arr[i] !> arr[i-1] then it means there is a break..from where it was shifted...

// here in this example...
// condtion : arr[i] > arr[i-1] : 
// 3 -> 4    [1]
// 4 -> 5    [1]
// 5 -> 1    [0] -- here 1 is not greater than 5 (count++)
// 1 -> 2    [1]

// if count is only 1 or 0 (less than equal to 1) then it means that array can be rotated to its original sorted array...
// but if there is more than 1 breaks ..then the array wasn't sorted and rotation will do nothing to make it sorted

// that means if we rotate the array it will be sorted..we don't need to find how much shifts requires and then rotate it to check if it sorted or not...

// so here is the proper logical and simple solution for the problem no. 1752 on leetcode below: 

bool check(vector<int> &arr){
    int count = 0;
    for(int i=1;i<arr.size();i++){
        if(arr[i] < arr[i-1]){
            count++;
        }
    }

    return count<=1 ? true : false;
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

    cout << "Given Array : " << endl;
    printArray(arr, n);

    cout << check(arr);

    return 0;
}