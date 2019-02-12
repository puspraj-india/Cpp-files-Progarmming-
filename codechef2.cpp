#include<bits/stdc++.h>
#define nloop(n) for(int i=0;i<n;i++)
#define rloop(n) for(int i=n-1;i>=0;i--)
#define kloop(k,n) for(int i=k;i<=n;i++)
#define rkloop(n,k) for(int i=n;i>=k;i--)
#define loop(v) for(auto &x:v)
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
  int T,a,b;
  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    cin>>a>>b;
    if(a==b)
    {
      cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
  }
  return 0;
}
