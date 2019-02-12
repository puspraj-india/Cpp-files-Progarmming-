#include<bits/stdc++.h>
#define nloop(n) for(int i=0;i<n;i++)
#define rloop(n) for(int i=n-1;i>=0;i--)
#define kloop(k,n) for(int i=k;i<=n;i++)
#define rkloop(n,k) for(int i=n;i>=k;i--)
#define loop(v) for(auto &i:v)
#define pb push_back
#define ull unsigned long long
#define ll long long
#define um unordered_map<int,int>
#define vec vector<int>
#define us unordered_set<int>
#define line cout<<endl
#define viter vector<int>::iterator
#define umiter unordered_map<int,int>::iterator
#define usiter unordered_set<int>::iterator
#define mode 1000000007
using namespace std;
int main()
{
  int T,n,q,k,loc=0,sum=0,count=0;
  um map;
  umiter iter;
  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    string s;
    loc=0;
    cin>>n>>q>>k;
    bool a[n];
    nloop(n)
    cin>>a[i];
    cin>>s;
    nloop(s.length())
    {
      if(s[i]=='!')
      loc=((loc+n)-1)%n;
      else
      {
        for(int j=loc;j<n;j++)
        cout<<a[j]<<" ";
        for(int j=0;j<loc;j++)
        cout<<a[j]<<" ";
        count=0;
        sum=0;
        for(int j=loc;j<n&&sum<k;j++)
        {
          if(a[j]==1)
          {
            count++;
            if(sum<count) sum=count;
          }
          else count=0;
        }
        for(int j=0;j<loc&&sum<k;j++)
        {
          if(a[j]==1)
          {
            count++;
            if(sum<count) sum=count;
          }
          else count=0;
        }
        cout<<sum<<endl;
      }
    }

  }
  return 0;
}
