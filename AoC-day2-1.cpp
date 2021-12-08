#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
  ll x=0,y=0;
  for(int i=1; i<=1000; i++)
  {  
    string s;
    getline(cin,s);
    int n=s.size();
    if(s[0]=='f') x+=(int(s[n-1])-48);
    if(s[0]=='u') y-=(int(s[n-1])-48);
    if(s[0]=='d') y+=(int(s[n-1])-48);
  }
  cout<<x*y;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}