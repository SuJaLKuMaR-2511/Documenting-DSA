#include <bits/stdc++.h>
using namespace std;

// Brute Force -
// Time Complexity = O(n1logn) + O(n2logn)
// Space Complexity = O(n1+n2) + O(n1+n2)
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> st;
        
        for(int i=0;i<n1;i++){ // O(n1)
            st.insert(nums1[i]); // O(n1logn)
        }
        for(int i=0;i<n2;i++){ // O(n2)
            st.insert(nums2[i]); // O(n2logn)
        }

        vector<int> arr(st.size());
        
        int id=0;
        for(auto it : st){ // O(n1+n2)
            arr[id] = it;
            id++;
        }

        return arr;
    }

// Optimal Approach
void Union_Optimal(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> unionArr;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }else{
            if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
            i++;
        }
    }
    while(j<n2){
        if(unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
            j++;
        }
    }

    for(auto it : unionArr){
        cout << it << " ";
    }
    cout << endl;
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

    // vector<int> arr = unionArray(arr1, arr2);
    Union_Optimal(arr1, arr2);

    return 0;
}