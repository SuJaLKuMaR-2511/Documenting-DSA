#include <bits/stdc++.h>
using namespace std;

int secondlargestelement_brute(vector<int> &arr){
    //sort the array first - time complexity : Big O(nlog(n))
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int largest = arr[n-1];
    int second = -1;

    // Big O(n)
    for(int i=n-2;i>=0;i--){
        if(arr[i] != largest){
            second = arr[i];
            return second;
        }
    }
}

int secondlargestelement_better(vector<int> &arr){
    int n = arr.size();

    // find the largest element in the array 
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    // now traverse the array and ask each element if they are larger than second_largest(initialized to first element) and is not equivalent to the largest ...then assign arr[i] to second_largest...
    int second = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    return second;
}

int secondlargestelement_optimal(vector<int> &arr){
    int n = arr.size();

    int largest = arr[0];
    int slargest = -1;

    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }

    return slargest;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << secondlargestelement_brute(arr);
    cout << secondlargestelement_better(arr);
    cout << secondlargestelement_optimal(arr);

    return 0;
}