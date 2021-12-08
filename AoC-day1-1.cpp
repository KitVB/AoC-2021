#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
  ll a[2000],count=0;
  cin>>a[0];
  ll check=a[0];
  for(int i=1; i<2000; i++)
  {  
    cin>>a[i];
    if(a[i]>check) count++;
    check=a[i];
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}