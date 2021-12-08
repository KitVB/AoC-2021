#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s,t;
  string a[1000];
  for(int i=0; i<1000; i++)
  {
    cin>>a[i];
  }
  for(int j=0; j<12; j++)
  {
    int c0=0,c1=0;
    for(int i=0; i<1000; i++)
    {
      ((int)(a[i][j])-48?c1++:c0++);
    }
    s+=to_string((c1>c0?1:0));
    t+=to_string((c1>c0?0:1));
  }
  int n=bitset<12>(s).to_ulong();
  int m=bitset<12>(t).to_ulong();
  cout<<n*m;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}