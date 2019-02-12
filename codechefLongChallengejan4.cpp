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
  unsigned long long n,p,result;
  while(T--)
  {
    result=0;
    cin>>n>>p;
    if(n==1||n==2)
    {
      result=p*p*p;
      cout<<result;
      line;
      continue;
    }
    if(n%2!=0)
    {
      result=(p-n/2)*(p-n/2);
      result+=(p-n)*(p-n);
      result+=(p-n)*(p-n/2);
      cout<<result;
      line;
    }
    else
    {
      result=(p-n/2+1)*(p-n/2+1);
      result+=(p-n)*(p-n);
      result+=(p-n)*(p-n/2+1);
      cout<<result;
      line;
    }
  }
  return 0;
}
