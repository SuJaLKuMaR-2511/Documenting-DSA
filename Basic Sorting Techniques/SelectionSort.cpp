#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        cout << "Step " << i+1 << ": ";
        for(int i=0;i<n;i++){
        cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << "Final Sorted Array - Selection Sort : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return;
}

int main(){
    int n;
    cout << "n : ";
    cin >> n;

    int arr[n];
    cout << "Array Element: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Original Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionsort(arr, n);

    return 0;

}