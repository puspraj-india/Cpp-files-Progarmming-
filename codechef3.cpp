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
  int T;
  ios_base::sync_with_stdio(false);
  cin>>T;
  int n,flag=0,count=0;
  while(T--)
  {
    flag=0;

    cin>>n;
    int a[n+1];
    um map;
    umiter iter;
    kloop(1,n)
    {
      cin>>a[i];
      if(map.find(a[i])==map.end())
      {
        map[a[i]]=1;
      }
      else map[a[i]]+=1;
    }
    loop(map)
    {

      if(i.second>1)
      {
        count=0;
        for(int j=1;j<=n;j++)
        {
          if(a[j]==i.first)
          {
            if(map.find(j)!=map.end())
            count++;
            if(count==2)
            {
              flag=1;
              map.clear();
              break;
            }
          }
        }
        if(flag==1) break;
      }
    }
    if(flag==1)cout<<"Truly Happy"<<endl;
    else cout<<"Poor Chef"<<endl;
  }
  return 0;
}
