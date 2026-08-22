#include <bits/stdc++.h>
using namespace std;


// Big O(n2) to Big O(n) ---added didSwap Flag to check if the swap happened in first complete iteration of outer loop or not....

void bubbleSort(int arr[], int n){
    for(int i=n-1;i>=1;i--){
        int didSwap = 0; //to mark if the swap operation performed or not when completed it's first round...
        for(int j=0; j<i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] =  arr[j+1];
                arr[j+1] = temp;
                didSwap = 1; //if swaps done ever...means it was worst or avg case
            }
        }

        
        cout << "Step " << i-n+2 << " : ";
        for(int k=0;k<n;k++){
            cout << arr[k] << " ";
        }
        cout << endl;

        if(didSwap == 0){
            break;
        }
    }

    cout << "Sorted Array - Bubble Sort : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "n  : ";
    cin >> n;

    int arr[n];
    cout << "Array Input : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    return 0;
}