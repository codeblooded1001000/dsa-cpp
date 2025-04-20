#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

// generally known as backtracking
void headRecursion(int i){
  if(cnt==4){
    return;
  }
  cnt = cnt+1;
  headRecursion(i+1);
  cout<<i<<endl;
}

// more often used
void tailRecursion(int i){
  if(cnt==4){
    return;
  }
  cnt = cnt+1;
  cout<<i<<endl;
  tailRecursion(i+1);
}

int main(){
  headRecursion(0);
  return 0;
}