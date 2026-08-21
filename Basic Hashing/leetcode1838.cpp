#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "n : ";
    cin >> n;
    
    vector<int> nums;
    unordered_map<int, int> mpp;
    cout << "arr elements : " << endl;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
        mpp[x]++;
    }
    
    int k;
    cout << "k : ";
    cin >> k;

    int max_ele = INT_MIN;
    for(auto i : nums){
        if(i > max_ele){
            max_ele = i;
        }
    }

    while(k--){
         
    }

    return 0;
}