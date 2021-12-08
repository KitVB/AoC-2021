#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a[1000][1000];
  for(int i=0; i<1000; i++)
  {
    for(int j=0; j<1000; j++)
    {
      a[i][j]=0;
    }
  }

  int x1,y1,x2,y2;
  for(int n=1; n<=500; n++)
  {
    cin>>x1>>y1>>x2>>y2;
    int incx=abs(x2-x1);
    int incy=abs(y2-y1);
    if(x1==x2 && y1>y2)
    {
      for(int j=y2; j<=y1; j++)
      {
        a[x1][j]++;
      }
    }
    else if(x1==x2 && y1<y2)
    {
      for(int j=y1; j<=y2; j++)
      {
        a[x1][j]++;
      }
    }
    else if(y1==y2 && x1>x2)
    {
      for(int i=x2; i<=x1; i++)
      {
        a[i][y1]++;
      }
    }
    else if(y1==y2 && x1<x2)
    {
      for(int i=x1; i<=x2; i++)
      {
        a[i][y1]++;
      }
    }
  }
  int count=0;
  for(int i=0; i<1000; i++)
  {
    for(int j=0; j<1000; j++)
    {
      if(a[i][j]>=2)
      {
        count++;
      }
    }
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}