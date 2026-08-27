#include <bits/stdc++.h>
using namespace std;

void printDisplay(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// brute-force approach - Time COmplexity = Big O(n²)...
void moveZeroes(vector<int> &arr, int n){
    int count = 0;
    int i=0;
    while(i<n){
        if(arr[i] == 0){
            count++;
        }
        i++;
    }

    while(count--){
        for(int i=0;i<n-1;i++){
            if(arr[i] == 0){
                swap(arr[i], arr[i+1]);
            }
            cout << "Step " <<i+1 << endl;
            printDisplay(arr, n);
        }
    }
}

//better/Optimal approach - Time Complexity = O(n)...
void moveZeroesOptimal(vector<int> &arr, int n){
    int id = 0;

    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[id]);
            id++;
        }
    }
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
    printDisplay(arr, n);

    // moveZeroes(arr, n);
    moveZeroesOptimal(arr, n);

    cout << "After Moving Zeroes : " << endl;
    printDisplay(arr, n);

    return 0;
}