#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
  ll x;
  vector<ll> a(9,0);
  for(int i=0; i<300; i++)
  {
    cin>>x;
    a[x]++;
  }
  for(int d=1; d<=80; d++)
  {
    ll temp=a[0];
    for(int i=1; i<9; i++)
    {
      a[i-1]=a[i];
    }
    a[8]=temp;
    a[6]+=temp;
  }
  ll sum=0;
  for(int i=0; i<9; i++)
  {
    sum+=a[i];
  }
  cout<<sum;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}