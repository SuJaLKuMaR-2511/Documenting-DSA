#include <bits/stdc++.h>
using namespace std;


int countOccurrences(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;
        int first = -1;

        // first occurrence of x
        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] >= target){
                if(nums[mid] == target) first = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        low = 0;
        high = n - 1;
        int last = -1;

        // last occurrence of x
        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] <= target){
                if(nums[mid] == target) last = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return last - first + 1;
    }

int main(){
    vector<int> arr = {0, 0, 1, 1, 1, 2, 3};
    int target = 1;

    int cnt = countOccurrences(arr, target);
    cout << "Count: " << cnt;

    return 0;
}