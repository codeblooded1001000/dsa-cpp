#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int target, int n){
        int l = 0, h = n-1;

        while(l <= h){
            int mid = l + (h - l)/2;

            if(arr[mid] == target){
                return mid;
            }else if(arr[mid]>target){
                h = mid - 1;
            }else {
                l = mid+1;
            }
        }
        return -1;
    }

int main(){
  vector<int> nums;
  nums.push_back(2);
  nums.push_back(4);

  int out = bs(nums, 2, nums.size());

  char ch = '5';

  int num = ch - '0';

  cout<<num<<endl;

  cout << out;

}