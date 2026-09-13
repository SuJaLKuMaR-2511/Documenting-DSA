#include <bits/stdc++.h>
using namespace std;

// Floor : The floor of x is the largest element in the array which is smaller than or equal to x...
// Ceil : Basically your Lower Bound..., The ceiling of x is the smallest element in the array greater than or equal to x...

int floor(vector<int>& nums, int x){
    int n = nums.size();

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(nums[mid] <= x){
            ans = nums[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}

int ceil(vector<int>& nums, int x){
    int n = nums.size();

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(nums[mid] >= x){
            ans = nums[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

vector<int> getFloorAndCeil(vector<int> nums, int x){
    int a = floor(nums, x);
    int b = ceil(nums, x);

    return {a, b};
}

int main(){
    
    vector<int> nums = {1, 2, 4, 4, 4, 6, 8, 10};
    int x = 5;

    vector<int> temp = getFloorAndCeil(nums, x);

    for(auto x : temp){
        cout << x << ", "; 
    }

    return 0;
}