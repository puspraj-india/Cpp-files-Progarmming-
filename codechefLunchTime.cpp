#include<bits/stdc++.h>
#define nloop(s,n) for(int i=s;i<=n;i++)
#define rloop(n,s) for(int i=n;i>=s;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
#define m map<int,int>
#define vec vector<int>
#define us unordered_set<int>
#define set set<int>
#define mset multiset<int>
#define line cout<<endl
#define viter vector<int>::iterator
#define umiter unordered_map<int,int>::iterator
#define usiter unordered_set<int>::iterator
#define siter set<int>::iterator;
#define miter map<int,int>::iterator
#define mode 1000000007
using namespace std;
int main()
{
  int T;
  ios_base::sync_with_stdio(false);
  cin>>T;
  int n,x;
  while(T--)
  {
    cin>>n;
    vec arr;
    ll l=0;
    nloop(0,n-1)
    {
      cin>>x;
      arr.pb(x+l);
      l=x+l;
    }
    long yb,mb,db,yc,mc,dc;
    cin>>yb>>mb>>db>>yc>>mc>>dc;
    ull count=0;


    if(yc==yb)
    {
      if(mb==mc)
      {
        count+=dc-db+1;
        cout<<count<<endl;
        arr.clear();
        continue;
      }
        if(mb==1)
        {
          count+=arr[0]-db+1+arr[mc-2]-arr[0]+dc;
        }
        else
        {
          count+=arr[mc-2]-arr[mb-2]-db+dc+1;
        }
      cout<<count<<endl;
      arr.clear();
      continue;
    }


    if(yb%4==0)
    {
      if(mb==1)
      count+=1+arr[n-1]-db+1;
      else count+=1+arr[n-1]-arr[mb-2]-db+1;
    }
    else
    {
      if(mb==1)
      count+=arr[n-1]-db+1;
      else count+=arr[n-1]-arr[mb-2]-db+1;
    }

    yb++;
    while(yb<yc)
    {
      if(yb%4==0)
      count+=arr[n-1]+1;
      else count+=arr[n-1];
      yb++;
    }



      if(mc==1)
      count+=dc;
      else count+=arr[mc-2]+dc;

    cout<<count<<endl;
    arr.clear();

  }
  return 0;
}
