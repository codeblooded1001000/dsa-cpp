#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(vector<int>& arr, int i){
  if(i>=arr.size()/2) return;

  swap(arr[i], arr[arr.size()-i-1]);
  solve(arr, i+1);
}

int main(){
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(4);
  a.push_back(5);
  a.push_back(6);
  a.push_back(7);

  solve(a, 0);
  for(int i=0; i<a.size(); i++){
    cout<<a[i]<<", ";
  }
  return 0;
}