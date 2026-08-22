#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << " n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Array Elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // nums = [2, 1, 5, 1, 3, 2]

    int k;
    cout << " : ";
    cin >> k;

    int l=0, r=0;
    int sum = 0;
    int max_sum = INT_MIN;
    
    while(r < n){
        r++;
        while(r-l+1==k){
            for(int i=l; i<=r;i++){
                sum += arr[i];
            }
            max_sum = max(max_sum, sum);
            
        }
        
    }




    return 0;
}