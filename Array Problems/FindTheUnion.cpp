#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> arr1, vector<int> arr2, int n1, int n2){
    
}

int main(){
    int n1, n2;
    cout << "n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    cout << "arr1 elements : " << endl;
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "arr2 elements : " << endl;
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    vector<int> arr = unionArray(arr1, arr2, n1, n2);

    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}