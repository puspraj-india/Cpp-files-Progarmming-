#include<bits/stdc++.h>
#define nloop(n) for(int i=0;i<n;i++)
#define rloop(n) for(int i=n-1;i>=0;i--)
#define kloop(k,n) for(long long i=k;i<=n;i++)
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

ull lcm(ull a,ull b)
{
  if(b%a==0)
  {
    return b;
  }
  return (a*b)/__gcd(a,b);
}


int main()
{
  ull T,n,i,a,b,c,d,l,h;
  ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    cin>>n;
    a=0;
    b=1;
    c=1;
    d=4;
    kloop(1,n)
    {
      c=1;
      d=1<<i;
      l=lcm(b,d);
      a=a*(l/b);
      c=c*(l/d);
      if(i%2==0)
      {
        a=a-c;
      }
      else
      {
        a=a+c;
      }
      b=l;
    }
    cout<<a<<" "<<b<<" ";

  }
  return 0;
}
