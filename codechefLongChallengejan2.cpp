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
  //ios_base::sync_with_stdio(false);
  cin>>T;
  while(T--)
  {
    unsigned long long n,a,b,mula=0,mulb=0,mulab=0;
    unsigned long long x;
    cin>>n>>a>>b;
    nloop(0,n-1)
    {
      cin>>x;
      if(x%a==0 &&x%b==0)
      mulab++;
      else if(x%a==0)
      mula++;
      else if(x%b==0)
      mulb++;
    }

    if(mulab!=0)
    {
      mula+=1;
    }
    if(mula>mulb)
    {
      cout<<"BOB";
      line;
    }
    else
    {
      cout<<"ALICE";
      line;
    }
    //cout<<mula<<"\t"<<mulb;
  }
  return 0;
}
