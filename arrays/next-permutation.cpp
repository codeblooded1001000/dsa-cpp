#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums){
    int j = -1;
    int n = nums.size();
    for(int i = n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            j = i;
            break;
        }
    }

    if(j==-1){
        reverse(nums.begin(), nums.end());
        return;
    }

    for(int i = n-1; i>=j; i--){
        if(nums[i] > nums[j]){
            swap(nums[j], nums[i]);
            break;
        }
    }

    reverse(nums.begin() + j + 1, nums.end());

}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);

//  next_permutation(nums.begin(), nums.end());
   nextPermutation(nums);

    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << ", ";
    }

    cout << endl;

    return 0;
}
