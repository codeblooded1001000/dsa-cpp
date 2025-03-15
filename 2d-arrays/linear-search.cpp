#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> isPresent(int arr[][4], int target, int rows, int cols){
  vector<int> out(2, -1);
  for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
      if(arr[i][j] == target){
        out[0] = i;
        out[1] = j;
        return out;
      }
    }
  }
  return out;
}

int main(){

  int arr[3][4];

  for(int row = 0; row<3; row++){
    for(int col = 0; col<4; col++){
      cin >> arr[row][col];
    }
  }

  cout << endl;

  for(int row = 0; row<3; row++){
    for(int col = 0; col<4; col++){
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  cout<< "Enter element to find: ";
  int target;
  cin >> target;

  vector<int> out = isPresent(arr, target, 3, 4);

  for(int i = 0; i<out.size(); i++){
    cout << out[i] << " ";
  }

  cout << endl;

  return 1;
}