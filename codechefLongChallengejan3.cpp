#include<bits/stdc++.h>
#define nloop(s,n) for(int i=s;i<=n;i++)
#define rloop(n,s) for(int i=n;i>=s;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
//#define m map<int,int>
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
  ios_base::sync_with_stdio(false);

  long x;
  vector<long> v1;
  vector<long> v2;
    int n,m;
    cin>>n>>m;

    nloop(0,n-1)
    {
      cin>>x;
      v1.pb(x);
    }
    nloop(0,m-1)
    {
      cin>>x;
      v2.pb(x);
    }
    long min=0;
    nloop(1,n-1)
    {
      if(v1[min]>v1[i])
      min=i;
    }
    long max=0;
    nloop(0,m-1)
    {
      cout<<min<<" "<<i<<endl;
      if(v2[max]<v2[i])
      max=i;
    }
    nloop(0,n-1)
    {
      if(i!=min)
      cout<<i<<" "<<max<<endl;
    }
      v1.clear();
      v2.clear();
  return 0;
}
