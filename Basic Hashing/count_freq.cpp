#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,1,3};
    
    unordered_map<int, int> freq;
    for(auto x : nums){
        freq[x]++;
    }

    cout << "[";
    int count = 0;
    for(auto x : freq){
        cout << "[" << x.first << "," << x.second << "]";
        count++;
        if(count < freq.size()) cout << ",";
    }
    cout << "]";

    return 0;
}