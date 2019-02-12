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
  int n;
  while(T--)
  {
    int day[32]={0};
    int d,q,di,pi;
    cin>>d;
    nloop(0,d-1)
    {
      cin>>di>>pi;
      day[di]=pi;
    }
    nloop(1,31)
    {
      if(day[i-1]!=0)
      day[i]+=day[i-1];
    }
    cin>>q;
    nloop(1,q)
    {
      cin>>di>>pi;
      if(day[di]>=pi)
      cout<<"Go Camp"<<endl;
      else cout<<"Go Sleep"<<endl;
    }
  }
  return 0;
}
