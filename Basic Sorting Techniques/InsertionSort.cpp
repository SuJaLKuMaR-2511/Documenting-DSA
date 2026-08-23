#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "n : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Original Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        cout << "Steps " << i+1 << " : ";
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
    cout << endl;
    }

    cout << "Insertion Sorted Array : "<< endl;;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}