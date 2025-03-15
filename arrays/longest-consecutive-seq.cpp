#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // [9,1,4,7,3,-1,0,5,8,-1,6]
  vector<int> inp;
  inp.push_back(9);
  inp.push_back(1);
  inp.push_back(4);
  inp.push_back(7);
  inp.push_back(3);
  inp.push_back(-1);
  inp.push_back(0);
  inp.push_back(5);
  inp.push_back(8);
  inp.push_back(-1);
  inp.push_back(6);

  sort(inp.begin(), inp.end());
  for(int i = 0; i<inp.size(); i++){
        cout << inp[i] << ", ";
  }

  return 0;
}