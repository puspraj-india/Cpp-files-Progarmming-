#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {

    vector<int> a;
    vector<pair<int,int>> p;
    long x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      a.push_back(x);
    }
    vector<int>a2=a;
    if(n==2)
    {
      if(a[0]<a[1])a[0]=-a[0];
      else if(a[0]>a[1])a[1]=-a[1];
      for(int i=0;i<2;i++)
      cout<<a[i]<<" ";
      a.clear();
      p.clear();
      continue;
    }
    if(a[0]<a[1])
    {
      p.push_back(make_pair(a[0],0));
    }
    if(a[n-1]<a[n-2])
    {
      p.push_back(make_pair(a[n-1],n-1));
    }
    for(int i=1;i<n-1;i++)
    {
      if(a[i]<a[i-1]&&a[i]<a[i+1])
      p.push_back(make_pair(a[i],i));
    }
    sort(p.begin(),p.end(),greater<pair<int,int>>());
    for(int i=0;i<p.size();i++)
    {

      if(p[i].second==0 && a2[p[i].second]<a2[p[i].second+1])
      {
        a2[p[i].second+1]=a2[p[i].second+1]-a2[p[i].second];
        a2[p[i].second]=-a2[p[i].second];
      }
      else if(p[i].second==n-1 && a2[p[i].second]<a2[p[i].second-1])
      {
        a2[p[i].second-1]=a2[p[i].second-1]-a2[p[i].second];
        a2[p[i].second]=-a2[p[i].second];
      }
      else if (a2[p[i].second]<a2[p[i].second-1] && a2[p[i].second]<a2[p[i].second+1])
      {
        a2[p[i].second-1]=a2[p[i].second-1]-a2[p[i].second];;
        a2[p[i].second+1]=a2[p[i].second+1]-a2[p[i].second];;
        a2[p[i].second]=-a2[p[i].second];
      }
    }
    for(int i=0;i<n;i++)
    {
      if(a2[i]<0)
      cout<<a2[i]<<" ";
      else cout<<a[i]<<" ";
    }
    cout<<endl;
    p.clear();
    a.clear();
    a2.clear();
  }
}
