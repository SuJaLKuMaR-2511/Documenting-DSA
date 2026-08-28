#include <bits/stdc++.h>
using namespace std;

// void printArray(vector<int> arr, int n){
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int removeDuplicates(vector<int> &arr, int n){
//     int j=1;
//     for(int i=0;i<n;i++){
//         if(arr[j] == arr[i]){
//             arr.erase(arr.begin() + j);
//             i--;
//             n--;
//         }else{
//             j++;
//         }
//     }

//     return arr.size();
// }

// int main(){
//     int n;
//     cout << "n: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter elements: " << endl;    
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << "Given array : " << endl;
//     printArray(arr, n);

//     // arr.erase(arr.begin()+1);
//     // cout << "--";
//     // cout << arr[1];

//     int k = removeDuplicates(arr, n);

//     cout << "Removed: " << endl;
//     for(auto it : arr){
//         cout << it << " ";
//     }
//     cout << endl;

//     cout << "k : " << k << endl;

//     return 0;
// }

// ---------------------------------------------
// DIDN'T WORK
// ---------------------------------------------

// Brute-Force Approach
// int main(){
//     int n=7;
//     int arr[n] = {1,1,2,2,2,3,3};

//     set<int> st; //Set is a container which contains only unique elements in it...
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]); //insert function itself takes time complexity of Big O(nlogn)...
//     }

//     //now put all these elements in the array...
//     int index = 0;
//     for(auto it : st){
//         arr[index] = it;
//         index++;
//     }

//     for(auto it : arr){
//         cout << it << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Optimal Approach is Two-Pointers 
int main(){
    int n; 
    cout << "n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int id = 0;
    for(int i=1;i<n;i++){
        if(arr[i] == arr[id]){

        }else{
            id++;
            swap(arr[id], arr[i]);
        }
    }

    cout << "k = " << ++id << endl;


    return 0;
}