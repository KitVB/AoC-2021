#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s,t;
  vector<string> a;
  vector<string> b;
  for(int i=0; i<1000; i++)
  {
    cin>>s;
    a.push_back(s);
    b.push_back(s);
  }
  for(int j=0; j<12; j++)
  {
    int ca0=0,ca1=0;
    for(int i=0; i<a.size(); i++)
    {
      ((int)(a[i][j])-48?ca1++:ca0++);
    }
    for(int x=0; x<a.size(); x++)
    {
      if((ca1>=ca0 && a[x][j]=='0' && a.size()>1) || (ca0>ca1 && a[x][j]=='1' && a.size()>1))
      {
        a.erase(a.begin()+x);
        x--;
      }
    }
    int cb0=0,cb1=0;
    for(int i=0; i<b.size(); i++)
    {
      ((int)(b[i][j])-48?cb1++:cb0++);
    }
    for(int y=0; y<b.size(); y++)
    {
      if((cb1<cb0 && b[y][j]=='0' && b.size()>1) || (cb0<=cb1 && b[y][j]=='1' && b.size()>1))
      {
        b.erase(b.begin()+y);
        y--;
      }
    }
  }
  int n=bitset<12>(a[0]).to_ulong();
  int m=bitset<12>(b[0]).to_ulong();
  cout<<n*m;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}