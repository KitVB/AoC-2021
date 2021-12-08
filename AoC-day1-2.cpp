#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
  ll a[2000],count=0;
  for(int i=0; i<2000; i++)
  {  
    cin>>a[i];
  }
  int check=a[0]+a[1]+a[2];
  for(int i=1; i<1998; i++)
  {  
    if(a[i]+a[i+1]+a[i+2]>check) count++;
    check=a[i]+a[i+1]+a[i+2];
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}