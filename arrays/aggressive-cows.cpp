#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool canPlace(vector<int> stalls, int d, int cows)
{
  int cnt = 1, last = stalls[0];

  for (int i = 1; i < stalls.size(); i++)
  {
    if (stalls[i] - last >= d)
    {
      cnt++;
      last = stalls[i];
      if (cnt >= cows)
        return true;
    }
  }

  return false;
}

int aggressiveCows(vector<int> stalls, int cows)
{
  sort(stalls.begin(), stalls.end());
  int l = 1, h = stalls[stalls.size()-1] - stalls[0], ans = -1;
  while (l <= h)
  {
    int m = l + (h - l) / 2;

    if (canPlace(stalls, m, cows))
    {
      ans = m;
      l = m + 1;
    }
    else
    {
      h = m - 1;
    }
  }
  return ans;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int N, C;
    cin >> N >> C;

    vector<int> stalls(N);
    for (int i = 0; i < N; i++)
    {
      cin >> stalls[i];
    }
    cout<<"Distance: "<<aggressiveCows(stalls, C)<<endl;
  }
  return 0;
}